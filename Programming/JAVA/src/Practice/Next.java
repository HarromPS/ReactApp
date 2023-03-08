package Practice;
import java.util.Scanner;

class Next {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){

                String s1=sc.next();
                int x=sc.nextInt();

                // flush the previous input
                sc.nextLine();

                //Complete this line
                System.out.printf("%s",s1);
                int y=s1.length();

                for(int j=0;j<(15-y);j++){
                    System.out.printf(" ");
                }
                if(x>=100){
                    System.out.printf("%d",x);
                }
                else{
                    System.out.printf("0%d",x);
                }
                System.out.println();
            }
            System.out.println("================================");
            sc.close();

    }
};