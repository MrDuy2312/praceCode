#include<stdio.h>
int main()
{
	int n, i;
	float S = 0;
	do
	{
		printf("nhap n:\n");
		scanf("%d",&n);
		if(n < 1){
			printf("nhap lai\n");	
		}
	}
	while(n < 1);
	for(i = 1; i <= n; i++)
	{	
		//S = S + 1.0/i;
		S = S + 1.0/(i*(i+1));
	}
	printf("Ket qua S(%d) la %f",n, S);
	return 0;
}