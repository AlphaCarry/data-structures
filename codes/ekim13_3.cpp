// KITAP adinda bir yapi olusturun. Uyeleri kitapadi,yazari,isbn(tamsayi), kitapevi
//kitap_ptr1,kitap_ptr2 iki adet pointer tanimla..
//100 adet KITAP icin bellekte yer ayir.. typedef kullanin..
//ilk hucreyi kitap_ptr1  gostersin
//52. hucreyi de kitap_ptr2 gostersin
//Buralara atama yapin...
#include<stdlib.h>
#include<stdio.h>

typedef struct kitap
{
	char* kitapadi;
	char* yazar;
	int isbn;
	char* kitabevi;
}  KITAP;

int main()
{
	KITAP *kitap_ptr1,*kitap_ptr2;
	kitap_ptr1=(KITAP*)malloc(100*sizeof(KITAP));
	kitap_ptr2=kitap_ptr1+51;
	
}
