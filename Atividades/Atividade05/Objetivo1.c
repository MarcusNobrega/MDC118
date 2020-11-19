#include <stdio.h>

int main()
{
 int numero, maior, menor;
 int i;

 printf("Coloque 10 números: ");
 scanf("%i", &numero);

 maior=numero;
 menor=numero;

 for(i=1; i<10; i++)
 {
 printf("\n Coloque o %dº número : ",i+1);
 scanf("%i", &numero);

 if(numero>maior)
 maior=numero;
 else
 if(numero<menor)
 menor=numero;
 }


 printf("\nO menor número é: %d", menor);
 printf("\nO maior número é: %d", maior);

 return 0;
}
