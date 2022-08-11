#include <iostream>
#include <math.h>

using namespace std;

bool perfectsquare(int n){
  if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
      return true;
    }
    else {
      return false;
    }
}


int main() {
  int entrada;
  cout << "digite o numero a ser verificado: ";
  cin >> entrada;


  if (perfectsquare(5 * pow(entrada,2) + 4) || perfectsquare(5 * pow(entrada,2) - 4)) {
    cout << entrada << " pertece a sequencia de fibonacci";
  } else {
    cout << entrada << " pertece NÃO a sequencia de fibonacci";
  }
}