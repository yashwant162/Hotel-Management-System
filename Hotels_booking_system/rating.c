#include<stdio.h>
#include<stdlib.h>
void rating()
{ 	
        float a;
	FILE *f2;
	printf("Please rate us out of 5\n\n>>>> ");
        scanf("%f",&a);
	f2=fopen("rating.txt","a");
	if(f2==NULL)
	{
		printf("File can not be opened");
	}
        else {
	fflush(stdin);
	int i;
	fprintf(f2,"\n%f",a);
        fclose(f2);
        system("clear");
        printf("THANKS FOR THE RATING !!\n\n\n");
        getchar();
        printf("Enter any key to go to main menu\n\n>>>> ");
        getchar();
        } 
}
