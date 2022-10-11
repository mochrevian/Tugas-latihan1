#include <iostream>
using namespace std;

int main()
{
  int prima, a, b=0;

  cout << "Masukkan Angka : ";
  cin >> prima;

  for (a=2; a<=prima/2; a+=1)
    {
      if (prima%a == 0)
      {
        b=1;
        break;
      }
    }
  if (b==0)
    cout << "Bilangan " << prima << " adalah bilangan Prima\n";
  else
    cout << "Bilangan " << prima << " bukanlah bilangan Prima\n";
  return 0;
}