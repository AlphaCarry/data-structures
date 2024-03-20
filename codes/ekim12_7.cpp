#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct asker
{
	char* isim;
	char* rutbe;
	int sicilno;
}  ASKER;

int main()
{
	ASKER asker1,asker2,asker3,*ptr;
	ptr=&asker3;
	asker3.isim="Ahmet Cevdet";
	printf("\n%s",(*ptr).isim);
	printf("\n%s",ptr->isim);
	printf("\n%c",*ptr->isim);
	printf("\n%c",*(ptr->isim+3));
	
	
	
}
