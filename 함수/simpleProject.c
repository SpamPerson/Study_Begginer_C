#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    비밀번호 마스터
    관문이 5개가 있고, 각 관문마다 점점 어려운 수식 퀴즈가 출제
    맞히면 통과, 틀리면 실패
    1단계 : 덧셈, 2단계 : 뺄셈, 3~5단계 : 곱셈
*/

int getRandomNumber(int level);
int function_random_result(int level,int num1, int num2);

int main(void)
{
    srand(time(NULL));

    for (int i = 1; i <= 5; i++)
    {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        int answer = function_random_result(i,num1, num2);
        int result;

        printf("정답을 입력해 주세요 : \n");
        scanf("%d",&result);
      
        if(answer == result){
            printf("%d 단계 통과\n\n",i);
            if(i == 5){
                printf("모든 단계 통과!!\n\n");
            }
        } else {
            printf("실패");
            break;
        }
    }

    return 0;
}

int getRandomNumber(int level) {
    return rand() % (level * 7) + 1;
}

int function_random_result(int level ,int num1, int num2)
{
    int result;
    // level 1 : 더하기 , level 2: 빼기, level 3 ~ 5: 곱셈
    switch (level)
    {
    case 1: 
        result = num1 + num2;
        printf("%d + %d = ?\n",num1, num2);
        break;
    case 2:
        result = num1 - num2;
        printf("%d - %d = ?\n",num1, num2);
        break;
    case 3:
    case 4:
    case 5:
        result = num1 * num2;
        printf("%d * %d = ?\n",num1, num2);
        break;
    }
    return result;
}