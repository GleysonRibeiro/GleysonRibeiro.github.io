
public class Empresa {
    
    private String nomeFantasia;
    private String razaoSocial;
    private int cnpj;
    
    public void cadastrarEmpresa(String nome, String razao, int c){
        this.nomeFantasia=nome;
        this.razaoSocial=razao;
        this.cnpj=c;
    }
    
    Empresa(String nome, String razao, int c){
        this.nomeFantasia=nome;
        this.razaoSocial=razao;
        this.cnpj=c;
    }
    
}
