#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(){
	char R[20] ;
	bool a;
	printf("donner un chaine de caracteres: \n");
	scanf("%s",&R);
	Palidrome_iter(R);
	a=Palidrome_iter( R);
	printf("");
    
  
}

bool Palidrome_iter(char R[]){
	int i,j,n;
	n=strlen(R);
	i=0;
	j=n-1;
	while (i<j){
		if(R[i] !=R[j]) return (false);
		else {
			i++;
			j--;
		}
	}
	
	return (true);
}

