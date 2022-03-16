/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Outros;

/**
 *
 * @author Gleyson
 */
public class Numero {
    
    private int n1;
    private int n2;
    private int aux;
    
    public void setN1(int n){
        this.n1=n;
    }
    public int getN1(){
        return this.n1;
    }
    public void setN2(int n){
        this.n2=n;
    }
    public int getN2(){
        return this.n2;
    }
    public void troca(){
        this.aux=this.n1;
        this.n1=this.n2;
        this.n2=this.aux;
    }
}
