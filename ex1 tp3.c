#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,a;
	printf("donner n : \n");
	scanf("%d",&n);
	a=carre1(n);
	printf("%d \n",a);
}

int carre1(int n){
	if(n==0) return 0;
	else return (carre1(n-1)+2*n-1);

}
