#include<stdio.h>

void fPortada();
void fLeerN(int *);
void fFactorial(int);

main()
{
	int opci, num;
	fPortada();
	do{
		fLeerN(&num);
		fFactorial(num);
		printf("\n\tDesea otro calculo?\n");
		printf("\tSi=1\tNo=0\t");
		scanf("%d",&opci);
		while(opci!=1 && opci!=0){
		  	printf("\tLa opcion no es valida.");
		  	printf("\n\tIntente de nuevo.");
		  	printf("\n\tDesea otro calculo?\n");
	    	printf("\tSi=1\tNo=0\t");
	    	scanf("%d",&opci);
		}
		system("cls");
    }while(opci==1);
}

void fPortada()
{
	system("color f4");
	printf("\n\t\t\tPrograma 05 Factorial");
	printf("\n\t\t\t_____________________\n");
    printf("\n\t\tEste programa te ayudara a calcular el");
	printf("\n\t\tfactorial de un numero entero positivo");

	system("pause");
	system("cls");
}

void fLeerN(int *n)
{
	printf("\tDame un numero entero positivo: ");
	scanf("%d",n);
	while(*n <= 0)
	{
		printf("\tEl numero tiene que ser entero positivo\n");
		printf("\tDame un numero entero positivo: ");
		scanf("%d",n);
	}
}

void fFactorial(int n)
{
	long int fact=1, cont=1;
	for(cont = 1 ; cont <= n ; cont++){
		fact = fact * cont;
	}
	printf("\tEl factorial de %d es: %d",n,fact);
}
