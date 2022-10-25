#include <stdio.h>
#include <stdlib.h>


int main(){
	int U0 , N , P;
	int T[100];
	
	do{
		printf("donner un entier U0 superieur strictement a 1: \n");
		scanf("%d",&U0);
	}while (U0<=1);
	N=0;
	T[0]=U0;
	
	do{
		N+=1;
		T[N]=sommeCarreesChiffres(T[N-1]);
		P=Recherche(T[N],0,N-1,T);
	}while ((T[N] != T[N-1]) && (P<0) && (N != 100)); 
	 Affiche(P,N,T);
	
}

int sommeCarreesChiffres(int N){
	int s;
	do{
		s+=(N%10);
		N=N/10;
	}while (N!=0);
	return s;
}

int Recherche(int X,int D,int F ,int T[100]){
	int i;
	i=D-1;
	do{
		i++;
	}while ((T[i]!=X) && (i <= F));
	if(T[i]==X)
	    return i;
	else 
	    return (-1);
	
}


void Affiche(int p,int n,int T[100]){
	int i;
	if(p==-1){
		for(i=0 ; i<=n ;i++){
			printf("T[%d]=%d",i,T[i]);
		}
	}else {
		for(i=p ; i<=n ;i++){
			printf("T[%d]=%d \n",i,T[i]);
	    }
    }
}







