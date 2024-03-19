//dinamik bagli liste...

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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

   struct fil * dugumekle(struct fil* baslangic)
   {
   	struct fil* yeni;
   	printf("1-Basa ekleme:\n");
   	printf("2-Sona ekleme:\n");
   	printf("3-Bir dugumden sonraya ekleme:\n");
   	printf("4-Bir dugumden once ekleme\n");
   	int secim;
   	scanf("%d",&secim);
   	if (secim==1)
   	{
   	yeni=(struct fil*)malloc(sizeof(struct fil));
   	if (yeni!=NULL)
   	{	
	printf("filin adini gir:");scanf("%s",yeni->ad);
	printf("Ýlk filin yasini gir:");scanf("%d",&(yeni->yas));
	yeni->sonraki=baslangic;
	baslangic=yeni;	
	return baslangic;
	   }
	else 
	{
		return baslangic;
	}
	   
	   
}
else printf("yeterli bellek yok...\n");
	   
   }
int main()
{    char isim[20];
	struct fil* baslangic;
	struct fil* ptr;
	struct fil* yeni;
	struct fil* ptr2;
	int cevap;
	baslangic=(struct fil*)malloc(sizeof(struct fil));
    printf("Ilk filin adini gir:");scanf("%s",baslangic->ad);
	printf("Ýlk filin yasini gir:");scanf("%d",&(baslangic->yas));
	baslangic->sonraki=NULL;
	ptr=baslangic;
	printf("Dugum eklemeye devam edilsin mi?");
	scanf("%d",&cevap);
	
	printf("cevap=%d\n",cevap);
	while (cevap==1)
	{
	yeni=(struct fil*)malloc(sizeof(struct fil));
	printf("filin adini gir:");scanf("%s",yeni->ad);
	printf("Ýlk filin yasini gir:");scanf("%d",&(yeni->yas));
	ptr->sonraki=yeni;
	yeni->sonraki=NULL;
	ptr=yeni;
	printf("Dugum eklemeye devam edilsin mi?");
	scanf("%d",&cevap);
	}
	
	ptr=baslangic;
	filleriyazdir(ptr);
	printf("Aranacak filin ismi:");scanf("%s",isim);
	ptr2=arama(ptr,isim);
	if (ptr2==NULL) printf("%s bagli listede yok...\n",isim);
	else {
	printf("%s nin bagli listedeki yeri %p\n",isim,ptr2);
	printf("%s nin yasi:%d\n",ptr2->ad,ptr2->yas);
}
    dugumekle(baslangic);
    	filleriyazdir(ptr);

}

