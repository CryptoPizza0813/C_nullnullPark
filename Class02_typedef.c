/* 
    널널한 박교수의 C프로그래밍 고급편
    22.07.31
    최장혁
    강의 : typedef
*/

// 새로운 자료형을 정의하는 역할
typedef unsigned char UCHAR;
typedef unsigned int UINT;



// 구조체 변수 선언시 편리함
// 방법 1. 구조체 선언 후 typedef 선언
// struct Person {
//     char name[100];     
//     int age;          
//     int height;        
//     float weight;     
// };
// typedef struct Person Person;

// 방법 2. (일반적임)
typedef struct Person {
    char name[100];  
    int age;           
    int height;      
    float weight;     
} Person;

typedef struct Point {    
    int x;
    int y;
} POINT;

#include <stdio.h> 

POINT translate(POINT p, POINT delta);

int main() 
{
    // struct Person personA, personB;
    Person personA, personB;
    POINT p = {2, 3};
    POINT delta = {10, 10};
    POINT result;

    result = translate(p, delta);
    printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);

    return 0;
}

POINT translate(POINT p, POINT delta)
{
    POINT new_p;

    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;

    return new_p;
}

