#include <iostream>
using namespace std;
int main(void){
  int numbers [] = {1,2,3,4,5,6,7,8,9,10};
  int largest = 0;
  int size = 10;

  for (int i = 0; i < size; i++) {
    if(numbers[i] > numbers[largest]){
      largest = i;
    }
  }
cout << largest;
}
