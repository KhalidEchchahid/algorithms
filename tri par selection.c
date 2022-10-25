#include<stdio.h>
#include<stdlib.h>

void tri_selection(int T[],int n);
int getMin(int T[],int d,int f);
void echange(int T[],int i,int imin);

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
    tri_selection(T, n);
     /* Edition des résultats */
    printf("Tableau résultat :\n");
    for (i=0; i<n; i++){
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}

void tri_selection( int T[50] , int n){
    int i,imin;
    for(i=0;i<=n-2;i++){
       imin = getMin(T, i ,n-1);
       if(i!=imin){
        echange(T,i, imin);
       }
    }
}
int getMin(int T[50], int d, int f){
    int i,imin ;
    imin = d;
    for(i=d+1;i<=f;i++){
        if(T[i]<T[imin]){
            imin = i;
        }
    }
    return imin;
}
void echange (int T[50] ,int  i ,int j){
    int x ;
    x=T[i];
    T[i]=T[j];
    T[j]=x;
}




