#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    # 같은 동물 맞추기
    10마리의 서로 다른 동물 (각 카드 2장씩)이 있고
    사용자로 부터 2개의 입력값을 받아서 같은 동물을 찾으면 카드를 뒤집고
    모든 동물의 쌍을 찾으면 게임종료
    (총 실패 횟수 알려주기)
*/
int arrayAnimal[4][5]; // 4*5 카드맵 (총 20장)
int checkAnimal[4][5]; // 뒤집혔는지 확인
char *strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
void printAnimals();
int getEmptyPosition();
int convert_position_x(int x);
int convert_position_y(int y);
void printQuestion();
void printAnimal();
int foundAllAnimals();

int main(void)
{
    srand(time(NULL));

    initAnimalArray();
    initAnimalName();
    shuffleAnimal();

    int failCount = 0; // 실패 횟수

    while (1)
    {
        int selected_first = 0;
        int selected_second = 0;

        printAnimals();  // 동물 위치 출력
        printQuestion(); // 문제 출력 (카드 지도)
        printf("뒤집을 카드를 2개 고르세요 : ");
        scanf("%d,%d", &selected_first, &selected_second);

        if (selected_first == selected_second)
        { // 같은 카드 입력시 무효처리
            continue;
        }

        // 좌표에 해당하는 카드를 뒤집어 보고 같은지 안같은지 확인
        int firstSelect_x = convert_position_x(selected_first);
        int firstSelect_y = convert_position_y(selected_first);

        int secondSelect_x = convert_position_x(selected_second);
        int secondSelect_y = convert_position_y(selected_second);

        if (checkAnimal[firstSelect_x][firstSelect_y] == 0 && checkAnimal[secondSelect_x][secondSelect_y] == 0 
        && arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y])
        {
            printf("\n\n빙고! : %s 발견 \n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }
        else
        // 다른 동물인 경우
        {
            printf("\n\n틀렸거나 이미 뒤집힌 카드입니다.)\n");
            printf("%d : %s\n", selected_first, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d : %s\n", selected_second, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n\n");

            failCount++;
        }

        if (foundAllAnimals() == 1)
        {
            printf("\n\n ==== 모든 동물을 다 찾았습니다. \n");
            printf("지금까지 총 %d 번 실패했습니다\n.",failCount);
            break;
        }
        
    }

    return 0;
}

void initAnimalArray()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arrayAnimal[i][j] = -1;
        }
    }
}

void initAnimalName()
{
    strAnimal[0] = "Monkey";
    strAnimal[1] = "Snak";
    strAnimal[2] = "Dog";
    strAnimal[3] = "Cat";
    strAnimal[4] = "Lion";

    strAnimal[5] = "Pig";
    strAnimal[6] = "Rabbit";
    strAnimal[7] = "Chiken";
    strAnimal[8] = "Bird";
    strAnimal[9] = "Cow";
}

void shuffleAnimal()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int position = getEmptyPosition();
            int x = convert_position_x(position);
            int y = convert_position_y(position);

            arrayAnimal[x][y] = i;
        }
    }
}

int getEmptyPosition()
{
    while (1)
    {
        int randomPosition = rand() % 20; // 0 ~ 19 사이 숫자 변환
        int x = convert_position_x(randomPosition);
        int y = convert_position_y(randomPosition);

        if (arrayAnimal[x][y] == -1)
        {
            return randomPosition;
        }
    }
    return 0;
}

int convert_position_x(int x)
{
    return x / 5;
}

int convert_position_y(int y)
{
    return y % 5;
}

void printAnimals() // 동물 위치 출력(정답 확인)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%8s", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n==================\n\n");
}

void printQuestion() // 문제 출력
{
    printf("\n\n(문제)\n");
    int seq = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // 카드를 뒤집어서 정답을 맞혔으면 '동물 이름'
            if (checkAnimal[i][j] != 0)
            {
                printf("%8s", strAnimal[arrayAnimal[i][j]]);
            }
            else
            {
                // 아직 뒤집지 못했으면 뒷면 -> 위치를 나타내는 숫자
                printf("%8d", seq);
            }
            seq++;
        }
        printf("\n");
    }
}

int foundAllAnimals()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (checkAnimal[i][j] == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}