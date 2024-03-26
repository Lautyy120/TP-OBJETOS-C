#include<stdio.h>
main () {
int caser, numero = 0;
int a = 0;
int b = 0;
int c = 0;
printf ("ingrese numero para hacer: 1(ver si es negativo o positivo), 2(ver si es par o no par), 3(ver si es multiplo de 2 o 3), 4(dados 3 numeros cual es el mayor)");
scanf ("%d", &caser);
switch(caser) {
	case 1:
		
		printf("ingrese un numero para ver si es positivo, negativo");
		scanf ("%d", &numero);
		if (numero>0) {
		printf ("el numero es positivo");
		}
		 if (numero<0){
		printf ("el numero es negativo");
		}
		break;
	case 2:
		printf ("ingresar un numero para saber si es par o inpar");
		scanf ("%d", &numero);
		if (numero%2 == 0)
		printf ("el numero es par");
		else 
		printf (" es inpar");
		break ;
	case 3:
		printf ("ingresar un numero para saber si es multiplo de 2 o de 3");
		scanf("%d", &numero);
		if (numero%2 == 0)
			printf ( "el numero es multiplo de 2\n");
		else if (numero%3== 0)
			printf ("el numero es multiplo de 3\n");
		
		break;
	case 4:
		printf ("ingresar el valor de a: ");
		scanf ("%d",& a);
		printf ("ingrese el valor de b: ");
		scanf ("%d", & b);
		printf ("ingrese el valor de c: ");
		scanf ("%d", c);
		if (a>b){
if(a>c){
printf("A es el mayor");break;
}
else{ if(a==c){
printf("A y C son los mayores");break;}
else{
printf("C es el mayor");break;
}

}
}
if (a==b){
if(a>c){
printf("A y B son los mayores");break;
}
else{ if (a==c){
printf("los 3 son iguales");break;}
else{
printf("C es el mayor");break;
}

}
}
if(b>c){
printf("B es el mayor");break;}
else{ if (b==c){
printf("B y C son iguales");break;}
else{
printf("C es el mayor");break;
}

}
}	
	
};
