/* 
    널널한 박교수의 C프로그래밍 고급편
    22.07.31
    최장혁
    강의 : 구조체
*/

// 구조체: 기본 자료형만으로 표현하지 못하는 복잡한 형
//     ex) 사람의 이름, 나이, 키, 몸무게 정보 등

#include <stdio.h>
#include <string.h>

// 구조체 정의
// Person은 struct 태그 (식별하기 위한 이름)
struct Person {
    char name[100];     // 구조체 멤버-이름
    int age;            // 구조체 멤버-나이
    int height;         // 구조체 멤버-키
    float weight;       // 구조체 멤버-몸무게 
};

struct Point2D {        // Point2D 구조체 정의
    int x;
    int y;
};

// 구조체는 배열 연산도 가능함
struct point {
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};




int main() {
    // 구조체 변수 personA, personB 선언
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
    p2 = p1;        // 구조체 복사

    // 구조체 초기화
    struct Person personC = {"Unknown", 40, 170, 66};
    printf("personC의 이름 = %s, 나이 = %d\n", personC.name, personC.age);


    // 구조체는 배열 선언이 가능하다.
    struct rect r;
    int w, h, area, peri;

    printf("왼쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);

    printf("오른쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;

    area = w * h;
    peri = 2 * w + 2 * h;
    printf("사각형의 면적은 %d이고 둘레는 %d입니다.\n", area, peri);

    // 아래의 코드는 불가능
    // struct rect new_r;
    // new_r = r;  // OK
    // if ( r < new_r ) {      // 비교 연산은 지원하지 않는다.
    //     printf("new_r이 더 큽니다.\n");
    // }
    //
    // struct rect array_r[10];    // 구조체 배열은 가능함.

    return 0;
}