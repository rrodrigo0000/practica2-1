#include <stdio.h>



int multiplicacion(int a, int b){
	int resultado = 0;
	int i;
	for (i = 0; i < b; i++){
		i = i + a;
	}
	return resultado;
}

int potencia(int base, int exponente)
{
	int i, total;
	
	for(i = 0; i < exponente; i++)
	{
		total += multiplcar(base,base);
	}
	return total;
}


int raiz(int num);
int suma(int num1, int num2);

int main(int argc, char **argv)
{
	int a, b, result, option = -1;
	
	// Mientras no se termina
	while( 1 ) {
		
		// Mostrar operación
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Raiz Cuadrada\n");
		printf("6.- Potencia\n");
		printf("7.- Salir\n");
		
		// Leer operación
		scanf("%d", &option);
		
		// Salir
		if( option == 7 ) break;
		
		// Leer operandos
		scanf("%d", &a);
		scanf("%d", &b);
		
		// Operar
		switch( option ) {
			case 1:
				result=suma(a,b);
				
				break;
			case 2:
				result = 0;
				break;
			case 3:
				result = 0;
				break;
			case 4:
				result = 0;
				break;
			case 5:
				result = raiz(a);
				break;
			case 6:
				result = potencia(a,b);
				break;
			default:
				result = 0;
				printf("Opción incorrecta\n");
				break;
		}
		
		// Mostrar resultado
		if( option > 0 && option < 7 ) {
			printf("El resultado es %d", result);
		}
		
	}
	
	// Salir sin error
	return 0;
}
int suma(int num1, int num2){

return num1+num2;
}
int raiz(int num){
resu = 1;
while(multiplicacion(resu,resu)<=num)
	resu+=1;

return resu-1;

}
