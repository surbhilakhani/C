#include<stdio.h>
void A(int n)
{
	if(n>0)
	{
		printf("%d", n);
		A(n-1);
	}
}
int main()
{
	int x=3;
	A(x);
}
