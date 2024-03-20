//kendini tekrarlayan yapilar...
//self-referential structures..

#include<stdio.h>

struct dugum {
	int numara;
	float kutle;
	struct dugum* sonraki;
	struct dugum* onceki;
};

