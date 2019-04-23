#include <iostream.h>
#include <conio.h>
void main () {
char kode ;
char *hari;
clrscr();
cout<<"           MENENTUKAN NAMA HARI                \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"Input kode hari A-G/a-g : "; cin>>kode;
clrscr ();
if ((kode=='a') || (kode =='A')){
  hari = "senin";
  }
else if ((kode=='b')|| (kode=='B')){
 hari = "selasa";
 }
else if ((kode=='c')|| (kode=='C')){
  hari = "rabu";
  }
else if ((kode=='d')|| (kode=='D')){
 hari = "kamis";
 }
else if ((kode=='e')|| (kode=='E')){
 hari = "jumat";
 }
else if ((kode=='f')||  (kode=='F')){
 hari = "sabtu";
 }
else if ((kode=='g')||  (kode=='G')){
 hari = "ahad";
 }
else
  cout<<"Tidak ada hari yang sesuai";
  }
cout<<"       TAMPILAN HARI PILIHAN ANDA         \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"kode hari : "<<kode<<"\n";
cout<<"Nama Hari : "<<hari<<"\n";
cout<<"~~~~~~~~~~~~~~~TERIMA KASIH~~~~~~~~~~~~~~~~~~~~~~
getch();
}

