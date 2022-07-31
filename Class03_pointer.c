/* 
    널널한 박교수의 C프로그래밍 고급편
    22.07.31
    최장혁
    강의 : 포인터
*/

// 포인터 변수 : 컴퓨터 메모리상의 주소를 저장하는 자료형

#include <stdio.h> 

int main() {
    int *myPointer;
    int myVar = 10;

    myPointer = &myVar;     // myPointer라는 포인터 변수는 myVar라는 변수의'주소값'을 가진다
    printf("*myPointer = %d\n", *myPointer);
    printf("myPointer = %p\n", myPointer);

    *myPointer = 20;
    printf("myPoint = 20 으로 변경\n");
    printf("myVar = %d, myPointer = %d\n", myVar, *myPointer);

    return 0;
}