#include<stdio.h>
int main()
{
   int m;
   printf("Enter your total marks out of 100:\n");
   scanf("%d,&marks");
        if(m<0 && m>100)
       { printf("Abe marks to sahi dal\n");}
        // means invalid marks
     else
     {
         if(m>35)
        { printf("Abe itne kam marks aye ki tu fail ho gaya\n");}
                else
               { printf("Va bhai acha hai badhiya keep it up\n");}
     }   

     printf("Percentage you got=%d\n",m);
     //Are mujhe % me print karna nahi ata isi liye percent you got me marks hi dikha raha hai
     return 0;

}