#include<stdio.h>
#include<stdlib.h>

struct dugum
{
	struct dugum* onceki;
	int data;
	struct dugum* sonraki;
};
void gezinme(struct dugum* ptr)
  {
  	while(ptr->sonraki!=NULL)
  	{
  		printf("%d<>",ptr->data);
  		ptr=ptr->sonraki;
	  }
	  printf("%d<>",ptr->data);
	  printf("\n");
  }
int main()
{   int secim;
	struct dugum* baslangic;
	struct dugum* ptr;
	struct dugum* yeni;
	//ilk dugum olusturuluyor...
	baslangic=(struct dugum* )malloc(sizeof(struct dugum));
	baslangic->onceki=NULL;
	baslangic->sonraki=NULL;
	printf("Dugumun verisini girin:");scanf("%d",&(baslangic->data));
	printf("Yeni dugum eklenecekmi?");scanf("%d",&secim);
	while(secim==1)
	{
	 yeni=(struct dugum* )malloc(sizeof(struct dugum));
	yeni->onceki=NULL;	yeni->sonraki=NULL;
	printf("Dugumun verisini girin:");scanf("%d",&(yeni->data));
	//bagli listenin sonunu bulmamiz lazim...
	ptr=baslangic;
	while(ptr->sonraki!=NULL)
	    ptr=ptr->sonraki;
	 yeni->onceki=ptr;
	 ptr->sonraki=yeni;
	    
	printf("Yeni dugum eklenecekmi?");scanf("%d",&secim);
	}
	gezinme(baslangic);
}
