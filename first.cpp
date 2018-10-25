# include <iostream>

using namespace std;

int getSum();

int main() {
  cout << "The sum of numbers from 1 to 10 is: " << getSum() << endl;
  return 0;
}

int getSum() {
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += i;
  }
  return sum;
}

