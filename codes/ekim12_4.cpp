// içiçe yapýlar...
#include<stdio.h>
#include<string.h>
struct ogrenci {
	char ad[20];
	int numara;
};

struct personel
{
	char name[40];
	int sicilno;
};

struct ktu
{
	struct ogrenci A;
	struct personel B;
	char adres[100];
	int kisisayisi;
};
int main()
{
	struct ktu X;
	strcpy(X.A.ad,"Ahmet Hamdi");
	X.A.numara=344678;
	strcpy(X.B.name,"Cevdat");
	X.B.sicilno=456;
	X.kisisayisi=25000;
	strcpy(X.adres,"KTÜ Egemenlik Cad. Kalkinma Mah...");
	
}
