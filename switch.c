#include <stdio.h>

void Use3(void)
{
    printf("Hi \n");
    printf("great c \n");
}

int main(void)
{
    int num;
    Use3();
    printf("in put number 1~5 \n");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("number 1 \n");
            break;
        case 2:
            printf("number 2 \n");
            break;
        case 3:
            printf("number 3 \n");
            break;
        case 4:
            printf("number 4 \n");
            break;
        case 5:
            printf("number 5 \n");
            break;
        default:
            printf("no number \n");
            break;
    }

    return 0;
}