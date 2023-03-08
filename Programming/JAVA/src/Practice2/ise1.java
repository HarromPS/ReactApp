package Practice2;
import java.util.Scanner;

class Base
{
    float phy;
    float chem;
    public void setValues(){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter phy marks: ");
        this.phy=sc.nextFloat();
        System.out.print("Enter chem marks: ");
        this.chem=sc.nextFloat();
        sc.close();
    }
}
class Derived extends Base{
    public float sum()
    {
        float r=this.phy + this.chem;
        return r;
    }
}
public class ise1 {
    public static void main(String[] args){
        Derived d= new Derived();
        d.setValues();
        float result=d.sum();
        System.out.printf("Sum: %.2f\n",result);
    }
}
