// // #include <stdio.h>
// // #include <stdlib.h> // to generate a random number
// // #include<time.h>
// // // CL Practical 04:
// // // Q3] Write a program for a matchstick game being played between you &
// // // comp. Computer always wins
// // // Rules: 1. 21 matchsticks 2. user 1,2,3,4 matchsticks pickup
// // // whoever forced to pick up the last match stick will lose.

// // int main()
// // {
// //     int user ;
// //     printf("Pickup 1 or 2 or 3 or 4 matchsticks\n");
// //     scanf("%d",&user);
// //     int number;
// //     srand(time(0)); // seed to generate a random number
// //     // (rand()% (upper - lower +1 ))+lower
// //     number = (rand() % (21 - 1 + 1)) + 1;
// //     // printf("%d ", number);

// //     for(int i=1;i<=21;i++){
// //         if(user==1 || user==2 || user==3 || user==4 ){
// //             printf("User has picked %d\n",user);
// //             break;
// //         }
// //         if(number==user)
// //     }
// //     return 0;
// // }

// // // // //////////////////////////////////////////////////////////////////

// // // // #include <stdio.h>
// // // // #include <string.h> // library for string

// // // // struct student // user defined datatype
// // // // {
// // // //     int roll_no, marks;
// // // //     float percentage;
// // // //     char stud_name[10];
// // // // };

// // // // int main() // ARRAY OF STRUCTURE
// // // // {

// // // //     int n;
// // // //     int p, c, m, b, totl, avg;
// // // //     float perct;
// // // //     printf("\nPreparing The Report Card\n");
// // // //     printf("\nEnter the number of student in your school\n");

// // // //////////////////////////////////////
// // // #include <stdio.h>
// // // #include<string.h>
// // //     // DM PRACTICAL 03:
// // //     // To perform encryption & decryption of a given message
// // //     // using Ceaser Cipher

// // // int main()
// // // {
// // //     char message[20];   // message to be encrypted
// // //     printf("Enter your message\n");
// // //     gets(message);
// // //     int len=strlen(message);    // length of message
// // //     printf("length=%d\n",len);

// // //     int n;
// // //     printf("Enter the key\n==>");
// // //     scanf("%d",&n);
// // //     int en[20];
// // //     char store1[20];
// // //     for(int i=0;i<len;i++){
// // //         en[i]=((message[i]+n)%26);
// // //         store1[i]=en[i]+97;
// // //     }
// // //     printf("The encrypted message is: \n");
// // //     for(int i=0;i<len;i++){
// // //        printf("%c ",store1[i]);          // encrypted message
// // //     }

// // //     // restoring the encrypted message
// // //     for(int i=0;i<len;i++){
// // //         store1[i]=en[i];
// // //     }
// // //     for(int i=0;i<len;i++){
// // //         printf("%c ",store1[i]);
// // //     }
// // //     int store2[20];
// // //     int decry[20];
// // //     for(int j=0;j<len;j++){
// // //         decry[j]=((store1[j]-n)%26);
// // //         store2[j]=decry[j]+104;
// // //     }
// // //      printf("\nThe decrypted message is: \n");
// // //     for(int j=0;j<len;j++){
// // //        printf("%c",store2[j]);          // decrypted message
// // //     }

// // //     printf("\nfinish\n");

// // //     return 0;
// // // }

// // // #include <stdio.h>
// // // #include <string.h>

// // // int main()
// // // {
// // //     int n;
// // //     // printf("Enter a key value= ");
// // //     // scanf("%d",&n);
// // //     char str[20];
// // //     printf("Enter a message\n");
// // //     gets(str); // stores the whole string including space character

// // //     char *ptr = str; // *ptr stores addresses of str
// // //                      // *ptr ="Hello World"
// // //     int len = strlen(str);
// // //     while (*ptr != '\0') // runs until it encounters '\0'
// // //     {
// // //         *ptr += 1;
// // //         ptr++;
// // //     }
// // //     printf("The encrypted message is: %s\n", str);
// // //     char str2[len];
// // //     for (int i = 0; i < len; i++)
// // //     {
// // //         str2[i] = str[i]; // stores the encrypted message into new string
// // //     }

// // //     char *ptr2 = str2; // *ptr2 will work the same for str2
// // //                        // * ptr= *********
// // //     while (*ptr2 != '\0')
// // //     {
// // //         *ptr2 -= 1; // this time the message is converted back into original
// // //         *ptr2++;
// // //     }
// // //     printf("The decrypted message is: %s\n", str2);
// // //     return 0;
// // // }

