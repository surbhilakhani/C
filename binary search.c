#include<stdio.h>
int main()
{
	int c, first, last, mid, n, search, array[100];
	printf("Enter no of elements \n");
	scanf("%d", &n);
	
	printf("enter %d integers \n", n);
	
	for(c=0;c<n;c++)
	
		scanf("%d", &array[c]);
	
	printf("Enter value to find \n");
	scanf("%d", &search);
	
	first=0;
	last= n-1;
	mid=(first+last)/2;
	
	while(first <= last)
	{
		if(array[mid] < search)
			first=mid+1;
		else if(array[mid]==search)
		{
			printf("%d found at location %d  \n", search, mid+1);
			break;
		}
		else
			last=mid-1;
			mid=(first+last)/2;
	}
	if(first>last)
		printf("Not found : %d is not present in the array", search);
		
		getch();
}
