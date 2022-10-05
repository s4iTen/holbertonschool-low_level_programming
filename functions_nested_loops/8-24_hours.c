#include "main.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void jack_bauer(void)
{
	int hour, minute;

	hour=minute=0;
	while (1)
	{
		
		printf("%02d : %02d\n", hour, minute);
		fflush(stdout);
		minute++;
		if(minute==60)
		{
            hour+=1;
            minute=0;
        }
        if(hour==24)
		{
            minute=0;
			break;
        }
		sleep(0.1);
	}
	
}