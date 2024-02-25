#include<stdio.h>
int main()
{
	int i, n;
	float S;
	S = 0;
	do
	{
		printf("nhap n:\n");
		scanf("%d",&n);
		if(n < 1)
		{
			printf("nhap lai\n");
		}
	}
	while(n < 1);
	for(i = 1; i <= n; i++)
	{
		S = S + i/(i+1.0);
	}
//	printf("i la %d", i);
	printf("tong S(%d) la %f", n, S);
	return 0;
}