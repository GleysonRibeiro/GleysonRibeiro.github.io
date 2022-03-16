
package Outros;

/**
 *
 * @author Gleyson
 */
public class Balanco {
    
    private double mes1;
    private double mes2;
    private double mes3;
    
    public void setMes1(double n){
        this.mes1=n;
    }
    public double getMes1(){
        return this.mes1;
    }
    public void setMes2(double n){
        this.mes2=n;
    }
    public double getMes2(){
        return this.mes2;
    }
    public void setMes3(double n){
        this.mes3=n;
    }
    public double getMes3(){
        return this.mes3;
    }
    public double calculaTrimestre(){
        return this.mes1+this.mes2+this.mes3;
    }
}
