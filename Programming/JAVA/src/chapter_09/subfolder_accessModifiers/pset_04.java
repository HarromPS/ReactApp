package chapter_09.subfolder_accessModifiers;
import chapter_09.Access;
class X extends Access
{
    public void printlk(int o)
    {
        a=o;
        System.out.println(a);
        System.out.println(b);
        // System.out.println(c);
        // System.out.println(d);
    }
}
public class pset_04 {
    public static void main(String[] args){
        // Prove that default property is not accessible by the 
        // from sub class but protected is acccessible.
        X x =new X();
        x.printlk(12);
    }
}
