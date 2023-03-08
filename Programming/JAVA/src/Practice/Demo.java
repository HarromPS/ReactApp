package Practice;

public class Demo {
    static void sum(int n,char ch){
        System.out.println(n+", "+ch);
    }
    static void sum(char ch,int n){
        System.out.println(ch+", "+n);
    }
    public static void main(String[] args){
        sum(1,'e');
        sum('e',3);
    }
}
