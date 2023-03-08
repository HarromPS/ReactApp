package chapter_13;

// import java.lang.Deprecated;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

// import java.util.Scanner;
/**
 * @author Hariom
 * @version 0.1
 * @see javaDocs
 * @since 2023
 */
/**
 * This is a Practice set class and most of the questions are going to
 * be included in this file
 *
 */

interface solo {
    void showMethod();
}

@FunctionalInterface
interface dual {
    void dualMethod();
}

class DAnnotation extends Annotations{
    int a, b;

    public void setValues(int x, int y) {
        this.a = x;
        this.b = y;
    }

    @Deprecated
    public void sum() {
        System.out.println(a + b);
    }
};

public class pset_01 {
    public static void main(String[] args) {
        // Q1 Create a javadoc of a program
        // Q2 Create a class and add a method with deprecated annotation.
        // What is the effect on the program execution?
        DAnnotation d = new DAnnotation();
        d.setValues(12, 32);

        // use cmd-> javac -Xlint className.java
        d.sum();

        // shows deprecated warnings
        // d.print2();

        // Q3 Suppress the warning from Q2
        // Q4 Create an interface & generate an instance from it
        solo obj = new solo() {
            @Override
            public void showMethod() {
                System.out.println("Solo instance created");
            }
        };
        obj.showMethod();

        dual dud = () -> {
            System.out.println("This is a dual method defination of interface using lambda expression");
        };
        dud.dualMethod();

        // Q5 WAP to generate multiplication table of a given number & write it into a
        // file

        // file creation
        File f = new File("PracticeSetChapter_13.txt");
        try {
            f.createNewFile();
            System.out.println("File created successfully");
        } catch (IOException e) {
            System.out.println("Unable to open the file");
        }

        int n = 7;
        // writing to the file
        String str="";
        try {
            FileWriter fw = new FileWriter(f);
            for (int i = 1; i <= 10; i++) {
                // redundant cast to string
                // String str = (String) (n + " X " + i + " = " + n * i);
                str = (n + " X " + i + " = " + n * i);
                fw.write(str + "\n");
            }
            fw.close();
        } catch (IOException e) {
            System.out.println("Unable to write the file");
            e.printStackTrace();
        }

        // Q6 Repeat Q5 and write 2-9 in a folder
        try {
            FileWriter fw = new FileWriter(f);
            for (int j = 2; j <= 9; j++) {
                for (int i = 1; i <= 10; i++) {
                    str = (j + " X " + i + " = " + j * i);
                    fw.write(str + "\n");
                }
                fw.write("\n");
            }
            fw.close();
        } catch (IOException e) {
            System.out.println("Unable to write the file");
            e.printStackTrace();
        }

    }
}
