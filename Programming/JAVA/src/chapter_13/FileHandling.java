package chapter_13;

import java.io.File;
import java.util.Scanner;
import java.io.FileWriter;
import java.io.IOException;
import java.io.FileNotFoundException;

public class FileHandling {
    public static void main(String[] args) {
        // file creation
        File f = new File("abc1.txt");

        // using create a new file method
        try {
            f.createNewFile();
        } catch (IOException e) {
            System.out.println("Unable to create a file");
            e.printStackTrace();
        }

        // writing to a file
        try {
            FileWriter fw = new FileWriter("abc1.txt");
            fw.write("Hello World");
            fw.write("\nHello World ");
            fw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Reading a file
        File f2 = new File("abc.txt");
        try {
            Scanner sc = new Scanner(f2);
            while (sc.hasNextLine()) {
                String s = sc.nextLine();
                System.out.println(s);
            }
            sc.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }

        // deleting a file
        // if(f.delete()){
        //     System.out.println("File "+f.getName()+" is deleted");
        // }
        // else {
        //     System.out.println("Some error occures while deleting the file");
        // }
        // f.delete();
    }
}
