#include<stdio.h>
int main()
{
	int l,b,p;
	scanf("%d %d",&l,&b,&p);
	int arearec=l*b;
	printf("area of rectangle %d",arearec);
	int perimeterrec=2*(l+b);
	printf("perimeter of rectangle %d",perimeterrec);
}
