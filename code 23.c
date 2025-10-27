/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>
int main() {
    int daysLate, fine = 0;
    scanf("%d", &daysLate);
    if (daysLate <= 5)
    {
        fine = daysLate * 2;
        printf("Fine ₹%d\n", fine);
    }
    else if (daysLate <= 10) 
    {
        fine = (5 * 2) + (daysLate - 5) * 4;
        printf("Fine ₹%d\n", fine);
    }
    else if (daysLate <= 30) 
    {
        fine = (5 * 2) + (5 * 4) + (daysLate - 10) * 6;
        printf("Fine ₹%d\n", fine);
    }
    else 
    {
        printf("Membership Cancelled\n");
    }

    return 0;
}
