package chapter_02;

class _1operators
{
    public static void main(String[] args){
        // Arithmetic operator
        int a =3;
        int b=a+1;
        // left to right associativity
        System.out.println("Arithmetic operator "+b);
        b=2*4;
        System.out.println("Arithmetic operator "+b);
        // Modulo operator = gives the remainder 
        b=b%a;
        System.out.println("Modulo operator "+b);
        // Assignment operator do not work with booleans
        if((a+b)==5)
        {
            System.out.println("a+b true");
        }
        else{
            System.out.println(a+"+"+b+" false");
        }
        // % operator works on float & doubles
        float c=33.3f;
        float d=23.3f;
        System.out.println(c+" % "+d+"= "+(c%d));
        // Assignment operator 
        b+=2;
        a*=4;
        System.out.println("Assignment operator a "+a);
        System.out.println("Assignment operator b "+b);
        // Comparison operator = true or false
        System.out.println("Comparison operator a,b "+(a==b));
        System.out.println("Comparison operator 7>2 "+(7>2));
        System.out.println("Comparison operator 34<=2 "+(34<=2));

        // logical operator
        System.out.print("logical && operator (23>=3) && (34==3) ");
        // if first expression is false it throws dead code warning 
        System.out.println((23>=3) && (34==3));
        System.out.println("logical || operator (2<3) || (4>5) ");
        // System.out.println((2<3) || (43!=5));

        //Bitwise operator - operates bit-by-bit
        // 2&3 - 0010 and operation 0011 = 0010
        System.out.println("Bitwise operator 2&3 "+(2&3));




    }
};