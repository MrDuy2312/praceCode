#include<stdio.h>

int main()
{
	int n_Dem, n_n, n_Tong, n_Tong1 ;
	n_Tong = 1;
	printf("nhap n:");
	scanf("%d",&n_n);
	if(n_n > 0)
	{
		for(n_Dem = 1; n_Dem <= n_n; n_Dem++)
		{
			n_Tong *= n_Dem;
			n_Tong1 += n_Tong;
		}
		printf("ket qua S(%d) la %d", n_n, n_Tong1);
	}
	else
	{
		printf("failure!!");
	}
	return 0;
}