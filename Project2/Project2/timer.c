#include <stdio.h>
#include <time.h>

void wait(int sec)
{
	clock_t end_wait;
	end_wait = clock() + sec * CLK_TCK;

	while (clock() < end_wait) {}
}

int main()
{
	printf("Start the Wait!\n");

	wait(3);	/* Wait for 3 seconds */

	printf("End Wait!\n");
	return 0;
}

/*int main ()
{
   time_t sec;
   sec = time(NULL);
   printf("%d", sec);


   return(0);
}*/