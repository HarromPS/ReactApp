package chapter_08;

class OldPhone{
    public void on(){
        System.out.println("Turning on OldPhone.......");
    } 
    public void name2()
    {
        System.out.println("Second methods of class OldPhone");
    }
};

class SmartPhone extends OldPhone{
    public void on(){
        System.out.println("Turning on SmartPhone.......");
    }   

    public void naam(){
        System.out.println("Second method of class SmartPhone");
    }   
}
/*
1) Dynamic Method Dispatch ->pointer to Derived class in C++
--> Base class reference to the Derived class object 
--> only Derived methods from Base is accessible to Base class reference
--> when same methods -> virtual functions
*/
public class Dynamic_method_dispatch {
    public static void main(String[] args){
        OldPhone obj=new OldPhone();
        obj.on();

        // Base is referring to Derived class
        // object is smartphone 
        // pick up phone-> phone
        // turn on phone ->smartPhone because object picked is smartphone
        OldPhone p = new SmartPhone();
        p.on();
    }
}
