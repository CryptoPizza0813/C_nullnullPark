/* 
    널널한 박교수의 C프로그래밍 고급편
    22.08.01
    최장혁
    강의 : 연결 리스트 개요
*/

// 구조체 변수를 포인터를 통해 접근
typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;    
} ListNode;

#include <stdio.h> 
#include <stdlib.h>

int main() 
{
    ListNode node = {100, NULL};
    ListNode *list = &node;

    printf("node.data = %d\n", node.data);
    printf("(*list).data = %d\n", (*list).data);
    printf("list->data = %d\n", list->data);


    /////

    ListNode *p1;
    ListNode *p2;
    p1 = (ListNode *)malloc(sizeof(ListNode));
    p1->data = 20;

    p2 = (ListNode *)malloc(sizeof(ListNode));
    p2->data = 30;
    p2->link = NULL;
    p1->link = p2;

    printf("p1->data = %d\n", p1->data);
    printf("p1->link->data = %d\n", p1->link->data);
    printf("p2->data = %d\n", p2->data);

    free(p1);
    free(p2);

    return 0;
}