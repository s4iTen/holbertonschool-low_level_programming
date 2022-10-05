#include "main.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void jack_bauer(void)
{
	int hour, minute;

	hour=minute=0;
	for (minute = 0; minute <= 60; minute++)
	{
		
		
		printf("%02d:%02d\n", hour, minute);
		fflush(stdout);
		if(minute==60)
		{
            hour+=1;
			minute=0;

        }
		if(hour == 23 && minute == 59)
		{
			break;
		}
	}
	
}