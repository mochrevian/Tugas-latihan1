#include <iostream>
using namespace std;
int pangkat(int a, int b);
int main (){
  int a, b;
  cout << "MENGHITUNG PANGKAT" << endl;
  cout << "Masukkan Nilai X = ";
  cin >> a;
  cout << "Masukkan Nilai Y = ";
  cin >> b;
  cout << "Pangkat " << a << " dari " << b << " adalah " << pangkat(a, b) << endl;
}
int pangkat(int a, int b){
  if (b==0)
    return 1;
  else
    return a*pangkat(a, b-1);
}