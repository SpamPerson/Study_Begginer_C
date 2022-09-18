#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    /* === 조건문(if) === */
    // # 버스를 탄다고 가정, 학생 / 일반인으로 구분 (일반인 : 20세)
    // int age;
    // printf("몇살 인가요?");
    // scanf("%d",&age);

    // if(age >= 20) printf("일반인 입니다.");
    // else printf("학생입니다.");

    // # 학생을 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)으로 나누면?
    //     int age;
    //     printf("몇살 인가요?");
    //     scanf("%d",&age);

    //    if(age >= 20) {
    //     printf("일반인 입니다.");
    //    } else {
    //     if(age >= 13){
    //         printf("초등학생 입니다.");
    //     } else if (age >= 16) {
    //         printf("중학생 입니다.");
    //     } else {
    //         printf("고등학생 입니다.");
    //     }
    //    }

    /* === 조건문(break & continue) === */
    // # 1번부터 n번까지(5번 이상) 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
    // int num;
    // printf("몇번 까지 있나요?");
    // scanf("%d",&num);

    // for(int i=1; i<=num; i++){
    //     if(i >= 6) {
    //         printf("나머지는 집에 가세요\n");
    //         break;
    //     }
    //     printf("%d번 발표준비 하세요\n",i);
    // }

    // # 1번부터 n번까지(10이상) 있는 반에서 7번 학생은 아파서 결석 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
    // continue : 구문을 실행하지 않고, 다음 구문으로 넘어감.
    // break : 구문을 실행하지 않고, 종료
    // int num;
    // printf("몇번 까지 있나요?");
    // scanf("%d", &num);

    // for (int i = 0; i < num; i++)
    // {
    //     if (i >= 6 && i <= 10)
    //     {
    //         if (i == 7)
    //         {
    //             printf("%d번 학생은 결석입니다.\n", i);
    //             continue;
    //         }
    //         printf("%d번 발표준비 하세요\n", i);
    //     }
    // }

    /* === 조건문(&& ||) === */
    // int a = 10;
    // int b = 10;
    // int c = 12;
    // int d = 13;

    // if(a == b && c == d){
    //     printf("a와 b가 같고 c와 d도 같습니다.");
    // } else {
    //     printf("모두 같지 않습니다.");
    // }

    // if(a == b || c == d){
    //     printf("a와 b가 같거나 c와 d가 같습니다.");
    // } else {
    //     printf("모두 같지 않습니다.");
    // }

    /* === 조건문 (Switch Case) === */
    // 가위 0 , 바위 1 , 보 2
    srand(time(NULL));
    int i = rand() % 3; // 0 ~ 2 반환

    // if(i == 0){
    //     printf("가위\n");
    // } else if (i == 1){
    //     printf("바위\n");
    // } else if(i == 2){
    //     printf("보\n");
    // } else {
    //     printf("몰라요\n");
    // }
    // 0, 1, 2 이외의 else와 같은 역할은 default로 해결하고, break를 안쓰면 다음 케이스도 같이 출력한다.
    // switch (i)
    // {
    // case 0:
    //     printf("가위\n");
    //     break;
    // case 1:
    //     printf("바위\n");
    //     break;
    // case 2:
    //     printf("보\n");
    //     break;
    // default:
    //     printf("몰라요\n");
    //     break;
    // }
    

    return 0;
}