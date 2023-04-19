#include <stdio.h>

void showmenu(void);
int getchoice(int low, int high);

int main(void)
{
	int res;

	showmenu();
	while((res = getchoice(1, 4)) != 4)
	{
		printf("I like choice %d.\n", res);
		showmenu();
	}

	printf("Bye.\n");

	return 0;
}

void showmenu(void)
{
	printf("Please choose one of the following:\n");
	printf("1) copy files		2) move files\n");
	printf("3) remove files		4) quit\n");
	printf("Enter the number of your choice:\n");
}

int getchoice(int low, int high)
{
	int ans;
	int status;

	while((status = scanf("%d", &ans)) != 1 || ans < low || ans > high)
	{
		if(status != 1)
		{
			ans = 4;
			return ans;
		}
		if(ans < low || ans > high)
		{
			printf("Please enter again an integer.ex(1~4).\n");
			showmenu();
		}
	}

	return ans;
}
