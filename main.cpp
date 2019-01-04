#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int ket,thun;

cout<<"MASUKAN TAHUN : " ;cin>>thun;cout<<endl;
cout<<"tahun yang anda input : "<<thun<<endl;
ket = thun % 4;
switch (ket)
{
case 1:
	cout<<"keterangan : tahun kabisat";
default :
	cout<<"keterangan : bukan tahun kabisat";
}
char LG;
cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
system("cls");
if(LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t')
cout<<" TERIMA KASIH BANYAK ";
return 0;
}



