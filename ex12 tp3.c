
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,a,b,c;
	printf("donner n : \n");
	scanf("%d",&n);
	
	a=somme_r1 (n);
    b=somme_r2 (n,0);
    c=somme_r3 (n,0,0);
    printf("%d \n",a);
    printf("%d \n",b);
    printf("%d \n",c);

}
int somme_r1 (int n ){
	if(n==0) return 0;
	else return (somme_r1(n-1))+n ;
}
int somme_r2 (int n ,int s ){
	if(n==0) return s;
	else return (somme_r2(n-1,s+n));
}
int somme_r3 (int n ,int s,int i ){
	if(i>n) return s;
	else return (somme_r3(n,s+i,i+1));
}



