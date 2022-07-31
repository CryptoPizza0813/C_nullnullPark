/* 
    널널한 박교수의 C프로그래밍 고급편
    22.07.31
    최장혁
    강의 : 포인터와 함수
*/

// 모듈화 작업을 통해서 개별 작성된 함수를 통합시키는 방식으로 큰 프로그램을 개발할 수 있다.
// 개발 과정이 보다 쉬워지며, 유지보수도 쉬워진다.
// 함수 선언, 함수 구현, 호출의 형태로 이루어짐.

#include <stdio.h> 

void changeNum(int *ptr);

int main() 
{
    int num = 10;
    printf("num = %d\n", num);
    changeNum(&num);
    printf("Changed num = %d\n", num);

    return 0;
}

void changeNum(int *ptr) 
{
    *ptr = 20;
}