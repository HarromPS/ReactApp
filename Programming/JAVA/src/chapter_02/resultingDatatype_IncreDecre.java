package chapter_02;

public class resultingDatatype_IncreDecre {
    public static void main(String[] args){
        // Resulting DataTypes after Arithmetic operations
        // byte + short = int
        byte b1=2;
        short s1=3;
        System.out.println("byte + short= "+b1+s1);
        
        // short + int = int
        int i1=4;
        System.out.println("short + int= "+s1+i1);

        // long + float = float
        long l=32L;
        float f=223.f;
        System.out.println("long + float= "+l + f);

        // character + int / char + short =>int
        char c=2;
        System.out.println("character + int "+i1+c);
        System.out.println("character + short "+s1+c);

        // int + float = float 
        System.out.println("int + float= "+i1+f);

        // long + double= float + double = double 
        double d=22.3;
        System.out.println("long + double= "+d+l);
        System.out.println("float + double= "+d+f);

        // Increment && decrement
        // a++ -> post-increment, ++a -> pre-increment
        // a-- -> post-decrement, --a -> pre-decrement
        int a=2;
        System.out.println("Post Increment a++= "+(a++)+", "+a*2); // 1st use then increment
        System.out.println("PreIncrement a= "+(++a));

        int b=++a; // first increment then assignment, b=5
        System.out.println("b= "+b);
        System.out.println("Post decrement b--= "+b--);
        System.out.println("Pre decrement --b= "+--b);

        // Quick Quiz: find ++y*8,if y=7 
        /* ++ right to left associativity
          y=7, ++y=8 , 8*8=64
         */
        int y=7;
        System.out.println("y="+y+", ++y*8= "+(++y*8));
        char ch='a';
        // ch=97;
        System.out.println("y="+y+", ++ch*8= "+(++ch*8));
    }
}
