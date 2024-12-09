#include <stdio.h>

void checkLoanEligibility(int, double);

int main(){

    int creditScore;
    double income;

    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);

    printf("Enter Monthly Income: ");
    scanf("%lf", &income);

    checkLoanEligibility(creditScore, income);

    return 0;
}

void checkLoanEligibility(int creditScore, double income){
    if(creditScore >= 700 && income > 3000){
        printf("Qualification: Premium Loan");
    }
    else if(creditScore >= 600 && creditScore <= 699 && income > 2000){
        printf("Qualification: Standard Loan");
    }
    else{
        printf("Qualification: Not Eligibile\n");
    }   
}