/* 
    �γ��� �ڱ����� C���α׷��� �����
    22.07.31
    ������
    ���� : ������
*/

// ������ ���� : ��ǻ�� �޸𸮻��� �ּҸ� �����ϴ� �ڷ���

#include <stdio.h> 

int main() {
    int *myPointer;
    int myVar = 10;

    myPointer = &myVar;     // myPointer��� ������ ������ myVar��� ������'�ּҰ�'�� ������
    printf("*myPointer = %d\n", *myPointer);
    printf("myPointer = %p\n", myPointer);

    *myPointer = 20;
    printf("myPoint = 20 ���� ����\n");
    printf("myVar = %d, myPointer = %d\n", myVar, *myPointer);

    return 0;
}