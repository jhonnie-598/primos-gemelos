/******************   primos gemelos  ********
Fecha:Julio 2021
Autor: Todos
Son gemelos si q - p = 2
*************************/

// ================== Prototipos ==========================
int esPrimo(int numero);
void parejaGenmelos(int n);
//===========================================================

#include <iostream>
#include <math.h>
#define TAM_MAX 32

using namespace std ;

int main()
{
	
	 parejaGenmelos(120);
	return 0;
}

int esPrimo(int numero) 
{
  if (numero == 0 or  numero == 1 or numero == 4) 
  {
  	return 0;
  }
  else {
  	
       for (int x = 2; x < numero / 2; x++) 
	   {
    
    		if (numero % x == 0) 
			{
				return 0;
			}
       }
  // Si no se pudo dividir por ninguno de los de arriba, sí es primo y retorna 1
  return 1;
}
}
//=======================================================
void parejaGenmelos(int n)
{
	int p, q;
	int i;
	for(i=2; i <= n ; i++)
	{
		if(esPrimo(i) == 1 and 	esPrimo( i + 2) == 1)
		{
			cout << "( "<< i << "," << i+2 << " )" << endl;
		}
	}
	system ("Pause");
	
}
