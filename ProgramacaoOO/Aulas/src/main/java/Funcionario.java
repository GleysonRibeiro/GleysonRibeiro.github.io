
public class Funcionario {
    private String nome, cpf;
    private double salario;
    Empresa empresa;
    
    Funcionario(){
        System.out.println("Funcionário cadastrado");
    }
    
    public void cadastrarFuncionario(String nome, String cpf, double s, Empresa e){
        this.nome=nome;
        this.cpf=cpf;
        this.salario=s;
        this.empresa=e;
    }
}
