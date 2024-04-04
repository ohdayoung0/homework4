#include <stdio.h> // <stdio.h> 라이브러리를 포함

struct student { // student 구조체 정의
    char lastName[13]; // 13바이트인 문자형 배열 lastName 선언
    int studentId; // 4바이트인 정수형 변수 studentId 선언
    short grade; // 2바이트인 정수형 변수 grade 선언
};

int main() // main 함수 시작
{
    printf("-----오다영 2023041090-----\n"); // 이름 학번 출력

    struct student pst; // student 구조체 변수 pst 선언

    printf("size of student = %ld\n", sizeof(struct student)); // 구조체 student의 크기 출력
    printf("size of int = %ld\n", sizeof(int)); // 정수형 자료형인 int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); // 정수형 자료형인 short의 크기 출력

    return 0; // 0값을 반환
}
