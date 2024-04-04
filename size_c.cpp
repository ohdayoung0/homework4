#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("-----오다영 2023041090-----\n");

    int** x;
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}