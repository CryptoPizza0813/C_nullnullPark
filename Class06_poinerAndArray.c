/* 
    �γ��� �ڱ����� C���α׷��� �����
    22.07.31
    ������
    ���� : �����Ϳ� �迭
*/

// C���� �迭�� ������ ����� �̿��Ͽ� ���� ������.
// �����ʹ� �迭ó�� ��� �����ϸ�, �ε��� ǥ����� �����Ϳ� ����� �� �ִ�.
// int a[10]���� a�� �迭 ù��° ��ü a[0]�� ����Ű�� ������ ������ ����.
// ��, a[0]�� *(a + 0), a[1]�� *(a + 1)�� ������ ǥ�����̴�.

#include <stdio.h> 
#include <stdlib.h>

int main() {
    int a[5] = {20, 30, 40};    // �� ������ �ڵ����� 0���� �ʱ�ȭ

    // a�� &a[0] ���� Ȯ���ϴ� ����
    printf("a = %p, &a[0] = %p \n", a, &a[0]);

    // a[0], a[1], a[2], a[3], a[4] �� *(a + 0), *(a + 1), *(a + 2), *(a + 3), *(a + 4)
    // ���� �����
    for(int i = 0; i < 5; i++) {
        printf("a[%d] = %d, *(a + %d) = %d \n", i, a[i], i, *(a + i));
    } 


    ////

    // ���� �Ҵ� �޸𸮸� �迭�� ���
    // int a[5]�� ���� 5���� ������ ������ ������ �޸� ������ �ʿ��� ���,
    // (int*)malloc(5 * sizeof(int))�� ������ �޸𸮸� �Ҵ��� �� �ִ�.

    // �����ϰ� ���� �迭�� ũ�� �Է�
    int input;
    scanf("%d", &input);
    int *malloc_array;
    malloc_array = (int*)malloc(input * sizeof(int));
    if( malloc_array == NULL ) {
        printf("�޸� �Ҵ� ���� \n");
        exit(1);
    }


    // ���� �Ҵ����� ������ �迭�� ���� ä���ִ� for��
    for(int i = 0; i < input; i++) {
        // *(malloc_array + i) = i;
        malloc_array[i] = i;  
    }

    // �迭�� ���� Ȯ���ϴ� for��
    for(int i = 0; i < input; i++)
        printf("array[%d] = %d\n", i, malloc_array[i]);
    printf("\n");

    free(malloc_array);

    return 0;
}