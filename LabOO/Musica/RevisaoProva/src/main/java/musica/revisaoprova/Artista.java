/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package musica.revisaoprova;

/**
 *
 * @author Gleyson
 */
public class Artista {
    
    private String nome;
    private String biografia;
    
    public Artista(String n, String b) {
        this.nome = n;
        this.biografia = b;
    }

    public String contultarArtista(){
        return this.nome + this.biografia;
    }
}
