#include<stdio.h>
int main()
{
	int a,j,i;
	printf("Enter the starting limit\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
