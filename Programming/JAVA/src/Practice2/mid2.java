package Practice2;

class Student{
    private String name;
    private double phy,chem,maths;
    public double Phy(double p){
        this.phy=p;
        return this.phy;
    }
    public double Maths(double m){
        this.maths=m;
        return this.maths;
    }
    public double Chem(double c){
        this.chem=c;
        return this.chem;
    }
    public String Name(String str){
        this.name=str;
        return this.name;
    }
};
class Result extends Student{
    private double total,average;

    public double CalculateTotal(String S,double p,double c,double m){
        this.total=this.Phy(p)+this.Chem(c)+this.Maths(m);
        return this.total;
    }

    public double CalculateAvg(String S,double p,double c,double m){
        this.total=this.Phy(p)+this.Chem(c)+this.Maths(m);
        this.average=this.total/3;
        return this.average;
    }
};
public class mid2 {
    public static void main(String[] args){
        Result r=new Result();
        System.out.println("Total is: "+r.CalculateTotal("Amit", 23, 44, 65));
        System.out.println("Average is: "+r.CalculateAvg("Amit", 23, 44, 65));
    }
}