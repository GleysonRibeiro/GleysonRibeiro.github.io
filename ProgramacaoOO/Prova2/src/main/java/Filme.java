
public class Filme {
    
    private String titulo;
    
    private int duracaoEmMinutos;

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public int getDuracaoEmMinutos() {
        return duracaoEmMinutos;
    }

    public void setDuracaoEmMinutos(int duracaoEmMinutos) {
        this.duracaoEmMinutos = duracaoEmMinutos;
    }
    
    
    public Filme(String titulo, int duracaoEmMinutos){
        this.titulo=titulo;
        this.duracaoEmMinutos=duracaoEmMinutos;
    }
    
    public void exibirDuracaoEmHoras(){
        int hora, minuto;
        
        hora=this.duracaoEmMinutos/60;
        minuto=this.duracaoEmMinutos%60;
        
        System.out.println("O filme "+this.titulo+" possui "+hora+" horas e "+minuto+" minutos de duração");
    }   
    
}
