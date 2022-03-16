
package Outros;

/**
 *
 * @author Gleyson
 */
public class Conta {
    
    private double saldo;
       
    public void setSaldo(double s){
        this.saldo=s;
    }
    public double getSaldo(){
        return this.saldo;
    }
    public void depositar(double s){
        this.saldo+=s;
    }
    public void sacar(double s){
        this.saldo-=s;
    }
    public double exibirExtrato(){
        return this.saldo;
    }   
    
}