// // // #include<stdio.h>
// // // #include<string.h>

// // // int main(){
// // //     char name[20];
// // //     scanf("%s",name);
// // //     int len =strlen(name);
// // //     printf("%d",len);
// // //     return 0;
// // // }

// // //
// // // }

// // // #include <stdio.h>
// // // #include <string.h>

// // // int main()
// // // {
// // //     char arr[20];
// // //     gets(arr);
// // //     int len = strlen(arr);
// // //     int i = 0;
// // //     for (int i = 0; i < len; i++)
// // //     {
// // //         if (arr[i] == ' ')
// // //         {
// // //             printf("\n");
// // //         }
// // //         else{
// // //             printf("%s",arr[i]);
// // //         }
// // //     }
// // //     return 0;
// // // }
// // ////////////////////////////////////////

// // // #include <stdio.h>
// // // #include <string.h>
// // // // DS: 25/08/2022   Practical 3
// // // // Write a program to find the duplicate elements with count
// // // // in a given array
// // // int main()
// // // {

// // //     int n;
// // //     printf("Enter the total no of elements in your array:\n");
// // //     scanf("%d", &n);
// // //     int arr[n];

// // //     printf("Enter the elements of your array \n");
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         printf("Enter the %d element :", i + 1);
// // //         scanf("%d", &arr[i]);
// // //     }

// // //     printf("The entered elements are: \n");
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         printf("%d ", arr[i]);
// // //     }

// // //     printf("The repeated elements are:\n");
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         for (int j = i; j < n; j++)
// // //         {

// // //             if (arr[j] == arr[j + 1])
// // //             {
// // //                 printf("%d ", arr[j]);
// // //                 int count = count + 1;
// // //                 break;
// // //             }
// // //             else
// // //             {
// // //                 printf("END!");
// // //                 break;
// // //             }
// // //         }
// // //     }
// // //     return 0;
// // // }

// // // #include<stdio.h>
// // // #include<string.h>

// // // // int change(char *name)
// // // // {
// // // //     char new_name;
// // // //     printf("Enter a new name\n");
// // // //     scanf("%s",&new_name);
// // // //     *name=new_name;

// // // // }

// // // int main(){
// // //     char name;
// // //     printf("Enter a name\n");
// // //     scanf("%c",&name);
// // //     printf("==>%c\n",name);

// // //     // gets(name);
// // //     // char arr;
// // //     // printf("The name entered is: %s\n",name);
// // //     // change(&name);
// // //     // printf("The new name is: %s\n",name);
// // //     return 0;
// // // }
// // ////////////////////////////

// // 
// // // ///////////////
// // 

////////////////////////////////////////////

// // #include <stdio.h>

// // // CL: Practical 04
// // // using recursion 
// // int game(int *n)
// // {
// //     // *n=*n+2;
// //     printf("%d ",*n);
// //     int x;
// //     int mtch = 21, computer, sum = 0;

// //     if (sum == 20)
// //     {
// //         printf("Total matchsticks remained: %d\n", mtch);
// //         if (mtch == 1)
// //         {
// //             printf("You lost the game\n");
// //         }
// //     }
// //     else
// //     {
        
// //         if (*n == 1)
// //         {
// //             computer = 4;
// //             printf("Computer choose: %d\n", computer);
// //             sum += (*n + computer);
// //             mtch -= (*n + computer);
// //         }
// //         if (*n == 2)
// //         {
// //             computer = 3;
// //             printf("Computer choose: %d\n", computer);
// //             sum += (*n + computer);
// //             mtch -= (*n + computer);
// //         }
// //         if (*n == 3)
// //         {
// //             computer = 2;
// //             printf("Computer choose: %d\n", computer);
// //             sum += (*n + computer);
// //             mtch -= (*n + computer);
// //         }
// //         if (*n == 4)
// //         {
// //             computer = 1;
// //             printf("Computer choose: %d\n", computer);
// //             sum += (*n + computer);
// //             mtch -= (*n + computer);
// //         }
// //         printf("Matchsticks remained= %d\n", mtch);
// //         printf("Pick 1, 2, 3 or 4 matchsticks: \n");
// //         scanf("%d", &x);
// //         *n=x;
// //         return game(n);
// //     }

    
// // }
// // int main()
// // {
// //     int n;
// //     printf("Pick 1, 2, 3 or 4 matchsticks\n");
// //     scanf("%d", &n);
// //     game(&n);

// //     return 0;
// // }
// /////////////////////////////////////////////////////
//