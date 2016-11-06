//============================================================================
// Name        : vector.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct DoubleVector {
  double* array_of_elements;
  unsigned int number_of_elements;
};

DoubleVector* vector_construct(double input[], int size);
void print_vector(DoubleVector* vector);
double vector_at(DoubleVector& vector, unsigned int index);
void vector_insert(DoubleVector& vector, unsigned int index, double value);
unsigned int vector_find(DoubleVector& vector, double value);
void vector_remove(DoubleVector& vector, unsigned int index);
DoubleVector* vector_concat(DoubleVector& v1, DoubleVector& v2);

int main() {
  double array[] = { 1, 2, 3, 4, 5 };
  double array_v1[] = { 6, 7, 8 };
  double array_v2[] = { 9, 10 };
  DoubleVector* new_vector = vector_construct(array, 5);
  print_vector(new_vector);
  cout << vector_at(*new_vector, 5) << endl;
  cout << endl;
  vector_insert(*new_vector, 2, 8);
  print_vector(new_vector);
  cout << endl;
  cout << vector_find(*new_vector, 2);
  cout << endl;
  vector_remove(*new_vector, 3);
  print_vector(new_vector);
  cout << endl;
  DoubleVector* v1 = vector_construct(array_v1, 3);
  DoubleVector* v2 = vector_construct(array_v2, 2);
  DoubleVector* sum_of_vectors = vector_concat(*v1, *v2);
  print_vector(sum_of_vectors);

  delete[] sum_of_vectors->array_of_elements;
  delete sum_of_vectors;
  sum_of_vectors = nullptr;

  delete[] new_vector->array_of_elements;
  delete new_vector;
  new_vector = nullptr;

  delete v1;
  v1 = nullptr;
  delete v2;
  v2 = nullptr;

  return 0;
}

DoubleVector* vector_construct(double input[], int size) {
  DoubleVector* new_vector = new DoubleVector;
  new_vector->array_of_elements = new double[size];
  for (int i = 0; i < size; i++) {
    new_vector->array_of_elements[i] = input[i];
  }
  new_vector->number_of_elements = size;
  return new_vector;
}

void print_vector(DoubleVector* vector) {
  for (unsigned int i = 0; i < vector->number_of_elements; i++) {
    cout << vector->array_of_elements[i] << endl;
  }
}

double vector_at(DoubleVector& vector, unsigned int index) {
  if (vector.number_of_elements <= index) {
    return 0;
  }
  return vector.array_of_elements[index];
}

void vector_insert(DoubleVector& vector, unsigned int index, double value) {
  double* new_vector_array = new double[vector.number_of_elements + 1];
  for (unsigned int i = 0; i < index; i++) {
    new_vector_array[i] = vector.array_of_elements[i];
  }
  new_vector_array[index] = value;
  for (unsigned int j = index; j < vector.number_of_elements; j++) {
    new_vector_array[j + 1] = vector.array_of_elements[j];
  }
  vector.number_of_elements += 1;
  delete[] vector.array_of_elements;
  vector.array_of_elements = new_vector_array;
}

unsigned int vector_find(DoubleVector& vector, double value) {
  unsigned int index = 0;
  for (unsigned int i = 0; i < vector.number_of_elements; i++) {
    if (vector.array_of_elements[i] == value) {
      index = i;
    }
  }
  return index;
}

void vector_remove(DoubleVector& vector, unsigned int index) {
  double* resized_array = new double[vector.number_of_elements - 1];
  for (unsigned int i = 0; i < index; i++) {
    resized_array[i] = vector.array_of_elements[i];
  }
  for (unsigned int j = index + 1; j < vector.number_of_elements; j++) {
    resized_array[j - 1] = vector.array_of_elements[j];
  }
  vector.number_of_elements -= 1;
  delete[] vector.array_of_elements;
  vector.array_of_elements = resized_array;
}

DoubleVector* vector_concat(DoubleVector& v1, DoubleVector& v2) {
  DoubleVector* sum_of_vectors = new DoubleVector;
  sum_of_vectors->number_of_elements = v1.number_of_elements + v2.number_of_elements;
  sum_of_vectors->array_of_elements = new double[sum_of_vectors->number_of_elements];
  for (unsigned int i = 0; i < v1.number_of_elements; i++) {
    sum_of_vectors->array_of_elements[i] = v1.array_of_elements[i];
  }
  for (unsigned int j = 0; j < v2.number_of_elements; j++) {
    sum_of_vectors->array_of_elements[v1.number_of_elements + j] = v2.array_of_elements[j];
  }
  delete[] v1.array_of_elements;
  delete[] v2.array_of_elements;

  return sum_of_vectors;
}
