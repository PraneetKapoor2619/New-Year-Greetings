#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char **argv)
{
	struct timespec tim, tim2;
	tim.tv_sec = 0;
	tim.tv_nsec = 100;
	double starttime = -13.7e+09;
	starttime += 2022;
	while(starttime < 2022)
	{
		system("clear");
		if(starttime < -1e+09)
		{
			starttime += 1e+09;
			printf("\033[01;96m");
		}
		else if(starttime < -1e+06)
		{
			starttime += 1e+06;
			printf("\033[01;95m");
		}
		else if(starttime < -1000)
		{
			starttime += 100;
			printf("\033[01;93m");
		}
		else if(starttime >= -1000)
		{
			++starttime;
			if(starttime >= 0)
			{
				printf("\033[01;91m");
			}
			else
			{
				printf("\033[01;92m");
			}
		}
		if(starttime < 2022)
			printf("\t\t\t%.0lf\n", starttime);
		nanosleep(&tim, &tim2);

	}
	printf("\033[01;93m \033[01;101m\t\t\t%.0lf\033[0m\n\t\t  \033[01;107m\033[01;31mHAPPY NEW YEAR!!\033[0m\n\n\n\n\n\n\n\n\n", starttime);
	return 0;
}
