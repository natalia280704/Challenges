/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Monedas;

/**
 *
 * @author nataliarosas
 */
public class Monedas {
    
    double valor;
    
    int identificador;
    double C1, C2, C3,C4,C5,C6;
     
    
    public Monedas() {
        this.valor = valor;
    }
    
     public int regresaIdentificador(){
        return identificador;      
    } 
    
    /**
     * @deprecated Conversion1 dolar-> peso argentino
     */
      public void conversion1() {
         
       //System.out.println("");
         C1=valor* 882.49;
     }
      
     
      public double getConversion1() {
         return C1;
    
    }
     
      





     /**
     * @deprecated Conversion2 Peso Argentino =>> Dólar
     */
     public void conversion2() {

         C2=valor* 0.0011;
     }
      public double getConversion2() {
         return C2;
    
    }
      
      
   /**
     * @deprecated Conversion3 Dólar =>> Real Brasileño
     */
     public void conversion3() {

         C3=valor* 5.14;
     }
      public double getConversion3() {
         return C3;
    
    }   
    
      
      
     /**
     * @deprecated Conversion4 Real Brasileño =>> Dólar
     */
     public void conversion4() {
         
         C4=valor* 0.19;
     }
      public double getConversion4() {
         return C4;
    
    }  
      
      
     /**
     * @deprecated Conversion5 Dólar =>> Peso colombiano
     */
     public void conversion5() {

         C5=valor* 3890.00;
     }
      public double getConversion5() {
         return C5;
    
    }  
       
   
      
    /**
     * @deprecated Conversion6 Peso colombiano =>> Dólar
     */
     public void conversion6() {
         
      
         C6=valor* 0.00026;
     }
      public double getConversion6() {
         return C6;
    
    }    
      
      
      
      
      
      
      public double getValor() {
         return valor;
    
    }
    
}
