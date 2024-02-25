#include <stdio.h>
int main()
{
	int i, n;
	float S = 0;
	do
	{
		printf("nhap n:\n");
		scanf("%d",&n);
		if(n < 0)
		{
			printf("nhap lai\n");
		}
	}
	while(n < 0);
	for(i = 0; i <= n; i++)
	{
		S = S + (2*i+1.0) / (2*i+2.0);  
	}
	printf("Tong S(%d) la %f", n, S);
	return 0;
}