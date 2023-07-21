#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hourglass_sum(int arr[6][6], int i, int j)
{
    int sum = 0;
    sum += arr[i][j] + arr[i][j+1] + arr[i][j+2];
    sum += arr[i+1][j+1];
    sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
    return sum;
}

int main()
{
    int arr[6][6];
    int max_sum = -63;   // Minimum hourglass sum is -9 * 7 = -63

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum = hourglass_sum(arr, i, j);
            if (sum > max_sum)
            {
                max_sum = sum;
            }
        }
    }

    printf("%d\n", max_sum);

    return 0;
}
