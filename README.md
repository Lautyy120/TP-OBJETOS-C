
 ejercicio 2
 #include <stdio.h>
int main (){
	 
	int numero1, numero2;
	int producto = 0;
	
	//ingrese el primer numero
	printf ("ingrese el primer numero: ");
	scanf ("%d", &numero1);
	
	
	if (numero1<=0) {
		printf ("el primer numero debe ser positivo y entero.\n");
		return 0;
		}
	
	//numero entero y positivo
	
	
	printf ("ingrese el segundo numero: ");
	  scanf ("%d", &numero2);		
		
	
	if (numero2<=0) {
		printf ("el segundo numero debe ser positivo y entero.\n");
		return 0;
		}
		
     
if (numero2>numero1) {
	int temp = numero1;
	numero1 = numero2;
	numero2 = temp;
	
	
	
}		
//calculo producto

if (numero2>numero1) {
	int temp = numero1;
	numero1 = numero2;
	numero2 = temp;
	
}

for ( int i =0; i<numero2; i++) {
	producto += numero1;
	
}

printf ("el producto es de: %d\n", producto);


	

}



ejercicio 3
 #include <stdio.h>
int main () {
float  distancia, precio_com, tiempo_hora, tiempo_min;
float consumo100km, consumokm;
float totalpagar, combustible, costo_combustible;

//ingreso de datos 
printf ("ingrese la distancia del viaje en km: ");
scanf ("%f", &distancia);

printf ("ingrese el precio del combustible por litro: ");
scanf ("%f", &precio_com);

printf ("ingrese tiempo que tardo viaje (horas y minutos):  ");
scanf ("%f%f", &tiempo_hora, &tiempo_min);

	
//calculo cada 100km y cada km

combustible = (distancia/100.00) *consumokm;
consumokm = consumokm/distancia;

// calculo del costo del combustible

costo_combustible = (distancia/100) *consumokm *precio_com;
 
 //calculo total	
totalpagar = costo_combustible;

// mostrar resultado	
printf ("cosumo de combustible por cada 100km: %.2f litros=\n ", consumo100km);	

printf ("consumo de combustible por km: %.2f litros\n", consumokm);

printf ("costo de combustible: %.2f pesos\n ", costo_combustible);

printf ( "total a pagar por el viaje: %2.f pesos\n", totalpagar);
return 0;

//error de que no me lee los resultados a pesar de haber hecho los resultados

}

EJERCICIO 4

#include <stdio.h>
int main () {
	
	float precioentrada = 50;
	int cantidad;
	float descuento, total;
	
	printf ("ingrese la cantidad de entradas a comprar: ");
	scanf ("%d",&cantidad);
	if (cantidad <1 || cantidad>4) {
		printf ("cantidad de entradas invalida. debe ser entre 1 y 4.\n");
		return 1;
	}
	
	if (cantidad ==2) {
		descuento = 10;
		}
	else if (cantidad ==3) {
		descuento = 15;
	}
	else if (cantidad==4) {
		descuento = 20;
	}
	else {
		descuento = 0;
	} 
	total = cantidad *precioentrada *(1-descuento/100);
	
	printf ("el pago es de: %2.f\n", total);
	return 0;
	
}




