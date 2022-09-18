#include <stdio.h>

int main(void)
{

    /* === # 배열 1 (int형) === */
    // int subway_1 = 30;
    // int subway_2 = 40;
    // int subway_3 = 50;

    // int subway_array[3]; // 길이가 3개 [0],[1],[2]
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for(int i=0; i<3; i++){
    //     printf("지하철 %d 호차에 %d명이 타고있습니다.\n",i,subway_array[i]);
    // }

    /* === # 배열 2(int 형) === */
    // 값 설정 방법
    // int subway_array[3] = {30,40,50};

    // for(int i=0; i<3; i++){
    //     printf("지하철 %d 호차에 %d명이 타고있습니다.\n",i,subway_array[i]);
    // }

    /* === # 배열 3(배열 사이즈 선언) === */
    // 배열의 크기는 항상 상수로 선언해야된다. 하지만 컴파일러 마다 동작 될때가 있다.
    // 배열의 값을 지정해주지 않으면 더미값(컴퓨터 마다 틀리다.)이 출력된다.
    // const int size = 10;
    // int arr[size];

    // for (int i = 0; i <= size; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }

    /* === # 배열 4 (배열에 값을 일정 부분 지정했을 경우) === */
    // 배열의 size를 다 지정하지 않아도 더미값이 출력 되지 않고 빈 값들은 0으로 표시된다.
    // int arr[10] = {1,2};

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }

    /* === # 배열 5 (배열의 크기를 지정하지 않은 경우) === */
    // int arr[] = {1, 2}; // arr[2]와 같음

    /* === # 배열 6(문자) === */
    // char str[6] = "coding"; // 한글자씩 배열의 값으로 입력됨.
    // char str2[7] = "coding"; // 끝 문자의 배열값을 출력하기 위해 크기를 1글자 더 입력.
    // for (int i = 0; i < 6; i++)
    // {
    //    printf("%c\n",str[i]);
    // }
    // printf("%s\n", str); // c,o,d,i,n,g,NULL 끝나는 Null 값이 포함되어야 함. (출력했을 경우 "coding"뒤에 이상한 글자가 포함된다.)
    // printf("%s\n", str2);
    
     /* === # 배열 7 (문자 배열의 크기를 지정하지 않은 경우) === */
    // char str[] = "coding";
    // printf("%s\n",str);
    // printf("%lu\n", sizeof(str)); // coding의 글자수는 6자리지만 사이즈는 7로 출력된다. %d 로 쓰지않고 배열의 길이를 표시하는 %lu 로 사용해 출력해야됨. 
    //for문 출력
    // for(int i=0; i < sizeof(str); i++){
    //     printf("%c\n",str[i]);
    // }

    /* === # 배열 8 (문자 배열값이 한글일 경우) === */
    // char kor[] = "한글";
    // printf("%s\n",kor); 
    // printf("%lu\n",sizeof(kor)); // 영어 1글자 : 1byte, 한글 1글자 : 2~3byte, char 크기 : 1byte기준

    /* === # 배열 9 (문자 배열값을 지정하고 뒤에 NULL값의 지정 차이) === */
    // char c_array[7] = {'c','o','d','i','n','g','\0'};
    // char c_array2[6] = {'c','o','d','i','n','g'};
    // printf("%s\n",c_array);
    // printf("%s\n",c_array2);

    /* === # 배열 10 (문자의 크기보다 적은 문자를 지정했을경우) === */
    // char c_array[10] = {'c','o','d','i','n','g'};
    // printf("%s\n",c_array);
    // for(int i = 0; i < sizeof(c_array); i++){ // 크기안에 지정되지 않은 값들은 빈값으로 표시(숫자형은 0, 문자형은 빈값)
    //     printf("%c\n",c_array[i]);
    // }

    /* === # 배열 11 (문자열 ASCII 코드 출력) === */
    // char c_array[10] = {'c','o','d','i','n','g'};
    // for(int i = 0; i < sizeof(c_array); i++){
    //     printf("%d\n",c_array[i]);
    // }

    /* === # 배열 12 (ASCII 코드 전체 출력) === */
    // for(int i = 0; i < 128; i++){
    //     printf("아스키코드 정수 %d : %c\n", i, i);
    // }

    return 0;
}