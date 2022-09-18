#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArrary(int *ptr);

int main(void)
{
    // #포인터

    // [spamPerson] : 101호 -> 메모리 공간의 주소
    // [spamTiger] : 201호
    // [spamMonkey] : 301호
    // 각 문 앞에 '암호' 가 걸려 있음

    // 암호
    // int spamPerson = 1;
    // int spamTiger = 2;
    // int spamMonkey = 3;

    // printf("spamPerson 의 주소: %d, 암호 : %d\n", &spamPerson , spamPerson);
    // printf("spamTiger 의 주소: %d, 암호 : %d\n", &spamTiger , spamTiger);
    // printf("spamMonkey 의 주소: %d, 암호 : %d\n", &spamMonkey , spamMonkey);

    // 미션맨!

    // 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
    // int * missionMan; // 포인터 변수

    // missionMan = &spamPerson;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);
    // missionMan = &spamTiger;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);
    // missionMan = &spamMonkey;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    // 두 번째 미션 : 각 암호에 3을 곱해라
    // missionMan = &spamPerson;
    // *missionMan = *missionMan * 3;
    // printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    // missionMan = &spamTiger;
    // *missionMan = *missionMan * 3;
    // printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    // missionMan = &spamMonkey;
    // *missionMan = *missionMan * 3;
    // printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    // 스파이
    // 미션맨이 바꾼 암호에서 2를 빼라!
    // int * spy;
    // printf("\n\n.... spy가 미션 수행하는 중....\n\n");
    // spy = &spamPerson;
    // *spy = *spy - 2;
    // printf("스파이가 방문하는 곳 주소: %d, 암호 : %d\n", spy, *spy);

    //  spy = &spamTiger;
    // *spy = *spy - 2;
    // printf("스파이가 방문하는 곳 주소: %d, 암호 : %d\n", spy, *spy);

    //  spy = &spamMonkey;
    // *spy = *spy - 2;
    // printf("스파이가 방문하는 곳 주소: %d, 암호 : %d\n", spy, *spy);

    // printf("\n\n spamPerson, spamTiger, spamMonkey는 집에 오고서는 바뀐 암호를 보고 깜놀...\n\n");

    // printf("spamPerson 의 주소: %d, 암호 : %d\n", &spamPerson , spamPerson);
    // printf("spamTiger 의 주소: %d, 암호 : %d\n", &spamTiger , spamTiger);
    // printf("spamMonkey 의 주소: %d, 암호 : %d\n\n", &spamMonkey , spamMonkey);

    // 참고... missionMan이 사는 곳의 주소는 ... &missionMan 으로 확인
    // printf("missionMan의 주소 : %d\n", &missionMan);
    // printf("spy의 주소 : %d\n", &spy);

    // # 배열 포인터
    // int arr[3] = {5, 10, 15};
    // int *ptr = arr;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
    // }

    // ptr[0] = 100;
    // ptr[1] = 200;
    // ptr[2] = 300;
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    //     printf("equal\n");
    //     printf("배열 arr[%d]의 값 : %d\n\n", i, *(arr + i));
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
    //     printf("equal\n");
    //     printf("배열 arr[%d]의 값 : %d\n\n", i, *(ptr + i));
    // }
    // *(arr + i) == arr[i] 똑같은 표현

    // arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
    // printf("arr 자체의 값 : %d\n", arr);
    // printf("arr[0] 의 주소 : %d\n", &arr[0]);

    // printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr); // equal *(arr + 0)
    // printf("arr[0]의 실제 값 : %d\n", *&arr[0]);

    // *& 는 아무것도 없는 것과 같다. &는 주소이며, * 는 주소의 값이기 때문에.
    // *& 는 서로 상쇄된다.
    // printf("arr[0]의 실제 값 : %d\n", *&*&*&*&*&*&arr[0]);
    // printf("arr[0]의 실제 값 : %d\n", arr[0]);

    // # Swap
    // int a = 10;
    // int b = 20;
    // printf("a 의 주소 : %d\n",&a);
    // printf("b 의 주소 : %d\n",&b);
    // a 와 b 의 값을 바꾼다.
    // printf("Swap 함수 전 => a: %d , b: %d\n", a, b);
    // swap(a, b);
    // printf("Swap 함수 후 => a: %d , b: %d\n", a, b);

    // 값에 의한 복사 (Call by Value) -> 값만 복사한다는 의미

    // 주소값을 넘기면?
    // printf("(주소값 전달)Swap_addr 함수 전 => a: %d , b: %d\n", a, b);
    // swap_addr(&a, &b);
    // printf("(주소값 전달)Swap_addr 함수 후 => a: %d , b: %d\n", a, b);

    // # 포인터로 배열 값 변경
    int arr2[3] = {10, 20, 30};
    // changeArrary(arr2);
    changeArrary(&arr2[0]);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr2[i]);
    }

    //scanf 에서 &num 과 같이 & 를 사용하는 이유    

    return 0;
}

void swap(int a, int b)
{
    printf("Swap함수 안에서 a 의 주소 : %d\n", &a);
    printf("Swap함수 안에서 b 의 주소 : %d\n", &b);

    int temp = a;
    a = b;
    b = temp;
    printf("Swap 함수 안에서 => a: %d , b: %d\n", a, b);
}

void swap_addr(int *a, int *b)
{
    printf("Swap함수 안에서 a 의 주소 : %d\n", &a);
    printf("Swap함수 안에서 b 의 주소 : %d\n", &b);

    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Swap 함수 안에서 => a: %d , b: %d\n", *a, *b);
}

void changeArrary(int *ptr)
{
    ptr[2] = 50;
}
