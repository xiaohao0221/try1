/*
    从输入的整数开始倒数到0
*/
#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    while (no >=1)
        printf("%d ", no--);

    printf("\n");

    while (no<=-1)
    	printf("%d",no++);

    return 0;
}