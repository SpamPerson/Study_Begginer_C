#include <stdio.h>

int main(void){
    /* # 정수형 변수 예제 */
    //int age = 12;
    // %d -> 정수형 값을 출력할때 사용
    // \n -> 줄바꿈
    /*printf("%d\n", age);
    age = 13;
    printf("%d\n", age);
    return 0;*/

    // # 다중범위 주석은 /*다중범위*/ 형식으로 한다.

    /* === 실수형 예제 === */ 
    /* # 실수형 변수 예제 1 (float)*/
    //float f = 46.5;
    // %f -> 실수형 값을 출력할때 사용
    //printf("%f\n", f);
    // 출력값 : 46.50000
    // %.2f -> 실수형의 2자리 소수까지 출력
    //printf("%.2f\n", f); 
    // 출력값 : 46.50

    /* # 실수형 변수 예제 2 (double) */
    //double d = 4.428;
    // 원래 double 형은 %lf를 사용해야 하지만, printf 에서는 %f로 출력이 가능하다. scanf 였을경우 %lf를 사용한다.  
    //printf("%f\n",d);
    // %lf -> double형 출력 할때 사용 
    //printf("%lf\n",d);
    // %.2lf -> double형의 2자리 소수까지 출력
    //printf("%.2lf\n",d);

    /* === 상수형 예제 === */
    // 상수는 고정값을 의미한다.
    // const int YEAR = 2000;
    // 상수는 변경이 불가능하다.
    // YEAR = 20001; (x) 
    // printf("태여난 연도 : %d\n", YEAR);
    
    /* === 정수 연산 === */
    // int add = 3 + 7;
    // printf("3 + 7= %d\n", add);
    // printf("%d + %d = %d\n", 7, 3, 3+7);
    // printf("%d x %d = %d\n", add, add-1, add*(add-1));
    // printf("%d - %d = %d\n", add, add-2, add-(add-2));
    // printf("%d / %d = %d\n", add, add, add/add);

    /* === 실수 연산 === */
    // float f = 2.53 + 3.11;
    // double d = 2.12 + 3.12;

    // printf("%f + %f = %f\n", f, f, f+f);
    // printf("%f + %f = %.2f\n", f, f, f+f);
    // printf("%.1f + %.2f = %.1f\n", f, f, f+f);
    // printf("%.2lf + %.2lf = %.3lf", f, f, f+f);

    /* === scanf === */
    // int input;
    // printf("값을 입력하세요 : ");
    // &input -> input으로 값을 받겠다.
    // scanf("%d", &input);
    // printf("%d\n",input);
    // int one, two, three;
    // printf("3개의 정수를 입력하세요 : ");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫번째 값 : %d\n", one);
    // printf("첫번째 값 : %d\n", two);
    // printf("첫번째 값 : %d\n", three);

    // 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    /* 문자 출력 예제 */
    // char c = 'A';
    // %c -> 문자열을 출력, 입력할때 사용
    // printf("%c\n", c);

    /* 문자 입력 예제 */
    // char c;
    // printf("문자를 입력해세요 : ");
    // scanf("%c",&c);
    // printf("입력 받은 문자는 : %c\n",c);

    /* 문자열 출력 입력 예제 */
    // char str[256];
    // printf("문자열을 입력하세요 : ");
    // %s -> 문자열을 출력, 입력할때 사용
    // 문자열을 입력 받을때는 &를 사용하지 않는다.
    // scanf("%s", str, sizeof(str));
    // printf("입력받은 문자열 : %s\n",str);

    return 0;
}
