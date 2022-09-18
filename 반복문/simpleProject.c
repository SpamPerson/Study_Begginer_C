#include <stdio.h>

/*
    피라미드를 쌓아라 프로젝트
    출력 ex)
     *
    ***
   *****
  *******
*/

int main(void){
    int floor;
    printf("몇 층을 쌓겠느냐?");
    scanf("%d",&floor);
    
    for(int i=1; i<=floor; i++){
        for(int j=i; j<=floor-1; j++){
            printf(" ");
        }
        for(int k=1; k<=i*2-1; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}