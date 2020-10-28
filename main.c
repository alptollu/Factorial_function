#include <stdio.h>

int factorial(int count)
{
int i;
int result=1;
for(i=1;i<=count;i++)
    {
    result=result*i;
    }
    return result;
}
int main() {
    int number;
    printf("Please enter a number up to 10:\n");
    scanf("%d",&number);
    if ((number<=10)  && (number>=1))
    {
        int i;

        for (i = 1; i <= number; i++)
        {
            printf("%i!=%d\n", i, factorial(i));
        }
    }
    else
        printf("Please only enter a number between 1 to 10 !!!");
    return 0;
}
