/* 
    널널한 박교수의 C프로그래밍 고급편
    22.07.31
    최장혁
    강의 : 동적 메모리 할당
*/

// 프로그램의 실행 도중에 메모리를 할당받는 것.
// 메모리 낭비가 적어 효율적임.
// malloc() 함수를 사용. memory alloc.

#include <stdio.h> 
#include <stdlib.h>

int main() {
    int *ip;    // 동적으로 할당받은 기억공간을 참조하는 포인터 변수
    ip = (int*)malloc(sizeof(int)); // 동적으로 기억공간을 할당 - int 자료형 크기만큼.

    if ( ip == NULL ) {     // 반환값이 NULL인지 검사
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    *ip = 20;   // 동적으로 할당받은 기억공간을 사용. 20 값을 할당

    printf("포인터 변수의 값 : %d\n", *ip);

    free(ip);   // 동적으로 할당받은 기억공간을 해제


    /////

    int *score;
    int i;

    // 100 * sizeof(int) 바이트 만큼의 메모리를 동적으로 할당
    score = (int*)malloc(100 * sizeof(int));
    if(score == NULL) {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }
    // 동적으로 할당된 메모리에 값을 할당하는 for 문
    for(i = 0; i < 100; i++) {
        // score[i] = i;
        *(score + i) = i;
    }

    printf("score 동적 할당 완료. \n");
    
    free(score);
    
    return 0;
}