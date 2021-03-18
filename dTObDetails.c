#include<stdio.h>
int main()
{
    int Decimal, Binary=0, Reminder, i=1;

    printf("Enter Decimal Value: ");
    scanf("%d",&Decimal);

    printf("\n\nInside while loop:\n");
    while(Decimal!=0)
    {
        Reminder = Decimal % 2;
        Binary = Binary + Reminder*i;
        Decimal = Decimal / 2;
        i=i*10;

        printf("\nReminder = %d\n",Reminder);
        printf("Binary = %d\n",Binary);
        printf("Decimal = %d\n",Decimal);
        printf("i = %d\n",i);
    }

    printf("\n\nConverted Binary Value = %d\n",Binary);
    return 0;
}
