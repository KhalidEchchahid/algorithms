#include <stdio.h>

 main(){
 	int n,i;
 	float x,e,f;
	a=expn2(x,n);
	b=expn1(x,n,e,f,i);
	printf("donner x");
	scanf("%f",&x);
	printf("%f",a);
	printf("%f",b);
	
}

float expn2(float x , int n){
	int i ;
	float e,f;
	
	e=1;
	f=1;
	for(i=0;i<n;i++){
		f=f*x/i;
		e=e+f;
	}
	return e;
}

float expn1(float x, int n,float e ,float f ,int i ){
	if (i<=n){
    	f=f*x/i;
    	return expn1(x,n,e+f,f,i+1);
	}else {
		return e;
	}
}


    
