/******************************************************************************

Elabore um algoritmo para obter dois nC:meros do usuC!rio e identificar o maior e o menor ou se sC#o iguais.
ObservaC'C#o: a saC-da deve ser formatada.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  //Variable Declaration
  int A, B;
  // Data input
  printf ("Digite o valor de A\n");
  scanf ("%d", &A);
  printf ("Digite o valor de B\n");
  scanf ("%d", &B);

  if (A > B)
    {
      printf ("Maior: %d\n", A);
      printf ("Menor: %d\n", B);
    }
  else
    {
      if (A == B)
	{
	  printf ("Iguais: %d\n", A);
	}
      else
	{
	  printf ("Maior: %d\n", B);
	  printf ("Menor: %d\n", A);
	}

    }
  return 0;
}

