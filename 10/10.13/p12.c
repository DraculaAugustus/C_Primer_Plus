#include <stdio.h>

#define MONTHS		12
#define YEARS		5

float total_year(const float arr[][MONTHS], int years);
void average_month(float const arr[][MONTHS], int years);

//2000~2004
int main(void)
{
	const float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};

	int year, month;
	float subtot;
	float total = 0;

	/*
	for(year = 0; year < YEARS; year++)
	{
		for(month = 0, subtot = 0; month < MONTHS; month++)
			subtot += rain[year][month];
		printf("%5d %15.1f.\n", year+2000, subtot);
		total += subtot;
	}
	*/
	total = total_year(rain, YEARS);

	printf("The yearly average is %.1f.\n", total / YEARS);

	printf("MONTHLY AVERAGE:\n");
	printf("  Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	
	/*
	for(month = 0; month < MONTHS; month++)
	{
		for(year = 0, subtot = 0; year < YEARS; year++)
			subtot += rain[year][month];
		printf("%5.1f", subtot /MONTHS);
	}
	*/
	average_month(rain, YEARS);
	printf("\n");

	return 0;
}

float total_year(const float arr[][MONTHS], int years)
{
	int year, month;
	float subtot;
	float total = 0;
	for (year = 0; year < YEARS; year++)
	{
		for(month = 0, subtot = 0; month < MONTHS; month++)
			subtot += arr[year][month];
		printf("%5d %15.1f.\n", year+2000, subtot);
		total += subtot;
	}
	return total;
}
void average_month(float const arr[][MONTHS], int years)
{
	int year, month;
	float subtot;
	for (month = 0; month < MONTHS; month++)
	{
		for(year = 0, subtot = 0; year < YEARS; year++)
			subtot += arr[year][month];
		printf("%5.1f", subtot /MONTHS);
	}
}