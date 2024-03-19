#include<stdio.h>
#include<string.h>
struct fil
{	char ad[20];
	int yas;
	struct fil* sonraki;
};
void filleriyazdir(struct fil* ptr)
{int sayac=0;
while(ptr!=NULL)
	{  sayac=sayac+1;
		printf("Filin Adi:%s, Filin Yasi:%d\n",ptr->ad,ptr->yas);
		ptr=ptr->sonraki;
	}	
printf(" Fil sayisi:%d\n",sayac);
}
struct fil* arama(struct fil* ptr,char ad[20])
     {
     	struct fil* pos=NULL;
     	while(ptr!=NULL)
     	{
     		if (strcmp(ptr->ad,ad)==0)  {pos=ptr;break;}
     		else ptr=ptr->sonraki;
		 }
	return pos;
	 }
int main()
{    char isim[20];
	struct fil A,B,C,D;
	struct fil* baslangic;
	struct fil* ptr;
	struct fil* ptr2;
	baslangic=&A;	
	strcpy(A.ad,"Hans");	A.yas=10; A.sonraki=&B;
	strcpy(B.ad,"Hamit");   B.yas=15; B.sonraki=&C;
	strcpy(C.ad,"Ayse");    C.yas=45; C.sonraki=&D;
	strcpy(D.ad,"Nuriye");  D.yas=16; D.sonraki=NULL;	
	ptr=baslangic;
	filleriyazdir(ptr);
	printf("Aranacak filin ismi:");scanf("%s",isim);
	ptr2=arama(ptr,isim);
	if (ptr2==NULL) printf("%s bagli listede yok...\n",isim);
	else {
	printf("%s nin bagli listedeki yeri %p\n",isim,ptr2);
	printf("%s nin yasi:%d\n",ptr2->ad,ptr2->yas);
}
}

