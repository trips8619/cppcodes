//reverse a number

#include <iostream>
using namespace std;

int main() {

  
  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_number;

  return 0;

