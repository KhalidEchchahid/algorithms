#include<stdio.h>
#include<stdlib.h>

main(){
    int T[50] ;
    int n,i;
    printf("donner la dimension du tableau : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element %d : ", i);
        scanf("%d",&T[i]);
    }
    for (i=0; i<n; i++)
        printf("%d ", T[i]);
    printf("\n");
    tri_bulles(T, n);
     /* Edition des résultats */
    printf("Tableau résultat :\n");
    for (i=0; i<n; i++){
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
void tri_bulles( int T[50] , int n){
     int i;
	i=0;
	while(i<=n-2){
		etapbulles(T,n,i);
		i++;
	}
}
void etapbulles(int T[50], int n, int i){
	 int j;
	for(j=0;j<=(n-i-2);j++){
		if(T[j]>T[j+1]){
			echange(T,j,j+1);
		}
	}
}


void echange(int T[50] ,int  j ,int l){
    int x ;
    x=T[j];
    T[j]=T[l];
    T[l]=x;
}

