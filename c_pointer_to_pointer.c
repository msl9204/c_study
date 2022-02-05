//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>

void change_greet(char *q);
void change_greet2(char **q);
char *newGreet = "Hello";

int main() {

    int x = 10;
    int *px = &x;
    int **ppx = &px;

    *px = 20;
    printf("x = %d\n", x);
    printf("*px = %d\n", *px);

    **ppx = 50;
    printf("x = %d\n", x);
    printf("*px = %d\n", *px);
    printf("**ppx = %d\n", **ppx);


    char *greet = "Goodbye";
    printf("greet = %s \n", greet);
    change_greet(greet);
    printf("greet = %s \n\n", greet);

    printf("greet2 = %s \n", greet);
    change_greet2(&greet);
    printf("greet2 = %s \n", greet);


    return 0;
}

void change_greet(char *q) {
    printf("q = %s \n", q);
    q = newGreet;
    printf("q = %s \n", q);
}

void change_greet2(char **q) {
    printf("*q = %s \n", *q);
    *q = newGreet;
    printf("*q = %s \n", *q);
}
