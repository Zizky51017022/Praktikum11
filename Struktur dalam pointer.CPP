#include <iostream.h>
#include <conio.h>
//Deklarasi Struktur
struct koordinat
{int x,y; };
void ubah_posisi (koordinat *posisi); // prototipt
void main ()
{
koordinat posisi; //Definisi Variabel Struktur
posisi.x = 10;
posisi.y = 30;
cout << "Isi Semua : x = " << posisi.x << " y = " << posisi.y <<endl;
ubah_posisi(&posisi); //parameter berupa alamat
cout << " Isi Sekarang : x = " << posisi.x << " y = " << posisi.y << endl;
}

// Definisi Fungsi
void ubah_posisi (koordinat *posisi)
{
(*posisi).x = 100;
(*posisi).y = 300;
getch();
}

