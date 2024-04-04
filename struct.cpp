#include <stdio.h> // <stdio.h> 라이브러리를 포함

struct student1 { // student1 구조체 정의
    char lastName;  //  문자형 변수 lastName 선언
    int studentId;  // 정수형 변수 studentld 선언
    char grade;     // 문자형 변수 grade 선언
};

typedef struct {  // typedef를 동해 구조체 student2 정의
    char lastName;  // 문자형 변수 lastName 선언
    int studentId;  // 정수형 변수 studentld 선언
    char grade;     // 문자형 변수 grade 선언
} student2;

int main() { // main 함수 시작

    printf("-----오다영 2023041090-----\n"); // 이름 학번 출력

    struct student1 st1 = { 'A', 100, 'A' }; // student1 구조체 변수 st1을 선언하고 초기화
    printf("st1.lastName = %c\n", st1.lastName);  // st1의 문자형 변수 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId);  // st1의 정수형 변수 studentId 출력
    printf("st1.grade = %c\n", st1.grade);  // st1의 문자형 변수 grade 출력

    student2 st2 = { 'B', 200, 'B' }; // student2 구조체 변수 st2를 선언하고 초기화
    printf("\nst2.lastName = %c\n", st2.lastName);  // st2의 문자형 변수 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId);  // st2의 정수형 변수 studentId 출력
    printf("st2.grade = %c\n", st2.grade);  // st2의 문자형 변수 grade 출력

    student2 st3; // student2 구조체 변수 st3 선언
    st3 = st2;  // st3을 st2로 초기화
    printf("\nst3.lastName = %c\n", st3.lastName);  // st3의 문자형 변수 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId);  // st3의 정수형 변수 studentId 출력
    printf("st3.grade = %c\n", st3.grade);  // st3의 문자형 변수 grade 출력

    /* equality test */
    if (st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)  
    // st3와 st2의 각 필드를 각 필드별로 비교하여 같은지 확인
        printf("equal\n");  // 같으면 equal 출력
    else
        printf("not equal\n");  // 다르면 not equal 출력

    return 0; // 0값을 반환
}
