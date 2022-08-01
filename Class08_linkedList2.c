/* 
    널널한 박교수의 C프로그래밍 고급편
    22.08.01
    최장혁
    강의 : 연결 리스트 만들기 1
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
    head = current = new_node = NULL;       // 초기화
    item n;

    printf("숫자 데이터를 입력하시오 : ");
    // EOF 입력(ctrl + d)이 들어올 때까지 값을 받아서 노드 객체를 생성하여 연결 리스트에 추가
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