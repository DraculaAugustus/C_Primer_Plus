#include <stdio.h>
#define S_PER_MIN	60
#define M_PER_K		0.62137
#define S_PER_H 	3600
int main(void)
{
	double distk, distm;
	int min, sec;
	int time;	//use seconds
	double rate;

	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");

	printf("Please enter in kilometer the distance run.\n");
	scanf("%lf", &distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by enter the minutes.\n");
	scanf("%d", &min);
	printf("Now enter the seconds.\n");
	scanf("%d", &sec);

	time = min*S_PER_MIN + sec;	//seconds
	distm = distk * M_PER_K;	//mile
	rate = distm/time * S_PER_H;

	double mtime;
	int mmin, msec;

	mtime = time/distm;
	mmin = (int)mtime/S_PER_MIN;
	msec = (int)mtime%S_PER_MIN;

	printf("Your score: %.2lf mile per hour\n", rate);
	printf("Use time %d minutes %d seconds per mile\n", mmin, msec);

	return 0;
}
