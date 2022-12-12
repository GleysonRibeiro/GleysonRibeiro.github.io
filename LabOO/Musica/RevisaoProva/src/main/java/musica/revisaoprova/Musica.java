/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package musica.revisaoprova;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author Gleyson
 */
public class Musica {
    private String nome;
    private List<Artista> compositores = new ArrayList<Artista>();
    private String duracao;
    
    public Musica(String n, String d){
    
        this.nome = n;
        this.duracao = d;
    
    }
    
    
}
