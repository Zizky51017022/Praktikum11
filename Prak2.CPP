#include <stdio.h>
#include <conio.h>
#include <iostream.h>
 int main ()
{
struct tgl
{
unsigned int hari;
unsigned int bulan;
unsigned int tahun;
};
struct alamat
{
char jalan[30];
char kota[20];
};
struct
{
char nama[40];
struct tgl masuk;
struct alamat tinggal;
float gaji;
}
karyawan = {" Zizky Yuningsih ", 10, 06, 2008, "Jl. Dangko No.12C ", "Makassar", 900000};
cout<<"\nDATA KARYAWAN \n";
cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
cout<<"Nama Karyawan : "<<karyawan.nama<<"\n";
cout<<"Tanggal Masuk : "<<karyawan.masuk.hari << karyawan.masuk.bulan<<karyawan.masuk.tahun<<"\n";
cout<<"Alamat     : "<<karyawan.tinggal.jalan << " "<<karyawan.tinggal.kota<<"\n";
cout<<"Gaji Perbulan Zisky : Rp. " <<karyawan.gaji;
getch ();
}

