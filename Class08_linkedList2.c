/* 
    �γ��� �ڱ����� C���α׷��� �����
    22.08.01
    ������
    ���� : ���� ����Ʈ ����� 1
*/

// typedef char item;
typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;    
} ListNode;

#include <stdio.h>
#include <stdlib.h>

int main() {
    ListNode *head, *current, *new_node;
    head = current = new_node = NULL;       // �ʱ�ȭ
    item n;

    printf("���� �����͸� �Է��Ͻÿ� : ");
    // EOF �Է�(ctrl + d)�� ���� ������ ���� �޾Ƽ� ��� ��ü�� �����Ͽ� ���� ����Ʈ�� �߰�
    while ( scanf("%d\n", &n) != EOF) {
        new_node = (ListNode *)malloc(sizeof(ListNode));
        new_node->data = n;
        new_node->link = NULL;

        if(head == NULL) {
            head = new_node;
            current = new_node;
        }
        else {
            current->link = new_node;
            current = new_node;
        }
    }   


    system("pause");
    return 0;
}