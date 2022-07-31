/* 
    널널한 박교수의 C프로그래밍 고급편
    22.07.31
    최장혁
    강의 : 포인터와 배열
*/

// C언어에서 배열은 포인터 편수를 이용하여 접근 가능함.
// 포인터는 배열처럼 사용 가능하며, 인덱스 표기법을 포인터에 사용할 수 있다.
// int a[10]에서 a는 배열 첫번째 객체 a[0]을 가리키는 포인터 변수와 같다.
// 즉, a[0]와 *(a + 0), a[1]과 *(a + 1)은 동일한 표현식이다.

#include <stdio.h> 
#include <stdlib.h>

int main() {
    int a[5] = {20, 30, 40};    // 빈 공간은 자동으로 0으로 초기화

    // a와 &a[0] 값을 확인하는 문장
    printf("a = %p, &a[0] = %p \n", a, &a[0]);

    // a[0], a[1], a[2], a[3], a[4] 와 *(a + 0), *(a + 1), *(a + 2), *(a + 3), *(a + 4)
    // 값을 출력함
    for(int i = 0; i < 5; i++) {
        printf("a[%d] = %d, *(a + %d) = %d \n", i, a[i], i, *(a + i));
    } 


    ////

    // 동적 할당 메모리를 배열로 사용
    // int a[5]와 같이 5개의 정수형 변수를 저장할 메모리 공간이 필요한 경우,
    // (int*)malloc(5 * sizeof(int))로 동적인 메모리를 할당할 수 있다.

    // 생성하고 싶은 배열의 크기 입력
    int input;
    scanf("%d", &input);
    int *malloc_array;
    malloc_array = (int*)malloc(input * sizeof(int));
    if( malloc_array == NULL ) {
        printf("메모리 할당 에러 \n");
        exit(1);
    }


    // 동적 할당으로 생성한 배열에 값을 채워넣는 for문
    for(int i = 0; i < input; i++) {
        // *(malloc_array + i) = i;
        malloc_array[i] = i;  
    }

    // 배열의 값을 확인하는 for문
    for(int i = 0; i < input; i++)
        printf("array[%d] = %d\n", i, malloc_array[i]);
    printf("\n");

    free(malloc_array);

    return 0;
}