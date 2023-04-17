#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[40], lname[40];
	int width_f, width_l;

	printf("Please enter your first name:\n");
	scanf("%s",fname);
	printf("Please enter your last name:\n");
	scanf("%s", lname);

	width_f = printf("%s", fname);
	printf(" ");
	width_l = printf("%s", lname);
	printf("\n%*lu %*lu\n", width_f, strlen(fname), width_l, strlen(lname));
	//printf("%*lu %*lu\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));

	printf("%s %s\n", fname, lname);
	printf("%-*lu %-*lu\n", width_f, strlen(fname), width_l, strlen(lname));
        //printf("%-*lu %-*lu\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));

	return 0;
}
