#include <stdio.h>

// 선언
// void functionName(int num);
// void function_witout_return();
// int function_with_return();

float function_method(char method, int num1, int num2);

int main(void)
{

    /* === 함수 === */

    // int num = 2;
    // functionName(num);
    // 반환값이 없는 함수
    // function_witout_return();
    // 반환값이 있는 함수
    // int returnNum = function_with_return();
    // printf("%d",returnNum);

    /* === 계산기 === */
    int num1, num2;
    char method;

    printf("연산할 숫자를 두개 입력하세요 : \n");
    scanf("%d,%d", &num1, &num2);
    // %기호를 출력하고 싶으면 %를 두개 쓰면 된다.
    printf("연산 방식을 입력하세요(+, -, /, *, %%) : \n");
    scanf(" %c", &method);

    float result = function_method(method, num1, num2);
    printf("연산 값 : %.2f",result);
    
    return 0;
}

/* === 정의 부분 시작 === */
// void functionName(int num)
// {
//     printf("num 은 %d 입니다.\n", num); // num = 2
//     num = num + 3;
//     printf("num 은 %d 입니다.\n", num); // num = 5
//     num -= 1; // num = num - 1;
//     printf("num 은 %d 입니다.\n", num); // num = 4
//     num += 2; // num = num + 2;
//     printf("num 은 %d 입니다.\n", num); // num = 6
//     num *= 3; // num = num * 3;
//     printf("num 은 %d 입니다.\n", num); // num = 18
//     num /= num; // num = num / num;
//     printf("num 은 %d 입니다.\n", num); // num = 1
// }

/*
    반환형 함수이름(전달값)
=> int 함수이름(num){
    return int형
}
=> void 함수이름(num){
    반환값이 없는 함수
}
*/

// void function_witout_return() {
//     printf("반환값이 없는 함수 입니다.\n");
// }

// int function_with_return(){
//     printf("반환값이 있는 함수 입니다.\n");
//     return 10;
// }

float function_method(char method, int num1, int num2)
{
    printf("입력한 연산 방식은 : %c\n",method);
    float result;
    switch (method)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '%':
        result = num1 % num2;
        break;

    default:
        printf("잘못된 연산방식 입니다.");
        break;
    }

    return result;
}

/* === 정의 부분 끝 === */