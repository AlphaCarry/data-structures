// yap�larda de�eri ile �a��r..ok
// yap�larda adresi ile �a��r..
//yap�larda referansi ile �a��r...ok
#include<stdio.h>
#include<string.h>

struct isci 
{
	char ad[20];
	float maasi;
};
void zam(struct isci X)
{
	X.maasi=2*X.maasi;
	printf("Fonksiyon i�erisinde yeni maasi:%4.2f\n",X.maasi);
}
void zam2(struct isci& X)
{
	X.maasi=2*X.maasi;
	printf("zam2 fonksiyon i�erisinde yeni maasi:%4.2f\n",X.maasi);
}
void zam3(struct isci* ptr)
{
	ptr->maasi=2*ptr->maasi;
	printf("zam3 fonksiyonu i�erisinde yeni maasi:%4.2f\n",ptr->maasi);
}
int main()
{
	struct isci A,B;
	A.maasi=15000.00;
	strcpy(A.ad,"Ahmet Hamdi");
	zam(A);
	printf("Ana fonksiyonda zam fonksiyonu cagrildiktan sonra maasi:%4.2f\n",A.maasi);
	zam2(A);
	printf("Ana fonksiyonda zam2 fonksiyonu cagrildiktan sonra maasi:%4.2f\n",A.maasi);
	zam3(&A);
	printf("Ana fonksiyonda zam3 fonksiyonu cagrildiktan sonra maasi:%4.2f\n",A.maasi);
}
