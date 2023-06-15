#include<stdio.h>
int main (){
	int n,j,i;
	int a[10000]={};
	
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	for(i=0; i<n; i++)
	{
		for(j=i; j<n+i; j++)
			printf("%d ", a[j%n]);
		printf("\n");
	}
	return 0;
}
