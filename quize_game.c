//
// Created by hlyan on 3/20/24.
//
#include "stdio.h"
#include "stdlib.h"

void isStart();

int point1,point2,point3,point4,point5;
int choose = 0;

void isIntro(){
    int isInfinite = 1;
    while (isInfinite) {
        printf("---------- Welcome To Quize Game ----------\n\n");
        printf("1) Start Game \n");
        printf("2) Exit Game \n");
        printf("Please Type Number To Choose: ");
        scanf("%d", &choose);
        if(choose == 1){
            isStart();
        }else if (choose == 2) {
            isInfinite = 0;
        } else {
            printf("\nWrong Choosing!\n");
        }
    }
    if(isInfinite == 0){
        EXIT_SUCCESS;
    }

}
void isStart(){

        if (choose == 1) {
            point1 = 0;
            point2 = 0;
            point3 = 0;
            point4 = 0;
            point5 = 0;
            int isChoose = 0;
            //Q1
            printf("\nWhat is My name?\n");
            printf("1)Hlyan Htet Khant\n2)Hyan Htet Htet\n3)Hlywan Htet Khant\n");
            printf("Type Number To Choose: ");
            scanf("%d", &isChoose);
            if (isChoose == 1) {
                point1 = 5;
                printf("\nYour Answer is Correct");
                printf("\nYour get %d point ", point1);
            } else if (isChoose == 2 || isChoose == 3) {
                point1 = 0;
                printf("\nYour Answer is Incorrect");
            } else {
                printf("\nWrong Choose!");
            }
            //Q2
            printf("\nWhat is My Birthday date?\n");
            printf("1)18.1.1980\n2)18.12.1995\n3)18.6.1996\n");
            printf("Type Number To Choose: ");
            scanf("%d", &isChoose);
            if (isChoose == 3) {
                point2 = 5 + point1;
                printf("\nYour Answer is Correct");
                printf("\nYour get %d point ", point2);
            } else if (isChoose == 1 || isChoose == 2) {
                point2 = point1;
                printf("\nYour Answer is Incorrect");
            } else {
                printf("\nWrong Choose!");
            }
            //Q3
            printf("\nWhat is My Favorite Colour?\n");
            printf("1)Pink\n2)Brown\n3)Black\n");
            printf("Type Number To Choose: ");
            scanf("%d", &isChoose);
            if (isChoose == 2) {
                point3 = 5 + point2;
                printf("\nYour Answer is Correct");
                printf("\nYour get %d point ", point3);
            } else if (isChoose == 1 || isChoose == 3) {
                point3 = point2;
                printf("\nYour Answer is Incorrect");
            } else {
                printf("\nWrong Choose!");
            }
            //Q4
            printf("\nWhat Many Family Member I have ?\n");
            printf("1)3\n2)6\n3)4\n");
            printf("Type Number To Choose: ");
            scanf("%d", &isChoose);
            if (isChoose == 3) {
                point4 = 5 + point3;
                printf("\nYour Answer is Correct");
                printf("\nYour get %d point ", point4);
            } else if (isChoose == 1 || isChoose == 2) {
                point4 = point3;
                printf("\nYour Answer is Incorrect");
            } else {
                printf("\nWrong Choose!");
            }
            //Q5
            printf("\nWhat is My Dream Job?\n");
            printf("1)Want To Be A Programmer\n2)Want To Be A Make-up Artist\n3)Want To Be A Pilot\n");
            printf("Type Number To Choose: ");
            scanf("%d", &isChoose);
            if (isChoose == 1) {
                point5 = 5 + point4;
                printf("\nYour Answer is Correct");
                printf("\nYour get %d point\n\n", point5);
            } else if (isChoose == 1 || isChoose == 3) {
                point5 = point4;
                printf("\nYour Answer is Incorrect");
            } else {
                printf("\nWrong Choose!\n\n");
            }
        }

}

int main(){
  isIntro();
  isStart();
}