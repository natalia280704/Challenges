/**Natalia Velázquez Rosas

   Programa que es una calculadora de 2 números

   Empezó: 3 Octubre 2022
   Última modificación: 3 Octubre 2022

*/

#include<stdio.h>
int main(void){
  float num1=0, num2=0;
  

 printf("\n\nPrograma que permite ingresar 2 números y hace las 4 operaciones básicas entre ellos ");


  
  //Sección que pide los numeros al usuario
 printf("\n\nIngresa un número entero:  ");
 scanf ("%d %d", &num1);

 printf("\n\nIngresa un número entero:  ");
 scanf ("%d %d", &num2);



 //Sección de funciones de las operaciones básicas
 suma(int num1, int num2){

   return(num1 + num2);

 }

 resta (int num1, int num2){

   return(num1 - num2);

 }

 multi (int num1, int num2){

   return (num1 * num2);

}

 div (float num1, float num2){
  return (num1 / num2);
 }




 //Sección de imprimir los resultados
 printf("\n El resultado de la suma es: %i", suma(num1,num2));
 printf("\n El resultado de la resta es: %i", resta(num1,num2));
 printf("\n El resultado del  producto es: %i", multi(num1,num2));
 printf("\n El resultado de la division es: %i", div(num1,num2));
}
