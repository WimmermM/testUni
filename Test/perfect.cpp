#include <iostream>
using namespace std;
int main(void){

int number, divisor , sum = 0;

cout <<"Enter number for perfect check : ";
cin >> number;
for (int i = 1; i < number; i++) {
  divisor = number % i;
  if (divisor == 0) {
    sum = sum + i;
  }
}

if (sum == number) {
  cout << number << " is perfect";
}
else{
  cout << number << " is not perfect";
}

}
