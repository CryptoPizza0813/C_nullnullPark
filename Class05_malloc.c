/* 
    �γ��� �ڱ����� C���α׷��� �����
    22.07.31
    ������
    ���� : ���� �޸� �Ҵ�
*/

// ���α׷��� ���� ���߿� �޸𸮸� �Ҵ�޴� ��.
// �޸� ���� ���� ȿ������.
// malloc() �Լ��� ���. memory alloc.

#include <stdio.h> 
#include <stdlib.h>

int main() {
    int *ip;    // �������� �Ҵ���� �������� �����ϴ� ������ ����
    ip = (int*)malloc(sizeof(int)); // �������� �������� �Ҵ� - int �ڷ��� ũ�⸸ŭ.

    if ( ip == NULL ) {     // ��ȯ���� NULL���� �˻�
        printf("���� �޸� �Ҵ� ����\n");
        exit(1);
    }

    *ip = 20;   // �������� �Ҵ���� �������� ���. 20 ���� �Ҵ�

    printf("������ ������ �� : %d\n", *ip);

    free(ip);   // �������� �Ҵ���� �������� ����


    /////

    int *score;
    int i;

    // 100 * sizeof(int) ����Ʈ ��ŭ�� �޸𸮸� �������� �Ҵ�
    score = (int*)malloc(100 * sizeof(int));
    if(score == NULL) {
        printf("���� �޸� �Ҵ� ����\n");
        exit(1);
    }
    // �������� �Ҵ�� �޸𸮿� ���� �Ҵ��ϴ� for ��
    for(i = 0; i < 100; i++) {
        // score[i] = i;
        *(score + i) = i;
    }

    printf("score ���� �Ҵ� �Ϸ�. \n");
    
    free(score);
    
    return 0;
}