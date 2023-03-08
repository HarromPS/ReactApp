#include<stdio.h>
float mass(float m);

int main(){
        // Q3 Write a function to calculate force body attraction 
        //on a body of mass m exerted by earth  (g=9.8 m/s^2)

    float m;
    printf("Enter the mass of a body\n");
    scanf("%f",&m);
    printf("The force exerted by the Earth on the body in Newton is %.2f m/s^2 \n",mass(m));

     return 0; 
}
float mass (float m )
{
    float force=m*9.8 ;
    return force;

}