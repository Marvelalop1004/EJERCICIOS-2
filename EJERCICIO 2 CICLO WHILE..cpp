#include <stdio.h>
int main (){
	int numaleatorio, intento=0, limite;
	numaleatorio= limite%100+1;
	printf ("**ADIVINA EL NUMERO**\n");
	printf ("Ingresa un numero");
	scanf ("%d", &intento);
	while (intento != numaleatorio){
		if (intento> numaleatorio){
		printf ("MAS BAJO\n");
	}else if (intento< numaleatorio){
		printf ("MAS ALTO\n");
	}
	printf ("Intenta otra vez :)");
	scanf ("%d", &intento);
}
printf ("FELICIDADES ADIVINASTE!!! :D");
return 0;
}
