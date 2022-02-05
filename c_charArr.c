//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>

int main() {
    int i;
    char str[4];

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }

    printf("\n");

    printf("%s\n", str);


    char str1[6] = "Busan";
    char str2[3] = {'i', 's', '\0'};
    char str3[] = "the largest port of Korea.";

    printf("%s %s %s\n", str1, str2, str3);
    return 0;
}