
package Outros;

/**
 *
 * @author Gleyson
 */
public class Contador {
    private int numero;
    
    public void setNumero(int n){
        this.numero=n;
    }
    public int getNumero(){
        return this.numero;
    }
    
    public void incrementarNumero(){
        this.numero++;
    }
    public void decrementarNumero(){
        this.numero--;
    }
}
