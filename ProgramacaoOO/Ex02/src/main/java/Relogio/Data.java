/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Relogio;

/**
 *
 * @author Gleyson
 */
public class Data {
    
    private int dia;
    private int mes;
    private int ano;
    
    public void setDia(int d){
        this.dia=d;
    }
    public int getDia(){
        return this.dia;
    }
    public void setMes(int m){
        this.mes=m;
    }
    public int getMes(){
        return this.mes;
    }
    public void setAno(int a){
        this.ano=a;
    }
    public int getAno(){
        return this.ano;
    }
    
    public String mostrarData(){
        return this.dia+"/"+this.mes+"/"+this.ano;
    }
}
