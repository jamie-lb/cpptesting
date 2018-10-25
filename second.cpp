# include <iostream>

using namespace std;

bool ArrayEq(int[], int[], int);

int main() {
  int arraySize = 5;
  int firstArray[arraySize];
  int secondArray[arraySize];
  for (int i = 0; i < arraySize; i++) {
    firstArray[i] = i + 2;
    secondArray[i] = i + 2;
  }
  bool equal = ArrayEq(firstArray, secondArray, arraySize);
  cout << "Arrays are equal: " << (equal ? "true" : "false") << endl;
  return 0;
}

bool ArrayEq(int first[], int second[], int size) {
  for (int i = 0; i < size; i++) {
    if (first[i] != second[i]) {
      return false;
    }
  }
  return true;
}

