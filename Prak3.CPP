#include <iostream.h>
#include <conio.h>
int main()
{
	struct segitiga
   {
   	float keliling;
      float luas;
   };
   segitiga alas, tinggi, miring, x;
   cout<<"       ---------------------------------"<<endl;
   cout<<"       Menghitung LUAS dan KELILING SEGITIGA "<<endl;
   cout<<"       ----------------------------------------------"<<endl;
   cout<<"\t === Z I Z K Y Y U N I N G S I H === \n\n";
   cout<<"\t ===      5 1 0 1 7 0 2 2        === \n\n";
   cout<<"\t ===     S I ' 17 The Best       === \n\n";
   cout<<"\t ===~~~~~~~~~~~~~~~* *~~~~~~~~~~~~~~~~ \n\n";
   cout<<"Keterangan : "<<endl;
   cout<<" A = Sisi Alas Segitiga "<<endl;
   cout<<" B = Sisi Tinggi Segitiga "<<endl;
   cout<<" C = Sisi Miring Segitiga "<<endl;
   cout<<"----------------------------------------------"<<endl;
   cout<<" A = ";
   cin>>alas.luas;
   cout<<" B = ";
   cin>>tinggi.luas;
   cout<<" C = ";
   cin>>miring.luas;
   cout<<endl;
   x.luas=(alas.luas*tinggi.luas)/2;
   x.keliling=alas.luas+tinggi.luas+miring.luas;
   cout<<"Luas Segitiga = "<<x.luas<<" cm "<<endl;
   cout<<"Keliling Segitiga = "<<x.keliling<<" cm "<<endl<<endl;
   getch();
   }
