#include <stdio.h>
#include <stdlib.h>

int maxConsecutiveOnes(int num)
{
    int count = 0, max_count = 0;

    while (num > 0)
    {
        if (num % 2 == 1)
        {
            count++;
            if (count > max_count)
            {
                max_count = count;
            }
        }
        else
        {
            count = 0;
        }
        num = num / 2;
    }

    return max_count;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d",maxConsecutiveOnes(num));
    return 0;
}
