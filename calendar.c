/*
*	Program to print the DAY on given date of the calendar.
*/

#include <stdio.h>
int main()
{
	int dd, mm, yy, total_leap;
	long total_days;
	
	/*  Taking input until the correct max. range is provided for days, months, year */
	do {
		printf("Enter the date : ");
		scanf("%d", &dd);
	} while (dd<1 || dd>31);
	
	do {
		printf("Enter the month : ");
		scanf("%d", &mm);
	} while (mm<1 || mm>12);

	do {
		printf("Enter the year : ");
		scanf("%d", &yy);
	} while (yy<0);
	
	/*  If days are greater than the months having max. 30 days */
	if (mm == 4 || mm == 6 || mm == 9  || mm == 11 && dd > 30)
		return printf("Invalid Date : This month can't have %d days !!\n", dd);
	
	/*  Check for Leap year. and feb has max. 29 days */
	if (yy %400 == 0 || (yy %4 == 0 && yy %100 !=0))
		if (mm == 2 && dd >29)	
			return printf("Invalid Date : This month can't have %d days !!\n", dd);
	else 
		if (mm == 2 && dd >28)
			return printf("Invalid Date : This month can't have %d days (Not a Leap Year) !!\n", dd);
	
	/*  Calculate total number of leap years */
	total_leap = (yy-1)/4 - (yy-1)/100 + (yy-1)/400;
	
	/*  Calculate total number of Days */
	total_days = (yy-1)*365l + total_leap;
	
	/*  Calculate total number of days of months of that given year
		 from (given month - 1) to January  + days entered */
	switch (mm)
	{
		case 12: total_days += 30;
		case 11: total_days += 31;
		case 10: total_days += 30;
		case 9: total_days += 31;
		case 8: total_days += 31;
		case 7: total_days += 30;
		case 6: total_days += 31;
		case 5: total_days += 30;
		case 4: total_days += 31;
		case 3: total_days += 28;
		case 2: total_days += 31;
		case 1: total_days += dd;
	}
	
	/*  If given year is leap year and month entered is greater than February */
	if ((yy %400 == 0 || (yy %4 == 0 && yy %100 !=0)) && mm >2)
		++total_days;
	
	printf("The given date is : %d-%d-%d \nThe Day is : ", dd, mm, yy);
	
	/*  Printing the Day */
	switch (total_days %7)
	{
		case 0 : printf("the given Day is Sunday\n");
			break;
		case 1 : printf("the given Day is Monday\n");
			break;
		case 2 : printf("the given Day is Tuesday\n");
			break;
		case 3 : printf("the given Day is Wednesday\n");
			break;
		case 4 : printf("the given Day is Thursday\n");
			break;
		case 5 : printf("the given Day is Friday\n");
			break;
		case 6 : printf("the given Day is Saturday\n");		
	}
	return 0;
}
