// Derleme zamaný (Compile time) ve Koþturma Zamaný (Run time) Yerayýrma(allocation)
// kosturma zamani yer ayirma icin iki fonksiyon var. 
//malloc ve de calloc fonksiyonu..

#include<stdio.h>
#include<stdlib.h>
struct karmasik
	{
		float x;
		float y;
	};
	
int main()
{
	int x; //derleme zamani yer ayirma
	x=50;
	
	int* ptr; //kosturma zamani yer ayirma
	ptr=(int* ) malloc(sizeof(int));
	*ptr=50;
	
	printf("Dinamik ayrilan yerin adresi:%p\n",ptr);
	
	char* ptr2; 
	ptr2=(char*)malloc(sizeof(char));
	*ptr2='X';   //char t; t='X'; 
	
	struct karmasik A;
	A.x=45.3;
	A.y=32.45;
	
	
	
	
	free(ptr2);
	
	struct karmasik* ptr3;
	ptr3=(struct karmasik* )malloc(sizeof(struct karmasik));
	
	ptr3->x=57.89;
	ptr3->y=88;
	
	printf("Dinamik ayrilan yapinin yerin adresi:%p\n",ptr3);
	free(ptr); free(ptr3);
	
	
}
