#include <stdio.h>

int f(int n){
	if(n==0){
		return;
	}
	else{
		f(n-1);
		printf("%d\n",n);
	}
	
}

int main (){
	int n;
	scanf("%d",&n);
	f(n);
}
