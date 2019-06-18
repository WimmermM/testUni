#include <iostream>
using namespace std;
int main(void){
  float celsius, fahrenheit;
  cout << "Input the temperature in Fahrenheits : ";
  cin >> fahrenheit;
  celsius = (fahrenheit -32 )* 5/9;
  cout<<"temperature in Fahrenheit : " <<celsius;
  return 0;
}
