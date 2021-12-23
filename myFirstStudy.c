#include <stdio.h>
#include <math.h>
#include <string.h>
#define SIZE 20


void invert(int vector, int position)
{
    int helper, vactorLenght = position - 1;

    for (position = 0; position <= vactorLenght ; position++)
    {
      helper = vector[position];
      vector[position] = vector[tamanho_vetor];
      vector[tamanho_vetor] = auxiliar;
      tamanho_vetor--;
	  printf("%d ", vector[position]);
    }
}

int main()
{
	int vector[3], position;
	
	for(position = 0; position < sizeof(vector); position++ ){
		prinf("Bring me a value");
		scanf("%d", &vetor[position]);
	}
	prinf("\n");
	
	return 0;
}

https://pt.stackoverflow.com/questions/366216/fun%C3%A7%C3%A3o-para-inverter-vetor-c
