//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>
#include <string.h>

struct student {
    int student_id;
    char name[10];
    double grade;
};

struct point {
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};

int main() {
    struct student s = {20170000, "kim", 3.4};

    s.student_id = 20170001;
    strcpy(s.name, "홍길동");
    s.grade = 4.3;

    printf("학번 : %d\n", s.student_id);
    printf("이름 : %s\n", s.name);
    printf("학점 : %f\n", s.grade);


    struct rect r;
    int w, h, area, peri;

    printf("왼쪽 하단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    printf("오른쪽 하단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;

    area = w * h;
    peri = 2 * w + 2 * h;
    printf("사각형의 면적은 %d이고 둘레는 %d입니다.\n", area, peri);

    return 0;
}
