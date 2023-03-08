package chapter_0;

/* 
There are two types of dataTypes - Primitive(built-in) & Non-Primitive(derived)
for 'n' bytes -> range of a datatype is given by 
    -(2^8n)/2 to (2^8n)/2-1 (-1 neglecting zero value)
 */

// bool - value is true/false 
//      - size depends on JVM
//      - default value is false
public class variables_dataTypes {
    public static void main(String[] args) {
        System.out.print("Radhika Pravin Shivhare\n");
        for (int i = 0; i < 10; i++) {
            System.out.println(6 * (i + 1));
        }
        int x = 5;
        int y=0;// unused variables in java gives you warning
        int z=2;
        int sum = x+y+z;
        System.out.println(sum);
        
        if (x == 4) {
            System.out.print("Your favourite number is: ");
            System.out.print(x);
        } else {
            System.out.println("Your favourite number is Missing ");
        }
    }

}