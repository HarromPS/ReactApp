// package chapter_07;

// public class a {
//     void show() {
//         System.out.println("A new object created.");
//     }

//     public static void main(String[] args) {
//         try {
//             // creating an instance of Class class
//             Class cls = Class.forName("a");
//             // creates an instance of the class using the newInstance() method
//             a obj = (a) cls.newInstance();
//             // invoking the show() method
//             obj.show();
//         } catch (ClassNotFoundException e) {
//             e.printStackTrace();
//         } catch (InstantiationException e) {
//             e.printStackTrace();
//         } catch (IllegalAccessException e) {
//             e.printStackTrace();
//         }
//     }
// }
