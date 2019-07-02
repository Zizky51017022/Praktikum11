#include <iostream.h>
#include <conio.h>
struct Data
{
int x;
int y;
};
void tampilkan(Data Nilai);
void main ()
{
Data Nilaiku;
Nilaiku.x = 10;
Nilaiku.y = 16;
tampilkan(Nilaiku);
}
void tampilkan (Data Nilai)
{
cout << "Nilai X = " <<Nilai.x << endl;
cout << "Nilai Y = " <<Nilai.y << endl;
getch ();
}
