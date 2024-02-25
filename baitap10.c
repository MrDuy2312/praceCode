#include<stdio.h>
int main()
{
	int n, x, i;
	float S;
	S = 1;
	printf("nhap x:\n");
	scanf("%d", &x);
	printf("nhap n:\n");
	scanf("%d", &n);
	if(x >= 0)
	{
		for(i = 0; i < n; i++)
		{
			S = (float)(x*x);
		}	
		printf("tong S(%d,%d) la %f", x, n, S);	
	}
	else
	{
		printf("failure!\n");
	}
	return 0;
}