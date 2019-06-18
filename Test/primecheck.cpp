#include <iostream>
using namespace std;
int main(void){
int input, check = 0;
  cout << "Input number to check if its prime : ";
  cin >> input;
    for (int i = 1; i <= input; i++) {
      if (input % i==0)
      {
        check ++;
      }

    }
      if (check == 2) {
        cout << " prime ";
      }
      else{
        cout << "not prime ";
    }
}
