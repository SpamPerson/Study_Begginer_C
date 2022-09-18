#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
/* # 물고기 살리기
    물고기기가 6마리 가 있다.
    물고기 어항의 일정 양의 물이 줄어들고, (레벨에 따라 물이 줄어드는 양이 점점 많아 진다.)
    어항의 물이 완전 없어 지면 물고기는 죽는다.
    어항의 물을 채워 줘서 물고기가 안죽게 하는 게임
*/
int level;        // 레벨
int arrayFish[6]; // 어항의 수
int *cursor;
struct timeval start;
void initDate();
void printfFishes();
void decreaseWater(long elapasedTime);
int checkFishAlive();

int main(void)
{
    long startTime = 0;        // 게임 시작 시간
    long totalElapsedTime = 0; // 총 경과 시간
    long prevElapasedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

    int num; // 몇 번 어항에 물을 줄 것인지 사용자 입력
    initDate();
    cursor = arrayFish;
    startTime = clock(); // 현재 시간을 millisecond (1000분의 1초) 단위로 반환
    while (1)
    {
        printfFishes();
        printf("몇 번 어항에 물을 주시겠어요? ");
        scanf("%d", &num);
        //입력값 체크1
        if (num < 1 || num > 6)
        {
            printf("\n입력값이 잘못되었습니다.\n");
            continue;
        }
        totalElapsedTime = (clock() - startTime)/CLOCKS_PER_SEC; // mac 에서는 clock()함수가 제대로 동작 안함.
        printf("총 경과 시간 : %ld 초\n", totalElapsedTime); // %ld -> long

        //직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
        prevElapasedTime = totalElapsedTime - prevElapasedTime;
        printf("최근 경과 시간 : %ld 초\n", prevElapasedTime);

        // 어항의 물을 갑소(증발)
        decreaseWater(prevElapasedTime);

        // 사용자가 입력한 어항에 물을 준다.
        // 1. 어항의 물이 0 이면? 물을 주지 않는다.
        if (cursor[num - 1] <= 0)
        {
            printf("%d번 물고기는 이미 죽었습니다... 물을 주지 않습니다..\n", num);
        }
        // 2. 어항의 물이 0이 아닌경우 물을준다. 100을 넘지 않는지 체크
        else if (cursor[num - 1] + 1 <= 100)
        {
            //물을 준다.
            printf("%d 번 어항에 물을 줍니다.\n\n", num);
            cursor[num - 1] += 1;
        }
    
        // 레벨업을 할건지 확인 (레벨은 20초마다 한번씩 수행)
        if (totalElapsedTime / 20 > level - 1)
        {
            level++;
            printf("====레벨업! %d => %d\n\n", level - 1, level);

            //최종 레벨 5
            if (level == 5)
            {
                printf("\n\n 최종 레벨에 도달하였습니다. 게임을 종료합니다!");
                exit(0); //프로그램 종료
            }

            // 모든 물고기가 죽었는지 확인
            if (checkFishAlive() == 0)
            {
                printf("모든 물고기 사망\n");
                exit(0);
            }
            else
            {
                printf("물고기가 아직 살아 있어요\n");
            }
            prevElapasedTime = totalElapsedTime;
        }
    }

    return 0;
}

void initDate()
{
    level = 1; // 게임 레벨 ( 1 ~ 5 )
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] = 100; // 어항의 물 높이 (0 ~ 100)
    }
}

void printfFishes()
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6); // %3d 는 총 3칸을 차지 하겠다는 의미
    for (int i = 0; i < 6; i++)
    {
        printf(" %4d ", arrayFish[i]);
    }
    printf("\n\n");
}

void decreaseWater(long elapasedTime)
{
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] -= ((level) * 3 * (int)elapasedTime); // 2 -> 난이도 조절을 위한 값
        
        if (arrayFish[i] < 0)
        {
            arrayFish[i] = 0;
        }
    }
}

int checkFishAlive()
{
    for (int i = 0; i < 6; i++)
    {
        if (arrayFish[i] > 0)
        {
            return 1; // 참
        }
    }

    return 0;
}