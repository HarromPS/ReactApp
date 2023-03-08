package chapter_06;

public class methodOverloading {

    // Method overloading

    // void return types ->returns nothing 
    public static void sum()
    {
        System.out.println("This is a void return type method");
    }
    public static float sum(float a, float b, float moneyLeft) {
        // https://www.youtube.com/watch?v=Rt_FjKLVehc&embeds_euri=https%3A%2F%2Fpracticle.sg%2F&feature=emb_rel_end

        // float a-> spent 1 ,float b-> spent 2
        // find the total money before spending 1 & 2
        float first_money;

        // total money - spent 1
        // remainder = 1 - spent 1 (reducing one part)
        float f1 = 1 - a;
        // remainder = 1-spent 2 (reducing one part )
        float f2 = 1 - b;
        // left x remainder f1
        float f3 = f1 * f2;
        // Now the first money is given by,
        first_money = moneyLeft/f3;

        return first_money;
    }

    public static int sum(int a, int b, int moneyLeft) {
        // https://www.youtube.com/watch?v=Rt_FjKLVehc&embeds_euri=https%3A%2F%2Fpracticle.sg%2F&feature=emb_rel_end

        // int a-> spent 1 ,int b-> spent 2
        // find the total money before spending 1 & 2
        int first_money;

        // total money - spent 1
        // remainder = 1 - spent 1 (reducing one part)
        int f1 = 1 - a;
        // remainder = 1-spent 2 (reducing one part )
        int f2 = 1 - b;
        // left x remainder f1
        int f3 = f1 * f2;
        // Now the first money is given by,
        first_money =  moneyLeft/f3;

        return first_money;
    }

    
    public static void main(String[] args) {
        /*
         * Method Overloading -> methods with same name & having different return types
         * & different parameters/arguments.
         */
        // Calling the overloaded functions
        float f = sum((4f / 7f), (2f / 3f), 10);
        System.out.println("She had money first: " + f + " in float");
        f=sum(4,5,45);
        System.out.println("She had money first: "
                + f + " in int");
        sum();

    }
}
