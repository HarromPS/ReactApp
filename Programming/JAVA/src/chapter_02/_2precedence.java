package chapter_02;

public class _2precedence {
    public static void main(String[] args){
        // Precedence & Associativity
        int a= 6*5-34/2;
        /*
            * & / has same precedence
            - has lesser precedence than * & /
            (6*5)-(34/2) => 30 - 17
                         => 13
         */
        System.out.println("6*5-34/2= "+a);
        a=60/5-34*2;
        System.out.println("6*5-34/2= "+a);
        /*
            * & / has same precedence
            associativity works from left to right for * & /
            (60/5)-(34*2)=> 12-68 => -56
         */
        a=60/(5-34)*2;
        System.out.println("60/(5-34)*2= "+a);
        /*
            * & / has same precedence
            but lesser precedence than (), on basis of
            associativity, works from left to right for ()
            60/(5-34)*2=> 60/(-31)*2=> (61/-31)*2
                       =>-2*2=> -4
         */

        // Quick Quiz:
        // x-y/2 =
        int x=2,y=3;
        // 2-(3/2)=> 2-1=> 1
        System.out.println("x-y/2= "+(x-y/2));
        // b1*b1-a1*1*c1/2*a1
        int b1=1,a1=2,c1=3;
        /*
         b1*b1-4*a1*c1/2*a1=> (b1*b1)-[4*a1*c1/2*a1]
                           => (1)-((4*2*3)/2)*2
                           => 1-(12*2)
                           => 1-24 => -23
         */
        System.out.println("b1*b1-4*a1*c1/2*a1= "+(b1*b1-4*a1*c1/2*a1));
        // ans changes if brackets applied
        System.out.println("(b1*b1)-(4*a1*c1)/(2*a1)= "+((b1*b1)-(4*a1*c1)/(2*a1)));
    }
}
