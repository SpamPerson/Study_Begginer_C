#include <stdio.h>

/*
    프로젝트 내용
    경찰관이 범죄자의 정보를 입수 (조사 작성)
    이름, 나이, 몸무게, 키, 범죄명
*/

int main(void){
    char name[256];
    int age;
    double weight;
    float height;
    char crime[256];

    printf("이름이 뭐예요? ");
    scanf("%s", name, sizeof(name));

    printf("나이가 어떻게 되세요? ");
    scanf("%d", &age);

    printf("몸무게가 어떻게 되세요? ");
    scanf("%lf", &weight);

    printf("키가 어떻게 되세요? ");
    scanf("%f", &height);

    printf("죄명은 어떻게 되나요? ");
    scanf("%s", crime, sizeof(crime));

    printf("========범죄자 정보=========\n");
    printf(" 이름   : %s\n", name);
    printf(" 나이   : %d\n", age);
    printf(" 몸무게  : %.1lf\n", weight);
    printf(" 키     : %.1f\n", height);
    printf(" 죄명   : %s\n", crime);
    
    return 0;
}