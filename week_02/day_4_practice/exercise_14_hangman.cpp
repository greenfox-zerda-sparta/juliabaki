//============================================================================
// Name        : exercise_14_hangman.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

bool is_word_contains_letter(char letter, string word, int length, int& letter_index) {
  bool result = false;
  for (letter_index = 0; letter_index < length; letter_index++) {
    if (word[letter_index] == letter){
      result = true;
      break;
    }
  }
  return result;
}

int main() {
  string word = "love";
  string unseen_word = "_ _ _ _";
  int length = word.length();
  int wrong_guesses = 5;
  int good_guesses = 0;

  int letter_index;

  cout << unseen_word << endl << endl;

  while(wrong_guesses > 0 && good_guesses < length){
    cout << "Give me a letter:" << endl;
    char letter;
    cin >> letter;

    if(is_word_contains_letter(letter, word, length, letter_index)){
      unseen_word[letter_index*2] = letter;
      good_guesses++;
    } else {
      wrong_guesses--;
      cout << "Wrong guess." << endl << "Remaining wrong guesses: " << wrong_guesses << endl << endl;
    }
    cout << unseen_word << endl << endl;
  }
  if(good_guesses == length){
          cout << "You won! :)";
  } else {
    cout << "Game over :(";
  }
  return 0;
}
