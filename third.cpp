# include <iostream>

using namespace std;

struct Student {
  int id;
  bool isGrad;
};

int NumGrads(Student[], int);

int main() {
  int size = 20;
  Student students[size];
  for (int i = 0; i < size; i++) {
    Student student;
    student.isGrad = (i < 3);
    student.id = i;
    students[i] = student;
  }
  int count = NumGrads(students, size);
  cout << "Number of grads: " << count << endl;
  return 0;
}

int NumGrads(Student students[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (students[i].isGrad) {
      count++;
    }
  }
  return count;
}
