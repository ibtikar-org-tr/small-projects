#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>



int main() {

    // getting a random number
    srand(time(NULL));
    int x1 = rand() % 9 + 1;
    int x2 = rand() % 9 + 1;
    
    char operations[] = {'+', '-', '/', '*'};

    // explaining the game
    printf("Hello to Calculator Game!\n");
    printf("You are going to have multiple operatrions\nSolve 3 to win the game\nIf you get 2 wrong answers you lose\n");
    printf("In case you have division, do NOT write the floating point!!\n");
    for(int i = 0; i < 60; i++){
        printf("#");
    }
    printf("\n");
    
    

    double answer = 0;
    int true_answer = 0;
    int false_answer = 0;
    char operation = operations[rand() % 4];



    while (true){
    printf("The operation is: %d %c %d\n", x1,operation ,x2);
    scanf("%lf", &answer);
    switch (operation)
    {
    case '+':
        if((x1 + x2) == answer){
            true_answer++;
            printf("True Answer!\n");
        }else {
            false_answer++;
            printf("wrong answer!\n");
        }
        printf("You have %d True Answers and %d wrong answers\n", true_answer, false_answer);
        break;
    case '-':
        if((x1 - x2) == answer){
            true_answer++;
            printf("True Answer!\n");
        }else {
            false_answer++;
            printf("wrong answer!\n");
        }
        printf("You have %d True Answers and %d wrong answers\n", true_answer, false_answer);
        break;
    case '/':
        if((x1 / x2) == answer){
            true_answer++;
            printf("True Answer!\n");
        }else {
            false_answer++;
            printf("wrong answer!\n");
        }
        printf("You have %d True Answers and %d wrong answers\n", true_answer, false_answer);
        break;
    case '*':
        if((x1 * x2) == answer){
            true_answer++;
            printf("True Answer!\n");
        }else {
            false_answer++;
            printf("wrong answer!\n");
        }
        printf("You have %d True Answers and %d wrong answers\n", true_answer, false_answer);
        break;
    }
    
    // For new round
    x1 = rand() % 9 +1;
    x2 = rand() % 9 +1;
    operation = operations[rand() % 4];

    if(true_answer == 3){
        printf("Congratulation! You Won :)");
        break;
    }else if(false_answer == 2){
        printf("Unfortunately! You lost :(");
        break;
    }


    }



    return 0;
}