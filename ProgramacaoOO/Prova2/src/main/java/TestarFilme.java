
public class TestarFilme {

   
    public static void main(String[] args) {
        Filme filme1 = new Filme("Jogos Mortais", 100);        
        filme1.setTitulo("Os Vingadores");
        filme1.setDuracaoEmMinutos(142);
        filme1.exibirDuracaoEmHoras();
        
        Filme filme2 = new Filme("Jogos Mortais 2", 100);        
        filme2.setTitulo("Hotel Transilvânia");
        filme2.setDuracaoEmMinutos(93);
        filme2.exibirDuracaoEmHoras();
        
        System.out.println("Os filmes em cartaz são "+filme1.getTitulo()+" e "+filme2.getTitulo());
        
        Filme filme3 = new Filme("Jogos Mortais 3", 100);        
        filme3.setTitulo("Hotel Transilvânia");
        filme3.setDuracaoEmMinutos(93);
        filme3.exibirDuracaoEmHoras();
        
        Filme filme4 = new Filme("Jogos Mortais 4", 100);        
        filme4.setTitulo("Hotel Transilvânia");
        filme4.setDuracaoEmMinutos(93);
        filme4.exibirDuracaoEmHoras();
        
        Filme filme5 = new Filme("Jogos Mortais 5", 100);        
        filme5.setTitulo("Hotel Transilvânia");
        filme5.setDuracaoEmMinutos(93);
        filme5.exibirDuracaoEmHoras();
        
        Filme filme6 = new Filme("Jogos Mortais 6", 100);        
        filme6.setTitulo("Hotel Transilvânia");
        filme6.setDuracaoEmMinutos(93);
        filme6.exibirDuracaoEmHoras();
        
        Filme filme7 = new Filme("Jogos Mortais 7", 100);        
        filme7.setTitulo("Hotel Transilvânia");
        filme7.setDuracaoEmMinutos(93);
        filme7.exibirDuracaoEmHoras();       
        
    }
    
}
