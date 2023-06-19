#include <stdio.h>
int main (){
	int num, a=1;
	printf ("Ingrese un numero");
	scanf ("%d", &num);
	while (a<=num){
		printf ("%d\n", a);
		a++;
	}
	return 0;
}
