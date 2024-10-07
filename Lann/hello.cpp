#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char nama[30], alamat[225];
	int tinggi, berat, harga;
	cout<<"Hello World"<<endl;
	cout<<"harga			:";
	cin>>harga;
	cout<<"Nama Anda		:";
	cin>>nama;
	cout<<"Alamat anda		:";
	cin>>alamat;
	cout<<"Tinggi anda		:";
	cin>>tinggi;
	cout<<"Berat badan anda	:";
	cin>>berat;
	
	cout<<endl;
	cout<<"Data diri Anda";
	cout<<"Nama anda		: "<<nama<<endl;
	cout<<"Alamat anda			: "<<alamat<<endl;
	cout<<"Tinggi badan anda		: "<<tinggi<<endl;
	cout<<"Berat badan anda		: "<<berat<<endl;
	cout<<"harga :"<<harga<<endl;
	getch();
}
