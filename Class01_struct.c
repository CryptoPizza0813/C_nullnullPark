/* 
    �γ��� �ڱ����� C���α׷��� �����
    22.07.31
    ������
    ���� : ����ü
*/

// ����ü: �⺻ �ڷ��������� ǥ������ ���ϴ� ������ ��
//     ex) ����� �̸�, ����, Ű, ������ ���� ��

#include <stdio.h>
#include <string.h>

// ����ü ����
// Person�� struct �±� (�ĺ��ϱ� ���� �̸�)
struct Person {
    char name[100];     // ����ü ���-�̸�
    int age;            // ����ü ���-����
    int height;         // ����ü ���-Ű
    float weight;       // ����ü ���-������ 
};

struct Point2D {        // Point2D ����ü ����
    int x;
    int y;
};

// ����ü�� �迭 ���굵 ������
struct point {
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};




int main() {
    // ����ü ���� personA, personB ����
    struct Person personA, personB;

    strcpy(personA.name, "Choi JangHyuck");
    personA.age = 27;
    personA.height = 177;
    personA.weight = 67.9;

    strcpy(personB.name, "EUL");
    personB.age = 28;
    personB.height = 167;
    personB.weight = 0;
    
    struct Point2D p1, p2;
    p1.x = 100;
    p1.y = 100;
    p2 = p1;        // ����ü ����

    // ����ü �ʱ�ȭ
    struct Person personC = {"Unknown", 40, 170, 66};
    printf("personC�� �̸� = %s, ���� = %d\n", personC.name, personC.age);


    // ����ü�� �迭 ������ �����ϴ�.
    struct rect r;
    int w, h, area, peri;

    printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);

    printf("������ ����� ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;

    area = w * h;
    peri = 2 * w + 2 * h;
    printf("�簢���� ������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);

    // �Ʒ��� �ڵ�� �Ұ���
    // struct rect new_r;
    // new_r = r;  // OK
    // if ( r < new_r ) {      // �� ������ �������� �ʴ´�.
    //     printf("new_r�� �� Ů�ϴ�.\n");
    // }
    //
    // struct rect array_r[10];    // ����ü �迭�� ������.

    return 0;
}