package Practice;

import java.util.Scanner;

class Employee {
  String name;
  String address;
  long phoneNo;
  int exp;

  // default constructor
  public Employee() {
  }

  // getters & setters of the class attributes
  public void setNameAddress(String N, String Address) {
    this.name = N;
    this.address = Address;
  }

  public void setNoExp(long L, int E) {
    this.phoneNo = L;
    this.exp = E;
  }

  public void getDetails() {
    System.out.println("Name: " + this.name);
    System.out.println("Address: " + this.address);
    System.out.println("Phone No: " + this.phoneNo);
    System.out.println("Experience: " + this.exp);
  }
};

class Programmer extends Employee {
  Scanner sc = new Scanner(System.in);
  int language;

  // Programming languages
  public void writeCode() {
    System.out.print("\nChoose a language: ");
    System.out.print("1) Python ");
    System.out.print("2) Java ");
    System.out.print("3) C++ ");
    System.out.print("4) JavaScript ");
    System.out.print("5) HTML =>>");
    language = Integer.parseInt(sc.nextLine());
    switch (language) {
      case 1:
        System.out.println("// Start Writing your Python code");
        sc.nextLine();
        break;

      case 2:
        System.out.println("// Start Writing your Java code");
        sc.nextLine();
        break;

      case 3:
        System.out.println("// Start Writing your C++ code");
        sc.nextLine();
        break;

      case 4:
        System.out.println("// Start Writing your JavaScript code");
        sc.nextLine();
        break;

      case 5:
        System.out.println("// Start Writing your HTML code");
        sc.nextLine();

      default:
        System.out.println("Invalid Input");

    }
  }
};

class Manager extends Employee {
  public Scanner sc = new Scanner(System.in);
  int teamSize;

  // setters & getters
  public void setTeam() {
    System.out.print("\nChoose TeamSize : ");
    System.out.print("1) 5 ");
    System.out.print("2) 12 ");
    System.out.print("3) 15 ");
    System.out.print("4) 20 ");
    System.out.print("5) 25 =>>");
    int i = Integer.parseInt(sc.nextLine());
    this.teamSize = i;
    System.out.println("Your Team size is: " + this.teamSize + " programmers");
  }

  public void reportProjectStatus() {

    switch (this.teamSize) {
      case 1:
        System.out.println("Your Team Status: 20%\nPress Enter");
        sc.nextLine();
        break;

      case 2:
        System.out.println("Your Team Status: 38%\nPress Enter");
        sc.nextLine();
        break;

      case 3:
        System.out.println("Your Team Status: 45%\nPress Enter");
        sc.nextLine();
        break;

      case 4:
        System.out.println("Your Team Status: 59%\nPress Enter");
        sc.nextLine();
        break;

      case 5:
        System.out.println("By Default Your Team Status: 77%\nPress Enter");
        sc.nextLine();
        break;

      default:
        System.out.println("By Default Team Status: 0%");

    }
  }
};

public class Main {
  static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
    System.out.print("Enter Programmer's name: ");
    String name = sc.nextLine();

    System.out.print("Enter Programmer's address: ");
    String address = sc.nextLine();

    System.out.print("Enter Programmer's Phone No: ");
    long phoneNo = sc.nextLong();

    System.out.print("Enter Programmer's Experience: ");
    int exp = sc.nextInt();

    Programmer P = new Programmer();
    P.setNameAddress(name, address);
    P.setNoExp(phoneNo, exp);
    P.getDetails();
    P.writeCode();

    // Employee e=new Manager(); //Dynamic Method Dispatch
    System.out.print("Press Enter ");
    sc.nextLine();
    System.out.print("\nEnter Manager's name: ");
    name = sc.nextLine();

    System.out.print("Enter Manager's address: ");
    address = sc.nextLine();

    System.out.print("Enter Manager's Phone No: ");
    phoneNo = sc.nextLong();

    System.out.print("Enter Manager's Experience: ");
    exp = sc.nextInt();
    Manager M = new Manager();
    M.setNameAddress(name, address);
    M.setNoExp(phoneNo, exp);
    M.getDetails();
    M.setTeam();
    M.reportProjectStatus();

  }
}