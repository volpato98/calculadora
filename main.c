#include <stdio.h>
double soma(double x, double y){
	return x+y;
}

double sub (double x, double y){
	return x-y;
}
double mult(double x, double y){
	return x*y;
}
double div(double x, double y){
	return x/y;
}

int main(){
	int x,y,op;
	printf("digite um numero para x e outro para y: ");
	scanf("%d %d",&x,&y);	
	printf("\nDigite uma operação:\n
		1 - soma\n
		2 - subtraçao\n
		3 - multiplicacao\n
		4 - divisao\n");
	scanf ("%i",&op);
	return 0;	
			
}

