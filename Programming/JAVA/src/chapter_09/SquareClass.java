// package com.hello.shape;
package chapter_09;


class Square121{
    float side;
    public void setSq(float s)
    {
        side=s;
    }
    public float getSq()
    {
        return side;
    }
    public float areaSq()
    {
        return side*side;
    }
    public float periSq()
    {
        return 4*side;
    }
}
public class SquareClass {
    public static void main(String[] args){
        System.out.println("This is a Square Class");
    }
}
