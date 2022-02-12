#include <stdio.h>
#include <conio.h>

main()
{
	int valor1, valor2, opci, resultado;
	
	while(opci!=5)
	{
		printf("******************CALCULADORA DE LESTER******************\n");
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Salir\n");
		printf("Seleccione una opcion: ");
		scanf("%d",&opci);
		
		if(opci!=5){
			
			printf("Ingrese el primer Valor: ");
			scanf("%d",&valor1);
			printf("Ingrese el segundo Valor: ");
			scanf("%d",&valor2);	
		}
	    
		switch(opci){
			case 1:
				resultado= valor1+valor2;
				printf("El resultado de la suma es %d \n",resultado);
				break;
			case 2:
				resultado= valor1-valor2;
				printf("El resultado de la resta es %d \n",resultado);
				break;
			case 3:
				resultado= valor1*valor2;
				printf("El resultado de la multiplicacion es %d \n",resultado);
				break;
			case 4:
				resultado= valor1/valor2;
				printf("El resultado de la division es %d \n",resultado);
				break;
			case 5:
				
				break;				
		}	
	}	
}
