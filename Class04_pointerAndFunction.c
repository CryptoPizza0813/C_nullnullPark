/* 
    �γ��� �ڱ����� C���α׷��� �����
    22.07.31
    ������
    ���� : �����Ϳ� �Լ�
*/

// ���ȭ �۾��� ���ؼ� ���� �ۼ��� �Լ��� ���ս�Ű�� ������� ū ���α׷��� ������ �� �ִ�.
// ���� ������ ���� ��������, ���������� ��������.
// �Լ� ����, �Լ� ����, ȣ���� ���·� �̷����.

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