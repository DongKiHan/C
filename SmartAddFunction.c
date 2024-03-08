#include <stdio.h>

int Add(int num1, int num2)
{
    return num1+num2;
}

void ShowAdd(int num)
{
    printf("%d \n", num);
}

int WriteNum(void)
{
    int num;
    scanf("%d", &num);
    return num;
}


void Use3(void)
{
    printf("please input number, it will be show you to number \n");
    printf("Go ahead, write the number \n");
}
//
//
int main(void)
{
    Use3();
    int result;
    int num1;
    int num2;
    

    return 0;
}