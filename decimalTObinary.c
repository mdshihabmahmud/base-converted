#include<stdio.h>
 int main()
 {
     int Decimal, Binary=0, Reminder, i=1;

     printf("Enter Decimal Value: ");
     scanf("%d",&Decimal);

     while(Decimal!=0)
     {
         Reminder = Decimal % 2;
         Binary = Binary + Reminder*i; 
         Decimal = Decimal / 2; 
         i=i*10; 
     }

     printf("Converted Binary Value = %d\n",Binary);
     return 0;
 }
