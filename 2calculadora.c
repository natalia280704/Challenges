/**                                                                                                                                                                                                        +------------------------------------------------------------------------------ 
*@file Programa que hace uso de operadores                                                                                                                                                                                                                                                                                                                                                                            
*@brief  Ejercicio 1                                                                                                                                                                                   

*@details   Programa que hace uso de los operadores                                                                                                                                                                                          
*@author     Natalia Velázquez Rosas                                                                                                                                                                                               
*@date     12 Octubre 2022                                                                                                                                                                                                 
*@author Ultima vez modificado por    12  Octubre 2022                                                                                                                                                                       
*@date Ultima fecha de modificacion     12  Octubre 2022

*/




/**    @fn Librería principal                                                                                                 
       @param                      */


#include <stdio.h>
#include <stdlib.h>

void mostrarInstrucciones (void);
int ingresarNumeros(void);
void operacionSuma (int numero, int numero2);
void operacionResta (int numero, int numero2);
void operacionMulti (int numero, int numero2);
void operacionDiv (int numero, int numero2);


/** @in Función principal                                                                                                                                                                                  
     @return Integer:0, indicar que el programa se ejecuto de manera correcta */

 int main (void)
{

  int numero, numero2;
  float Suma, Resta, Multi, Div;
  
  mostrarInstrucciones();
  
  numero=ingresarNumeros();
  numero2=ingresarNumeros();
  operacionSuma(numero, numero2);
  operacionResta(numero, numero2);
  operacionMulti(numero, numero2);
  operacionDiv(numero, numero2);
  
 return 0;
}


/** @fn Función que muestra las instruccioes                                                                                                                                                               
     @return Muestra el resultado de la función en pantalla */


void mostrarInstrucciones (void){

  printf("\n\nPrograma que hace las 4 operaiones básicas\n\n");
  printf("Calculadora elaborada por: ");
  printf("Natalia Velázquez Rosas\n\n");
  return;

}


/**
@fn Procedimiento que pide los numeros                                                                                                               
   @param Se ponen las variables numero y numero2
*/
 
int ingresarNumeros (void){

  int numero;
  
  printf("Ingresa un numero: ");
  scanf (" %d", &numero);
  return numero; 

}



/**@fn Procedimiento que hace la operación de suma        
   @paramSe usan los valores ingresados de numero y numero2 para la operacion */


void operacionSuma (int numero, int numero2){

  float Suma;

  Suma = numero + numero2;
  printf("\nEl resultado de sumar: %d + %d = %.0f\n", numero, numero2, Suma);
  return;
}



void operacionResta (int numero, int numero2){

  float Resta;

  Resta = numero - numero2;
  printf("\nEl resultado de restar: %d - %d = %.0f\n", numero, numero2, Resta);
  return;
}


void operacionMulti (int numero, int numero2){

  float Multi;

  Multi = numero * numero2;
  printf("\nEl resultado de multiplicar: %d * %d = %.0f\n", numero, numero2,Multi);
  return;
}

void operacionDiv (int numero, int numero2){

  float Div;

  Div = numero / numero2;
  printf("\nEl resultado de dividir: %d / %d = %f\n", numero, numero2, Div);
  return;
}













  
