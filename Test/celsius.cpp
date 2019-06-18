#include <iostream>
using namespace std;
int main(void){
  float celsius, fahrenheit;
  cout << "Input the temperature in Celsius : ";
  cin >> celsius;
  fahrenheit= (celsius * 9)/5+32;
  cout<<"temperature in Fahrenheit : " <<fahrenheit;
  return 0;
}
