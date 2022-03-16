/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Figuras;

/**
 *
 * @author Gleyson
 */
public class Triangulo {
    
    private double base;
    private double altura;
    
    
    public void setBase(double b){
        this.base=b;
    }
    public void setAltura(double a){
        this.base=a;
    }
    public double getBase(){
        return this.base;
    }
    public double getAltura(){
        return this.altura;
    }
    
    public double calculaArea(){
        return (this.base*this.altura)/2;
    }
    
}
