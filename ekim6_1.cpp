#include<stdio.h>
#include<string.h>
struct element
	{ char name[10];
	  char symbol[5];
	  float agirlik;
	  float kutle;		
	};
void ekranayaz(struct element a)
{
   printf("Elementin adi:%s\n",a.name);
   printf("Elementin sembolu:%s\n",a.symbol);
   printf("Elementin agirlik:%4.2f\n",a.agirlik);
   printf("Elementin kutle:%4.2f\n",a.kutle);
}
int main()
{
	struct element p1,p2,p3;
	struct element es[10];
	printf("elementin bellekte tuttugu alan:%d\n",sizeof(struct element));
		
	strcpy(p1.name,"Oksijen");
	p1.agirlik=10;
	p1.kutle=66.5;
	strcpy(p1.symbol,"H20");
	ekranayaz(p1);
	
	
	return 0;
	
}
