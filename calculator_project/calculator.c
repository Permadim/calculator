#include <stdio.h>

int main()
{
    int operation, num1, num2, result;
    printf("Welcome to this calculator made in C!!\n");
    printf("1-Sum\n2-Subtraction\n3-Multiplication\n4-Division\n");
    scanf("%d",&operation);
    printf("Whats the first number?\n");
    scanf("%d", &num1);
    printf("Whats the second number?\n");
    scanf("%d", &num2);
    switch(operation)
    {
        case 1:
            result = num1 +num2;break;
        case 2:
            result = num1 - num2;break;
            
        case 3:
            result = num1 * num2;break;
        case 4:
            if (num2 == 0)
            {
                printf("you cant defide by 0\n");
                return 1;
            }
            result = num1 / num2; break;
        default:
            printf("INvalid option\n"); return 1;
        

    }
    printf("The equation equals to %d\n", result);
    printf("operation is equal to %d\n",operation);
    return 0;
}
