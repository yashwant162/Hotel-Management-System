#include <stdio.h>
void average_rating()
{
	int i;
	FILE *f2;
	f2 = fopen("rating.txt", "r");
	if (f2 == NULL)
	{
		printf("file can not be opened");
	}
	else
	{
		float i, sum = 0, count = 0;
		while (fscanf(f2, "%f", &i) != EOF)
		{
			sum += i;
			count++;
		}
		printf("RATING ==> ");
		for (i = 0; i < (int)(sum / count); i++)
		{
			printf("★ ");
		}
		for (i = 0; i < 5 - (int)(sum / count); i++)
		{
			printf("☆ ");
		}
		fclose(f2);
		printf("\n\nEnter any key to go main menu\n\n>>>> ");
	}
	getchar();
	getchar();
}
