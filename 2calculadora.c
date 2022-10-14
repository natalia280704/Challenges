/**                                                                                                                                                                                                         
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

void mostrarInstrucciones (void);
int ingresarNumero(void);
void operacionSuma(void);


/** @in Función principal                                                                                                                                                                                  
     @return Integer:0, indicar que el programa se ejecuto de manera correcta */

 int main (void)
{

  mostrarInstrucciones();

 int numero;
 int numero2;
 int suma1;

 
 numero = ingresarNumero();
 numero2= ingresarNumero();
 suma1=operacionSuma();

 return 0;
}


/** @fn Función que muestra las instruccioes                                                                                                                                                               
     @return Muestra el resultado de la función en pantalla */


void mostrarInstrucciones (void){

  printf("\n\n\n\nPrograma que hace uso de if else\n\n");
  printf("Restaurante bar elaborado por: ");
  printf("Natalia Velázquez Rosas\n\n\n\n\n");
 return;

}


/**
@fn Procedimiento que pide los numeros                                                                                                               
   @param Se ponen las variables numero y numero2
*/


 
int ingresarNumeros (void){


  int numero =0;
  int numero2 =0;

  
  printf("\n\nIngresa un numero:  ");
   scanf (" %d", &numero);
   return numero;

   
   printf("\n\nIngresa un numero:  ");
   scanf (" %d", &numero2);
   return numero2;

}



/**@fn Procedimiento que hace la operación de suma        
   @paramSe usan los valores ingresados de numero y numero2 para la operacion */



void operacionSuma (void){

  int numero;
  int numero2;

  suma1= numero + numero2;
  return suma1;
  
  printf("El resultado de la suma es: %d\n\n",suma1);
  
  
  return;
}



















  
