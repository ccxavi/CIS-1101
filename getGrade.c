#include <stdio.h>

char getGrade(int);

int main(){

    int score, grade;
    
    printf("Enter Score: ");
    scanf("%d", &score);

    grade = getGrade(score);

    return grade;
}

char getGrade(int score){
    if(score >= 90){
        printf("Grade: %c", 'A');
    }
    else if(score >= 80 && score <= 89){
        printf("Grade: %c", 'B');
    }
    else if(score >= 70 && score <= 79){
        printf("Grade: %c", 'C');
    }
    else if(score >= 60 && score <= 69){
        printf("Grade: %c", 'D');
    }
    else{
        printf("Grade: %c", 'F');
    }
    return score;
}