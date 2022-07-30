
public class Livro {
    
    private String titulo;
    
    private int qtdPaginas, paginasLidas;

    public Livro(String nome, int qtdPaginas){
        this.titulo=nome;
        this.qtdPaginas=qtdPaginas;
    }
    
    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
    
    public int getQtdPaginas() {
        return qtdPaginas;
    }

    public void setQtdPaginas(int qtdPaginas) {
        this.qtdPaginas = qtdPaginas;
    }

    public int getPaginasLidas() {
        return paginasLidas;
    }

    public void setPaginasLidas(int paginasLidas) {
        this.paginasLidas = paginasLidas;
    }
    
    public void verificarProgresso(){
        float porcentagem;
        
        porcentagem = this.paginasLidas*100/this.qtdPaginas;
        
        System.out.println("Você já leu "+porcentagem+" por cento do livro");   
    }
    
    
    
}
