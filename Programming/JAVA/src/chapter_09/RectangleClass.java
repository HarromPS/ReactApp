// package com.hello.shape; // use if want to use the exercise .java file
package chapter_09;


class Rectangle121
{
    public float length,breadth;
    public void setRec(float l,float b)
    {
        length=l;
        breadth=b;
    }
    public void getRec()
    {
        System.out.println(length);
        System.out.println(breadth);
    }
    public float areaRec()
    {
        return length*breadth;
    }
    public float periRec()
    {
        return 2*(length+breadth);
    }
}
public class RectangleClass {
    public static void main(String[] args){
        System.out.println("This is a Rectangle Class");

    }
}
