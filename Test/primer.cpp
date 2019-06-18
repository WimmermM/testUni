#include <iostream>
using namespace std;
int main(void){
  int a = 1;
  int b = 100;

  for (size_t i = a; i < b; i++) {

    for (size_t j = 2; j <= i; j++) {
      if (!(i%j)&&(i!=j)) {
        break;
      }
      if (j==i) {
        cout << i << endl;
      }
    }
  }
}
