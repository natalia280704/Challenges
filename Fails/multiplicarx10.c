/**
   Título: Programa que multiplica un número entero por 10
   Autora : Natalia Velázquez Rosas
   Fecha de creación: 03 de Octubre del 2022
   Fecha de última modificación: 03 de Octubre del 2022

*/


#include <stdio.h>
void mostrarInstrucciones(char autor[], char instrucciones[]);
int ingresarNumero(void);
int ingresarNumero2(void);
int multiplicarPorDiez(int numero);
int multiplicarporDiez(int numero2);
void mostrarResultados(int resultado);

int main (void)

{

  int num,num2,res;
  mostrarInstrucciones("Natalia Velazquez","Programa que multiplica 4 números por 10");


  //Multiplicar número1
  num = ingresarNumero();
  num2= ingresarNumero2();
  res = multiplicarPorDiez(num);
  mostrarResultados(res);

  /**
  //Multiplicar número2                                                                                                                                                                                    
  num = ingresarNumero();
  res = multiplicarPorDiez(num);
  mostrarResultados(res);

  
  //Multiplicar número3                                                                                                                                                                                    
  num = ingresarNumero();
  res = multiplicarPorDiez(num);
  mostrarResultados(res);

  
  //Multiplicar número4                                                                                                                                                                                    
  num = ingresarNumero();
  res = multiplicarPorDiez(num);
  mostrarResultados(res);
  */
  
  return 0;
  
}
/** Procedimiento que muestra las instrucciones del programa     */

void mostrarInstrucciones(char autor[], char instrucciones[])
  
{
  printf("Instrucciones:\n\t%s\n",instrucciones);
  printf("Autor:\n\t%s\n",autor);

  return;
}

/**
   Funciones que solicita ingresar un número entero */

int ingresarNumero(void)
{
  int numero;

  printf("\n\nIngresa un número entero:  ");
  scanf (" %d", &numero);

  return numero;
  

}



int ingresarNumero2(void)
{
  int numero2;

  printf("\n\nIngresa un número entero:  ");
  scanf (" %d", &numero2);

  return numero2;

}




/** Función que multiplica un número por 10 */

int multiplicarPorDiez (int numero)
{
  int resultado;
  resultado = numero + numero2;
  return resultado;
  

}

/** Procedimiento que muestra el resultado de la multipliación por 10 */

void mostrarResultados(int resultado)
{
  printf("El resultado de multiplicar tu número por diez es: %d\n\n",resultado);
  return;
}
