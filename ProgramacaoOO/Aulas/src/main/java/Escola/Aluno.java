
package Escola;

/**
 *
 * @author Gleyson
 */
public class Aluno {
    
    private String nome;
    private String disciplina;
    private double notaFinal;
    
    Aluno(String n, String d, double nf){
        this.nome=n;
        this.disciplina=d;
        this.notaFinal=nf;       
    }
    
    public String mostrarAluno(){
        return this.nome+"-"+this.notaFinal+"-"+this.disciplina;
    }
    
    public String mostrarSituacao(){
        if(this.notaFinal>=6){
            return "Aprovado";
        }
        else{
            return "Reprovado";
        }
    }
    
}
