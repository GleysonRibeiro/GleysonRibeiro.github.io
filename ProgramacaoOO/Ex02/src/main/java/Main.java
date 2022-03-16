
import Outros.Conta;
import Outros.Contador;
import Outros.Numero;
import java.util.HashSet;
import java.util.Set;


/**
 *
 * @author Gleyson
 */
public class Main {

   
    public static void main(String[] args) {
        
        Numero num1 = new Numero();
        
        
        num1.setN1(1);
        num1.setN2(2);
        
        System.out.println("Teste de números: \n N1 - "+num1.getN1() + "- N2 - "+num1.getN2());
        
        num1.troca();
        
        System.out.println("\nN1 - "+num1.getN1() + "- N2 - "+num1.getN2());         
        
        System.out.println("\n\nTeste de conta:\n");
        
        Conta c1 = new Conta();
        
        c1.setSaldo(0);
        
        c1.depositar(100);
        
        System.out.println("Saldo atual: "+c1.exibirExtrato()+"\n");
        
        c1.sacar(20);
        
        System.out.println("Saldo atual: "+c1.exibirExtrato()+"\n"); 
        
        
        System.out.println("\n\nTeste de contador:\n");
        
        Contador cont = new Contador();
        
        cont.setNumero(1);
        
        cont.incrementarNumero();
        
        System.out.println("\nContador: "+cont.getNumero());
        
        cont.decrementarNumero();
        
        System.out.println("\nContador: "+cont.getNumero());    
        
          
             
    }
    
}
