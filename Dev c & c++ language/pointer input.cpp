#include<stdio.h>
main()
{
	int a[10],*ptr;
	ptr=&a[0];
	for(int i=0;i<10;i++)
	{
		scanf("%d",ptr+i);
	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
}
