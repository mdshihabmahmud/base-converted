#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int i, temp1[n], j = 0, sum = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        int temp = (int)sqrt(array[i]);
        if (temp * temp == array[i])
        {
            temp1[j] = array[i];
            j++;
            count++;
        }
    }

    sum = temp1[0];
    for (j = 1; j < count; j++)
    {
        if (j % 2 != 0)
            sum = sum + temp1[j];
        else
            sum = sum - temp1[j];
    }
    printf("%d\n", sum);
}
