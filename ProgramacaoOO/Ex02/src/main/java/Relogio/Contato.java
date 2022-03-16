/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Relogio;

/**
 *
 * @author Gleyson
 */
public class Contato {
    
    private String nome;
    private String telefone;
    
    public void setNome(String n){
        this.nome=n;
    }
    public String getNome(){
        return this.nome;
    }
    public void setTelefone(String t){
        this.telefone=t;
    }
    public String getTelefone(){
        return this.telefone;
    }
    
    public String mostrarContato(){
        return this.nome+" - "+this.telefone;    
    }
    
}
