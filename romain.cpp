#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int Rom2Ar(char R[20]);
int foncI(char R[20], int i, int t);
int foncX(char R[20], int i, int t);
int foncC(char R[20], int i, int t);

 int main(){
 	char R[20];
 	int n , t;
 	printf("donner le nombre en Romain: \n");
 	scanf("%s",&R);
 	
 	n=Rom2Ar(R);
 	if (n!=-1){
 		printf("%d",n);
	 }
}

int Rom2Ar(char R[20]){
	int n , r , t;
	t=strlen(R);
	for(int i=0; i<t-1 ; i++){
		switch (R[i]){
			case 'I': r=foncI(R,i,t);
			        if(r!=1)
			         	i++;
						n+=r;
						break;
					 
			case 'V':r=5;break;
			case 'X': r=foncX(R,i,t);
			        if(r!=10)
			        	i++;
			        	n+=r;
					    break;
					
			case 'L': r=50;break;
			case 'C': r=foncC(R,i,t);
			        if(r!=100)
			        	i++;
						n+=r;
						break;
					
			case 'D': r=500;break;
			case 'M': r=1000;break;
			default : printf("ERREUR position",i,R[i],"n est pas un chiffre romain");break;
		}
		n+=r;
	}
	return (n);
}
int foncI(char R[], int i, int t){
	int r;
	if (i<t-1){
		if(R[i+1]='V') 
		r=4;
		else if 
		(R[i+1]='X') r=9;
	}
	else {
		r=1;
	}
	return (r);
}

int foncX(char R[], int i, int t){
	int r;
	if (i<t-1){
		if(R[i+1]='L') 
		    r=40;
		else if 
		    (R[i+1]='C') r=90;
	}
	else {
		r=10;
	}
	return (r);
}
int foncC(char R[], int i, int t){
	int r;
	if (i<t-1){
		if(R[i+1]='D') 
		    r=400;
		else if 
		    (R[i+1]='M') r=900;
	}
	else {
		r=100;
	}
	return (r);
}














