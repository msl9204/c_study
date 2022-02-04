//
// Created by MinsooLee on 2022/02/04.
//

#include <stdio.h>
#include <string.h>

// 구조체 정의
struct Person {
    char name[100];
    int age;
    int height;
    float weight;
};

struct Point2D {
    int x;
    int y;
};

int main() {
    struct Person personA, personB;

    strcpy(personA.name, "Hong GilDong");
    personA.age = 20;
    personA.height = 179;
    personA.weight = 73.2;

}