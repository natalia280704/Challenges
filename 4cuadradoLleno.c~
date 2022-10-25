/**
 *@file   3cuadradoVacio.c
 *@brief  Imprime un cuadrado
 *@details Programa que pide al usuario las dimensiones de un lado del cuadrado e imprime un cuadrado vacio.
 *@author Creado por: Natalia Velázquez Rosas
 *@date   Creado: 19 Octubre 2022
 *@author Última vez modificado por: Natalia Velázquez Rosas
 *@date   Última vez modificado: 19 Octubre 2022
 */

#include <stdio.h>

void imprimirCuadrado (int);

int main (void)
{
  int lado;



printf("Este programa permite imprimir un cuadrado de la medida que el usuario ingrese \n");
printf("Ingrese la medida de un lado del cuadrado (solo número enteros)\n");

  scanf("%d", &lado);




  imprimirCuadrado(lado);

  return 0;
}
void imprimirCuadrado (int lado)
{
  int i=0, j=0;
  char ast='*', espacio=' ';
  for(i=0; i<lado; i++)
    {
      for(j=0; j<lado; j++)
        {
          if(i==0 || i==(lado-1))
            {
              printf("%c ", ast);
            }
          else if(i!=0 && i!=(lado-1))
            {
              if(j==0 || j==(lado-1))
                {
                  printf("%c ", ast);
                }
              else
                {
                  printf("%c ", espacio);
                }
            }
        }
      printf("\n");
    }
}

