#include <iostream>
#include <stdio.h>
using std::cout;
using std::cin;
using std::endl;

int mcd(int a, int b)
{
  int c, d, e;
  e = a % b;
  do
  {
    d = b;
    b = e;
    e = d % b;
  } while(e != 0);
  return (b);
}

int main(){
  int a, b, c, d, e;
  cout << "Algoritmo de Euclides " << endl;
  cout << "Introduce un numero " << endl;
  cin >> a;
  cout << "Introduce otro numero " << endl;
  cin >> b;
  cout << "El M.C.D de los numeros es " << mcd(a, b) << endl;
  return 0;
}
