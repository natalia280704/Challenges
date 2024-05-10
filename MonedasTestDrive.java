/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Monedas;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
/**
   
/**
 *
 * @author nataliarosas
 */
public class MonedasTestDrive {

  public static void main(String[] args) {
  
    
      int contador=1;
      Monedas monedasObject = new Monedas();
      
      do{
      
      System.out.println("\n\n\n\n*************************************");
      
      System.out.println("\n\n\nSea bienvenido/a al conversor de moneda :]");
      
      System.out.println("\n1) Dólar =>> Peso Argentino");
      System.out.println("\n2) Peso Argentino =>> Dólar");
      System.out.println("\n3) Dólar =>> Real Brasileño");
      System.out.println("\n4) Real Brasileño =>> Dólar");
      System.out.println("\n5) Dólar =>> Peso colombiano");
      System.out.println("\n6) Peso colombiano =>> Dólar");
      System.out.println("\n7) Salir");

      System.out.println("\n*************************************");
      
    try {
    System.out.print("\n\nElija una opción válida: "); 
    
    BufferedReader opcion = new BufferedReader(new InputStreamReader(System.in));
    monedasObject.identificador = Integer.valueOf(opcion.readLine());
    } catch (IOException e) {
            System.err.println("Error de entrada/salida: " + e.getMessage());
        } 
    
    monedasObject.regresaIdentificador();
    
    
    switch (monedasObject.identificador) {
            case 1:
               
                try {
                    System.out.print("\n\nIngresa el valor a convertir: ");
                    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                    monedasObject.valor = Double.valueOf(br.readLine());

                    monedasObject.conversion1();
                    System.out.println("\nEl valor de "+monedasObject.valor+" dolares corresponde al valor final de =>>> " + monedasObject.getConversion1() + " pesos argentinos");

                    contador=1;

                     } catch (IOException e) {
                        System.err.println("Error de entrada/salida: " + e.getMessage());
                        } 
                        break;
            
            
            
            
            
            case 2:
                
                try {
                    System.out.print("\n\nIngresa el valor a convertir: ");
                    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                    monedasObject.valor = Double.valueOf(br.readLine());

                    monedasObject.conversion2();
                    System.out.println("\nEl valor de "+monedasObject.valor+" pesos argentinos corresponde al valor final de =>>> " + monedasObject.getConversion2() + " dolares");

                    contador=1;

                     } catch (IOException e) {
                        System.err.println("Error de entrada/salida: " + e.getMessage());
                        } 
                        break;

                
            case 3:
                try {
                    System.out.print("\n\nIngresa el valor a convertir: ");
                    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                    monedasObject.valor = Double.valueOf(br.readLine());

                    monedasObject.conversion3();
                    System.out.println("\nEl valor de "+monedasObject.valor+" dolares corresponde al valor final de =>>> " + monedasObject.getConversion3() + " reales brasileños");

                    contador=1;

                     } catch (IOException e) {
                        System.err.println("Error de entrada/salida: " + e.getMessage());
                        } 
                        break;
           
            
            
            case 4:
              try {
                System.out.print("\n\nIngresa el valor a convertir: ");
                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                monedasObject.valor = Double.valueOf(br.readLine());

                monedasObject.conversion4();
                System.out.println("\nEl valor de "+monedasObject.valor+" reales brasileños corresponde al valor final de =>>> " + monedasObject.getConversion4() + " dolares");

                contador=1;

                 } catch (IOException e) {
                    System.err.println("Error de entrada/salida: " + e.getMessage());
                    } 
                    break;
                
                
            case 5:
               try {
                System.out.print("\n\nIngresa el valor a convertir: ");
                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                monedasObject.valor = Double.valueOf(br.readLine());

                monedasObject.conversion5();
                System.out.println("\nEl valor de "+monedasObject.valor+" dolares corresponde al valor final de =>>> " + monedasObject.getConversion5() + " pesos colombianos");

                contador=1;

                 } catch (IOException e) {
                    System.err.println("Error de entrada/salida: " + e.getMessage());
                    } 
                    break;
                
            case 6:
               try {
                System.out.print("\n\nIngresa el valor a convertir: ");
                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                monedasObject.valor = Double.valueOf(br.readLine());

                monedasObject.conversion6();
                System.out.println("\nEl valor de "+monedasObject.valor+" pesos colombianos corresponde al valor final de =>>> " + monedasObject.getConversion6() + " dolares");

                contador=1;

                 } catch (IOException e) {
                    System.err.println("Error de entrada/salida: " + e.getMessage());
                    } 
                    break;
                
            case 7:
               contador=0;
                break;
                
            default:
                System.out.println("Tipo no reconocido");
        }
      
      }
      while(contador==1);
      
       
      
  }
    
}
