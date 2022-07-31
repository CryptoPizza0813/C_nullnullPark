/* 
    �γ��� �ڱ����� C���α׷��� �����
    22.07.31
    ������
    ���� : typedef
*/

// ���ο� �ڷ����� �����ϴ� ����
typedef unsigned char UCHAR;
typedef unsigned int UINT;



// ����ü ���� ����� ����
// ��� 1. ����ü ���� �� typedef ����
// struct Person {
//     char name[100];     
//     int age;          
//     int height;        
//     float weight;     
// };
// typedef struct Person Person;

// ��� 2. (�Ϲ�����)
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
    printf("���ο� ���� ��ǥ�� (%d, %d)�Դϴ�.\n", result.x, result.y);

    return 0;
}

POINT translate(POINT p, POINT delta)
{
    POINT new_p;

    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;

    return new_p;
}

