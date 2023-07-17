#include <stdio.h>

int main() {
	int n,i,fac=1;
	printf("enter the number:");
	scanf("%d",&n);

	for(i=2;i<=n;i++){
        fac=fac*i;
	}
		printf("%d",fac*i);
	return 0;
}