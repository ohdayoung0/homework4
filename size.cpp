#include<stdio.h> // <stdio.h> 라이브러리를 포함
#include<stdlib.h> // <stdlib.h> 라이브러리를 포함
void main() // main함수 시작
{
	printf("-----오다영 2023041090-----\n"); // 이름 학번 출력
	int** x; // 정수형 이중 포인터 변수 x 선언
	printf("sizeof(x) = %lu\n", sizeof(x)); // 정수형 변수 x의 크기 출력
	printf("sizeof(*x) = %lu\n", sizeof(*x)); // 정수형 변수 x가 가리키는 포인터의 크기 출력
	printf("sizeof(**x) = %lu\n", sizeof(**x)); // 정수형 변수 x가 가리키는 포인터가 가리키는 값의 크기를 출력
}
