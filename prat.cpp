#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, rmainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    rmainder = n % 10;
    reversed_number = reversed_number * 10 + rmainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_number;

  return 0;
}