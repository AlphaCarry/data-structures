#include<stdio.h>
#include<stdlib.h>
//garbage üretimi..

int main()
{
	int* ptr;
	ptr=(int* )malloc(sizeof(int));
	*ptr=999;
	
	
	free(ptr);
	
	ptr=(int*)malloc(sizeof(int));
	*ptr=777;
	
	printf("\n %d\n",*ptr);
	ptr=(int*)malloc(100*sizeof(int));
	ptr=(int*)calloc(100,sizeof(int));
	free(ptr);
	
}
