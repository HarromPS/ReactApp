#include <stdio.h>

int main()
{
    // Q3 calculate income tax
    // 2.5 L - 5 l 5% tax
    // 5 l - 10 L 20% tax
    // above 10 L 35% tax

    float income, tax;
    printf("Enter you real income\n ");
    scanf("%f", &income);

    if (income >= 250000 && income < 500000){
        tax = (0.05* income );
    
        printf("You tax on %f income is %f \n PAY AS SOON AS POSSIBLE\n",income,tax);
    }
    else if (income >= 500000 && income < 1000000){
        tax =(0.2 * income );
    
        printf("You tax on %f is %f \n PAY AS SOON AS POSSIBLE\n",income,tax);
    }
    else if (income > 1000000 ){
        tax = (0.35 * income );
        printf("You tax on %f is %f \n PAY AS SOON AS POSSIBLE\n",income,tax);
    }
    else{
        printf("You do not have to pay income tax\n");
    }

    return 0;
}