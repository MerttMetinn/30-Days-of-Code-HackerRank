#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    char string[10000];
    char string1[5000];
    char string2[5000];
    scanf("%d",&n);

    for(int i = 0; i<n; i++)
    {
        scanf("%s",string);
        int j = 0;
        int s1 = 0;
        int s2 = 0;
        while(string[j] != '\0')
        {
            if(j%2 == 0)
            {
                string1[s1] = string[j];
                s1++;
                string1[s1] = '\0';
            }
            if(j%2 == 1)
            {
                string2[s2] = string[j];
                s2++;
                string2[s2] = '\0';
            }
            j++;
        }
        printf("%s %s\n",string1,string2);
    }
    return 0;
}
