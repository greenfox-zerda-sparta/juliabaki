#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <iomanip>
#include <ctype.h>
#include <algorithm>

using namespace std;

// Write a program that creates a text file named alice_words.txt
// containing an alphabetical listing of all the words,
// and the number of times each occurs, in the text version of
// Alice’s Adventures in Wonderland.
// (You can obtain a free plain text version of the book,
// along with many others, from http://www.gutenberg.org.)
//
// The first 10 lines of your output file should look something like this:
//
// Word              Count
// =======================
// a                 631
// a-piece           1
// abide             1
// able              1
// about             94
// above             3
// absence           1
// absurd            2
//
// How many times does the word alice occur in the book?
// What is the longest word in Alice in Wonderland?
// How many characters does it have?

template<typename A, typename B>
std::pair<B, A> flip_pair(const std::pair<A, B> &p) {
  return std::pair<B, A>(p.second, p.first);
}

template<typename A, typename B>
std::multimap<B, A> flip_map(const std::map<A, B> &src) {
  std::multimap<B, A> sorted_map;
  std::transform(src.begin(), src.end(), std::inserter(sorted_map, sorted_map.begin()), flip_pair<A, B>);
  return sorted_map;
}

string removeNotAlphanumericCharactersFromString(string input) {
  string result = "";
  for (unsigned int i = 0; i < input.length(); i++) {
    if (isalnum(input[i])) {
      result += input[i];
    } else if (i != 0 && i != input.length() - 1) {
      if (isalnum(input[i + 1]) && isalnum(input[i - 1])) {
        result += input[i];
      }
    }
  }
  return result;
}

bool isStringContainsOnlyAlphanumericCharacters(string input) {
  for (unsigned int i = 0; i < input.length(); i++) {
    if (!isalnum(input[i])) {
      return false;
    }
  }
  return true;
}

bool isDigit(string input) {
  for (unsigned int i = 0; i < input.length(); i++) {
    if (isdigit(input[i])) {
      return true;
    }
  }
  return false;
}

int main() {

  map<string, int> words;

  try {
    string word;
    ifstream myfile("alice_in_wonderland.txt");
    if (myfile.is_open()) {
      while (myfile >> word) {
        if (!isStringContainsOnlyAlphanumericCharacters(word)) {
          word = removeNotAlphanumericCharactersFromString(word);
        }
        if (!isDigit(word) && word != "") {
          for (unsigned int i = 0; i < word.length(); ++i) {
            word[i] = tolower(word[i]);
          }
          words.insert(make_pair(word, words[word]++));
        }
      }
      myfile.close();
    } else {
      throw "Not able to read this file.";
    }
  } catch (const char* error) {
    cout << "Error: " << error << endl;
  }

  ofstream new_file;
  new_file.open("alice_words_occurence.txt");
  new_file << setw(20) << left << "Word" << "Count" << '\n';
  new_file << setfill('=') << setw(25) << right << "=" << '\n';
  for (map<string, int>::iterator it = words.begin(); it != words.end(); it++) {
    new_file << setfill(' ') << setw(20) << left << it->first << right << it->second << '\n';
  }
  new_file.close();

  std::multimap<int, string> sorted_map = flip_map(words);
  ofstream new_file_2;
  new_file_2.open("alice_words_sorted_occurence.txt");
  new_file_2 << setw(20) << left << "Word" << "Count" << '\n';
  new_file_2 << setfill('=') << setw(25) << right << "=" << '\n';
  for (multimap<int, string>::reverse_iterator rit = sorted_map.rbegin(); rit != sorted_map.rend(); rit++) {
    new_file_2 << setfill(' ') << setw(20) << left << rit->second << right << rit->first << '\n';
  }
  new_file_2.close();

  //Multimaps are associative containers that store elements formed by a combination
  //of a key value and a mapped value, following a specific order, and where multiple
  //elements can have equivalent keys.

  return 0;
}
