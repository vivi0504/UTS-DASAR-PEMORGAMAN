#include<iostream>

using namespace std;

void tambah(int x, int y){
	int usia;
	
	usia = x - y;
	cout<<"Usia anda adalah "<<usia<<endl;
}

int main()
{
	char ulang;
	do
	{
	int a, b, usia;
	
	cout<<"Masukkan tahun sekarang : ";
	cin>>a;
	cout<<"Masukkan tahun lahir	: ";
	cin>>b;
	
	usia = a - b;
	
	cout<<"Usia anda adalah "<<usia<<endl;
	
	
	if(usia>=1,usia<4)
		cout<<"PAUD"<<endl;
	
		else
		if(usia>=4,usia<=6)
		cout<<"Masuk Kategori Taman Kanak-Kanak"<<endl;
	
		else
		if(usia>=7,usia<=12)
		cout<<"Masuk Kategori Sekolah Dasar"<<endl;
	
		else
		if(usia>=13,usia<=16)
		cout<<"Masuk Kategori Sekolah Menengah Pertama"<<endl;
	
		else
		if(usia>=17,usia<=19)
		cout<<"Masuk Kategori Sekolah Menengah Atas"<<endl;
	
		else
		if(usia>=20,usia<=23)
		cout<<"Masuk Kategori Mahasiswa"<<endl;
	
		else
		if(usia>23)
		cout<<"Masuk Kategori Sudah bekerja dan menikah"<<endl;
		
		cout<<"Apakah anda ingin mengulang program  ";
		cout<<"(y/n)";cin>>ulang;
	}
	while (ulang=='y');
	cout<<"tidak mengulang dan terimakasih"<<endl;
	
	system("pause");
	return 0;
}
