#include <stdio.h>
#define N 10
int main(){
	int numero,numeros[N],i,x;
	printf("Digite 10 numeros: ");
	
	for(i =0;i<N;i++){
		scanf("%d",&numeros[i]);}
	printf("Digite um numero: ");
	scanf("%d",&numero);	
	for(x = 0;x<N;x++){
		if (numero == numeros[x]){
		printf("esta contido\n");
		 break;}
		  }
	printf("Nao esta contido\n");			
	return 0;
}
