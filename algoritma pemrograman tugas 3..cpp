#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 string nBarang[100];char lagi= 'y';
 int x = 0, hBarang[100],  jBarang[100], tBarang[100], total=0;

while( lagi == 'y' || lagi == 'Y')
{
  cout << "nama barang"; cin >> nBarang[x]; 
  cout << "harga barang"; cin >> hBarang[x];
  cout << "jumlah barang"; cin >> jBarang[x];
 tBarang[x] = hBarang[x] * jBarang[x];
total  += tBarang[x];
x++;

cout<<"ingin lanjutkan?('Y/N)";
cin>>lagi;}
 
//Table
cout << "\nlaporan penjualan:\n";

 cout << setw(5) << "no"
     << setw(20) << "nama barang"     
	 << setw(20) << "harga barang"
     << setw(20) << "jumlah jual"
     << setw(20) << "total pendapatan\n";
     
for(int i=0;i< x;i++){
	cout << setw(5) << (i+1)
	<< setw(20) << nBarang[i]
	<< setw(20) << hBarang[i]
	<< setw(20) << jBarang[i]
	<< setw(20) << tBarang[i]
<<endl;
}

cout << "total penjualan dibayarkan : " << total;
 return 0;
}
