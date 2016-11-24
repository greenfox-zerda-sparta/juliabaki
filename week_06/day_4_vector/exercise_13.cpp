#include <iostream>
#include <vector>

using namespace std;

void increaseSpecificElementsByOne(vector<int>& v, unsigned int index);
void printVector(const vector<int>& v);
void printMatrix(const vector<vector<int>>& vec);
void mirrorHorizontally(vector<vector<int>>& vec);
void mirrorVertically(vector<vector<int>>& vec);

int main() {
  //Create a 2 dimensional vector with matrix!
  // 1 0 0 0
  // 0 1 0 0
  // 0 0 1 0
  // 0 0 0 1
  // Extend it to the following format:
  // 1 1 1 1 1
  // 0 1 0 0 1
  // 0 0 1 0 1
  // 0 0 0 1 1
  // 0 0 0 0 1
  // Mirror it horizontally!
  // Mirror it vertically!

  vector<vector<int> > vec(4, vector<int>(4, 0));

  try {
    printMatrix(vec);

    vec.insert(vec.begin(), vector<int>(5, 1));
    unsigned int size = vec.size();
    for (unsigned int i = 1; i < size; i++) {
      increaseSpecificElementsByOne(vec[i], i);
      vec[i].push_back(1);
    }

    cout << endl;
    printMatrix(vec);
    cout << endl;

    mirrorHorizontally(vec);
    printMatrix(vec);

    cout << endl;

    mirrorVertically(vec);
    printMatrix(vec);

  } catch (const char* e) {
    cout << "Error: " << e << endl;
  }

  return 0;
}

void increaseSpecificElementsByOne(vector<int>& v, unsigned int index) {
  unsigned int size = v.size();
  if (v.empty()) {
    throw "The vector is empty!";
  } else if (index < 0 || index > size) {
    throw "Invalid index!";
  } else {
    v[index]++;
  }
}

void printVector(const vector<int>& v) {
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }
}

void printMatrix(const vector<vector<int>>& vec) {
  for (unsigned int i = 0; i < vec.size(); i++) {
    for (unsigned int j = 0; j < vec[i].size(); j++) {
      cout << vec[i][j] << " ";
    }
    cout << endl;
  }
}

void mirrorHorizontally(vector<vector<int>>& vec) {
  unsigned int size = vec.size();
  for (unsigned int i = 0; i < size / 2; i++) {
    vector<int> temp = vec[i];
    vec[i] = vec[size - i - 1];
    vec[size - i - 1] = temp;
  }
}

void mirrorVertically(vector<vector<int>>& vec) {
  unsigned int size = vec.size();
  for (unsigned int i = 0; i < size; i++) {
    unsigned int row_size = vec[i].size();
    for (unsigned int j = 0; j < row_size / 2; j++) {
      int temp = vec[i][j];
      vec[i][j] = vec[i][size - j - 1];
      vec[i][size - j - 1] = temp;
    }
  }
}
