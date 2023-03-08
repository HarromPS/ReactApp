// package com.hello.shape;
package chapter_09;
import java.lang.Math;

class Circle121
{
    public float radius;
    public void setCircle(float r)
    {
        radius=r;
    }
    public void getCircle()
    {
        System.out.println(radius);
    }
    public float areaCircle()
    {
        return radius;
    }
    public double periCircle()
    {
        double d = (double)2.0f*(Math.PI*radius);
        return d;
    }
}
public class CircleClass {
    public static void main(String[] args){
        System.out.println("This is a Circle Class");

    }
}
