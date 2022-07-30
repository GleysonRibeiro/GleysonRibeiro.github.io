
public class TestarLivros {

    
    public static void main(String[] args) {
        
        Livro livroFavorito = new Livro("The 100", 100);
        
        livroFavorito.setTitulo("O Pequeno Príncipe");
        
        livroFavorito.setQtdPaginas(98);
        
        System.out.println("O livro possui "+livroFavorito.getTitulo()+" possui "+livroFavorito.getQtdPaginas());
        
        livroFavorito.setPaginasLidas(20);
        
        livroFavorito.verificarProgresso();
        
        livroFavorito.setPaginasLidas(50);
        
        livroFavorito.verificarProgresso();
        
        Livro livro2 = new Livro("The 100", 100);
        
        livro2.setTitulo("A Cabana");
        
        livro2.setQtdPaginas(98);
        
        System.out.println("O livro possui "+livro2.getTitulo()+" possui "+livro2.getQtdPaginas());
        
        livro2.setPaginasLidas(20);
        
        livro2.verificarProgresso();
        
        livro2.setPaginasLidas(50);
        
        livro2.verificarProgresso();
        
        Livro livro3 = new Livro("The 100", 100);
        
        livro3.setTitulo("A culpa é das estrelas");
        
        livro3.setQtdPaginas(98);
        
        System.out.println("O livro possui "+livro3.getTitulo()+" possui "+livro3.getQtdPaginas());
        
        livro3.setPaginasLidas(20);
        
        livro3.verificarProgresso();
        
        livro3.setPaginasLidas(50);
        
        livro3.verificarProgresso();       
        
        
        
    }
    
}
