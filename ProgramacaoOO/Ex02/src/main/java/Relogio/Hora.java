/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Relogio;

/**
 *
 * @author Gleyson
 */
public class Hora {
    private int hora;
    private int minuto;
    private int segundo;
    
    public void setHora(int h){
        this.hora=h;
    }
    public int getHora(){
        return this.hora;
    }
    public void setMinuto(int m){
        this.minuto=m;
    }
    public int getMinuto(){
        return this.minuto;
    }
    public void setSegundo(int s){
        this.segundo=s;
    }
    public int getSegundo(){
        return this.segundo;
    }
    
    public String mostrarHora(){
        return this.hora+":"+this.minuto+":"+this.segundo;
    }
}
