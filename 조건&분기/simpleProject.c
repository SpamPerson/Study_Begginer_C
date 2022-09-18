#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    Up and Down
*/

int main(void) {
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
    printf("뽑힌 숫자는 : %d\n",num);

    int answer; // 정답
    int chance = 5; // 기회

    while (chance > 0) // 1 : 참 , 0: 거짓
    {
        printf("남은 기회는 : %d\n", chance--);
        printf("숫자를 맞춰 보세요 (1 ~ 100) : \n");
        scanf("%d",&answer);

        if(answer == num){
            printf("숫자 맞추기 성공!!\n");
            break;
        } else if(answer > num) {
            printf("Down\n");
        } else if(answer < num) {
            printf("Up\n");
        } else {
            printf("Erro");
        }
    }
    
    if(chance == 0){
        printf("탈락!!!");
    }

    return 0;
}