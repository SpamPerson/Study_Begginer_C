#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    # 아빠는 대머리
    4개의 발모제 중에 진짜 발모제 1개를 맞추는 게임
    발모제 1~4번 중에 첫번째는 2개 두번째부터 3개를 동시에뿌려서 머리가 났는지의 여부를 보여주고(3번 보여줌) 진짜 발모제의 번호를 찾는 게임
    * MACBOOK에서는 clock() 함수가 제대로 작동하지 않음.
 */
int main(void)
{
    srand(time(NULL));
    printf("\n\n === 아빠는 대머리 게임 === \n\n");

    int answer;                  // 사용자 입력값
    int treatment = rand() % 4;  // 발모제 정답 (0~3)
    int countShowBottle = 0;     // 이번 게임에 보여줄 병의 갯수
    int prevCountShowBottle = 0; // 앞 게임에 보여준 병 갯수
    //서로 보여주는 병 갯수를 다르게 하여 접답률 향상 (처음에 2개 -> 다음엔 3개)
    int showChance = 3; // 총 보여줄 횟수

    for (int i = 1; i <= showChance; i++)
    {
        int bottle[4] = {0, 0, 0, 0};

        // 만약에 보여준 병의 갯수가 2개인데 다음 병의 갯수가 2개이면 다시 갯수를 산정하여 3이 나올수 있도록 하는 do While문
        do
        {
            countShowBottle = rand() % 2 + 2; // 보여줄 병 갯수(2또는 3)
        } while (countShowBottle == prevCountShowBottle);

        prevCountShowBottle = countShowBottle;

        int isIncluded = 0; // 보여줄 별 중에 발모제가 포함되어 있는지의 여부
        printf("> %d 번째 시도: ", i);

        // 보여줄 병 종류를 선택
        for (int j = 0; j < countShowBottle; j++)
        {
            int randBottle = rand() % 4; // 0 ~ 3

            // 아직 선택되지 않은 병이면, 선택 처리
            if (bottle[randBottle] == 0)
            {
                bottle[randBottle] = 1;

                if (randBottle == treatment)
                {
                    isIncluded = 1;
                }
            }
            // 이미 선택된 병이면, 중복이므로 다시 선택
            else
            {
                j--;
            }
        }

        // 사용자에게 문제 표시
        for (int k = 0; k < 4; k++)
        {
            if (bottle[k] == 1)
                printf("%d번 ", k + 1);
        }
        printf(" 물약을 머리에 바릅니다.\n\n");
        if (isIncluded == 1)
        {
            printf(" >> 성공! 머리가 났습니다.\n\n");
        }
        else
        {
            printf(" >> 실패! 머리가 나지 않았습니다.\n\n");
        }

        printf("\n ... 계속 하려면 아무키나 누르세요.....");
        getchar();
    }

    printf("\n\n발모제는 몇 번일까요?");
    scanf("%d", &answer);
    if (answer == treatment + 1)
    {
        printf("%d번은 발모제 입니다!! 성공", answer);
    }
    else
    {
        printf("%d번은 발모제가 아닙니다!!! 실패!!", answer);
    }

    return 0;
}