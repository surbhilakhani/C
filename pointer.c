#include<stdio.h>

void main()
{
	int times=10,i, skip;
	int *num;
	for(i=0, *num=0;i<times;i+=skip)
	printf("Hello %d \n", i);
	*num+=1;
}
