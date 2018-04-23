/* Calculadora */

#include<stdio.h>

#include<conio.h>

#include<math.h>

 

main()

{

	int resultado; /* Variable reservada para cada resultado de las operaciones */

	int a;         /* Primer numero que introducimos */

	int b;         /* Segundo numero que introducimos */

	int opcion;    /* Opcion que elegimos */

	do

	{

		clrscr();

		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");

		printf("\n         º               :: C A L C U L A D O R A ::                 º");

		printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");

		printf("\n         º                                                           º");

		printf("\n         º       1.- Suma                                            º");

		printf("\n         º       2.- Resta                                           º");

		printf("\n         º       3.- Multiplicacion                                  º");

		printf("\n         º       4.- Division                                        º");

		printf("\n         º       5.- Raiz Cuadrada                                   º");

		printf("\n         º       6.- Potencia                                        º");

		printf("\n         º       7.- Salir                                           º");

		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");

		printf("\n                     Nota: Solo funciona con numeros enteros");

		printf("\n");

		printf("\n                              Elija una opcion: ");

		scanf("%d",&opcion);

		switch(opcion)  /* Segun la opcion elegida tendremos los siguientes casos...*/

		{

			case 1:     /* Suma */

			printf("\n         -> Introduzca el primer sumando: ");

			scanf("%i",&a);

			printf("\n         -> Introduzca el segundo sumando: ");

			scanf("%i",&b);

			resultado=a+b;

			printf("\n         La SUMA de %i + %i es igual a %i",a,b,resultado);

			break;

 

			case 2:     /* Resta */

			printf("\n         -> Introduzca el primer numero: ");

			scanf("%i",&a);

			printf("\n         -> Introduzca el segundo numero: ");

			scanf("%i",&b);

			resultado = a - b; 

			printf("\n         La RESTA de %i - %i es igual a %i",a,b,resultado);

			break;

 

			case 3:     /* Raiz Cuadrada */

			printf("\n         -> Introduzca el numero al que efectuar la raiz: ");

			scanf("%i",&a);

			

				

				printf("\n         La RAIZ CUADRADA de %i es igual a %i",a,resultado);

			

			break;

 

			case 4:     /* Multiplicacion */

			printf("\n         -> Introduzca el primer multiplicando: ");

			scanf("%i",&a);

			printf("\n         -> Introduzca el segundo multiplicando: ");

			scanf("%i",&b);

			

			printf("\n         La MULTIPLICACION de %i * %i es igual a %i",a,b,resultado);

			break;

 

			case 5:     /* Division */

			printf("\n         -> Introduzca el dividendo: ");

			scanf("%i",&a);

			printf("\n         -> Introduzca el divisor: ");

			scanf("%i",&b);

			

				printf("\n         El cociente de la DIVISION de %i entre %i es igual a %i",a,b,resultado);

			
			
			break;

 

			case 6:

			printf("\n         -> Introduzca el numero que hara de base: ");  /* Introducimos los datos */

			scanf("%i",&a);

			printf("\n         -> Introduzca el exponente: ");

			scanf("%i",&b);

			
			
			
			
			printf("\n         El resultado de %i^%i es %i",a,b,resultado);

			}

			break;

 

			case 7:   /* Salir */

		
			cprintf("\n                            Pulse ENTER para salir...");

			break;

		} /* fin switch */

	getch();
