#include <iostream>
using namespace std;
int main()
{ 
  char nama [20]; 
  char hadiah [200]; 
  float nilai1=0, nilai2=0, nilai3=0, total=0, rata;
  
  cout << "Program Hitung Nilai Rata-Rata" << endl;
  
  cout << "Nama Siswa : ";
  cin >> nama;
  
  cout << "Nilai Pertandingan 1 = "; 
  cin >> nilai1;
  
  cout << "Nilai Pertandingan 2 = "; 
  cin >> nilai2;
  
  cout << "Nilai Pertandingan 3 = "; 
  cin >> nilai3;
  
  rata = (nilai1+nilai2+nilai3)/3;
  
  cout << endl; 
  cout << "Siswa yang bernama : " << nama << endl; 
  cout << "Memperoleh Nilai rata-rata = " << rata << endl; 
  cout << "Dari hasil perlombaan yang diikutinya" << endl;
  
  if (rata >= 85) 
  cout << "Mendapat Hadiah Komputer Core i5" << endl;
  else if (rata >= 70)
  cout << "Mendapat Hadiah Uang sebesar Rp. 2.500.000" << endl; 
 else if (rata < 70) 
 cout << "Mendapat Hadiah Hiburan" << endl; 
 return 0;
}