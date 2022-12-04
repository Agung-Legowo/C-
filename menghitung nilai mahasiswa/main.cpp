#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

/**
*bundet.com
*C++ Menghitung Nilai Mahasiswa - Variasi 4
*/

main()
{
char nama[20][30],grade[20];
int i,j,tgs[20],uts[20],uas[20],akhir[20];
clrscr();
cout<<" PROGRAM HITUNG NILAI AKHIR "<<endl;
cout<<" MATERI PEMROGRAMAN C++ "<<endl<<endl;
cout<<" Masukan Jumlah Mahasiswa : ";cin>>j;
cout<<endl;

for(i=1;i<=j;i++)
{
cout<<" Mahasiswa Ke - "<<i<<endl;
cout<<" Nama Mahasiswa : ";gets(nama[i]);
cout<<" Nilai Tugas : ";cin>>tgs[i];
cout<<" Nilai UTS : ";cin>>uts[i];
cout<<" Nilai UAS : ";cin>>uas[i];
akhir[i]=(tgs[i]*0.3)+(uas[i]*0.3)+(uas[i]*0.4);
if(akhir[i]>=80)
grade[i]='A';
else if(akhir[i]>=70&&akhir[i]<80)
grade[i]='B';
else if(akhir[i]>=59&&akhir[i]<70)
grade[i]='C';
else if(akhir[i]>=50&&akhir[i]<59)
grade[i]='D';
else
grade[i]='E';
cout<<endl;
}
clrscr();
cout<<" DAFTAR NILAI "<<endl;
cout<<" MATERI : PEMROGRAMAN C++ "<<endl;
cout<<"--------------------------------------------------------- "<<endl;
cout<<"No.  Nama                     Nilai "<<endl;
cout<<"     Mahasiswa     -----------------------------    Grade "<<endl;
cout<<"                   Tugas   UTS     UAS     Akhir "<<endl;
cout<<"--------------------------------------------------------- "<<endl;
for(i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<i;
cout<<setiosflags(ios::left)<<setw(14)<<nama[i];
cout<<setiosflags(ios::left)<<setw(8)<<tgs[i];
cout<<setiosflags(ios::left)<<setw(8)<<uts[i];
cout<<setiosflags(ios::left)<<setw(8)<<uas[i];
cout<<setiosflags(ios::left)<<setw(10)<<akhir[i];
cout<<setiosflags(ios::left)<<setw(8)<<grade[i]<<endl;
}
cout<<"--------------------------------------------------------- "<<endl;
getch();
}
