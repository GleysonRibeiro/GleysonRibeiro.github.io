/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Figuras;

/**
 *
 * @author Gleyson
 */
public class Quadrado {
    
    private double lado;
    
    public void setLado(double l){
        this.lado=l;
    }
    
    public double getLado(){
        return this.lado;
    }
    
    public double calculaArea(){
        return this.lado*this.lado;
    }
}
