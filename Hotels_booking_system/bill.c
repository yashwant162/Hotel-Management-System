#include <stdio.h>
#include <stdlib.h>
void bill()
{
	FILE *f1;
	int c = 0, count = 0, room, days;
	long long int x, arr[4], pn, aadhar, checkin, checkout;
	char loc[20], name[70], residential[100], nationality[50], email[60];
	float total;
bill:
	printf("Press 1 for getting bill using room number..\n\nPress 2 for getting bill using phone number...\n\n\nPress 0 to go to main menu\n\n>>>> ");
	scanf("%d", &c);
	system("clear");
	switch (c)
	{
         default :
                system("clear");
                printf(" \n\nSORRY Invalid Input !! ,enter any key to try again\n\n>>>> ");
		getchar();
		getchar();
		system("clear");
                goto bill;
	case (1):
	    f1 = fopen("user.txt", "r");
		count = 0;
		printf("Enter Room Number\n\n>>>> ");
		scanf("%lld", &x);
		if ((x <= 100) || (x >= 106 && x <= 200) || (x >= 206 && x <= 300) || (x >= 306 && x <= 400) || (x >= 406 && x <= 500) || (x >= 506))
		{
			system("clear");
			printf("INVALID ROOM NUMBER !!\n\n");
			getchar();
			printf("Enter any key to go to back\n\n>>>> ");
			getchar();
			system("clear");
			goto bill;
			break;
		}
		if (x > 100 && x < 106)
			arr[0] = 5000;
		else if (x > 200 && x < 206)
			arr[0] = 6000;
		else if (x > 300 && x < 306)
			arr[0] = 4500;
		else if (x > 400 && x < 406)
			arr[0] = 4000;
		else if (x > 500 && x < 506)
			arr[0] = 3500;

		while (!feof(f1))
		{
			fscanf(f1, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, &aadhar, nationality, residential, &pn, email, &room, &checkin, &checkout, &days);
			if (x == room)
			{
				arr[1] = days;
				arr[2] = room;
				arr[3] = pn;

				system("clear");
				system("date");
				total = 12 * (float)arr[0] * (float)days / 100 + arr[0] * days;
				printf("\n     ----------------------------------------\n");
				printf("         CLARK GROUPS OF HOTELS , %s\n", loc);
				printf("     ----------------------------------------\n");
				printf("     |  Name         -->  %s\n", name);
				printf("     |  Phone Number -->  %lld\n", arr[3]);
				printf("     |  Room No      -->  %lld\n", arr[2]);
				switch (arr[0])
				{
				case (5000):
					printf("     |  Room type    -->  Delux room\n");
					break;
				case (6000):
					printf("     |  Room type    -->  Luxury room\n");
					break;
				case (4500):
					printf("     |  Room type    -->  Twin room\n");
					break;
				case (4000):
					printf("     |  Room type    -->  King room\n");
					break;
				case (3500):
					printf("     |  Room type    -->  Queen room\n");
					break;
				}
				printf("     | --------------------------------------\n");
				printf("     |    Arrival Date   : %lld\n", checkin);
				printf("     |    Departure date : %lld\n", checkout);
				printf("     ----------------------------------------\n");
				printf("     | Total no of days       | %lld         \n", arr[1]);
				printf("     | Rent per Day           | Rs %lld         \n", arr[0]);
				printf("     | Total                  | Rs %.2f         \n", (float)arr[0] * arr[1]);
				printf("     | GST                    | %d%%          \n ", 12);
				printf("     ----------------------------------------\n");
				printf("     | Grand Total            | Rs %.2f         \n", total);
				printf("     -----------------------------------------\n");
				printf(" ♥ THANK YOU FOR VISITING , PLEASE COME AGAIN ♥\n\n");
				count = 1;
			}
		}fclose(f1);
		if (count != 1)
		{
			system("clear");
			printf("\nACCOUNT DOES NOT EXIST\n\nEnter any key to go back\n\n>>>> ");
			getchar();
			getchar();
			system("clear");

			goto bill;
			break;
		}
		else
		{
			getchar();
			printf("\n\n\nEnter any key to go main menu\n\n>>>> ");
			getchar();
		}
		break;

	case (2):
	    f1 = fopen("user.txt", "r");
		count = 0;
		printf("Enter Phone-Number\n\n>>>> ");
		scanf("%lld", &x);
		while (!feof(f1))
		{
			fscanf(f1, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, &aadhar, nationality, residential, &pn, email, &room, &checkin, &checkout, &days);
			if (x == pn)
			{
				arr[1] = days;
				arr[2] = room;
				arr[3] = pn;
				if (room > 100 && room < 106)
					arr[0] = 5000;
				else if (room > 200 && room < 206)
					arr[0] = 6000;
				else if (room > 300 && room < 306)
					arr[0] = 4500;
				else if (room > 400 && room < 406)
					arr[0] = 4000;
				else if (room > 500 && room < 506)
					arr[0] = 3500;
				total = 12 * (float)arr[0] * (float)days / 100 + arr[0] * days;
				system("clear");
				printf("     ----------------------------------------\n");
				printf("          CLARK GROUPS OF HOTELS , %s\n", loc);
				printf("     ----------------------------------------\n");
				printf("     |    Name         -->  %s\n", name);
				printf("     |    Phone Number -->  %lld\n", arr[3]);
				printf("     |    Room No      -->  %lld\n", arr[2]);
				switch (arr[0])
				{
				case (5000):
					printf("     |    Room type    -->  Delux room\n");
					break;
				case (6000):
					printf("     |    Room type    -->  Luxury room\n");
					break;
				case (4500):
					printf("     |    Room type    -->  Twin room\n");
					break;
				case (4000):
					printf("     |    Room type    -->  King room\n");
					break;
				case (3500):
					printf("     |    Room type    -->  Queen room\n");
					break;
				}
				printf("     | --------------------------------------\n");
				printf("     |    Arrival Date   : %lld\n", checkin);
				printf("     |    Departure date : %lld\n", checkout);
				printf("     ----------------------------------------\n");
				printf("     | Total no of days       | %lld         \n", arr[1]);
				printf("     | Rent per Day           | Rs %lld         \n", arr[0]);
				printf("     | Total                  | Rs %.0f         \n", (float)arr[0] * (float)arr[1]);
				printf("     | GST                    | %d%%          \n ", 12);
				printf("     ----------------------------------------\n");
				printf("     | Grand Total            | Rs %.2f         \n", total);
				printf("     -----------------------------------------\n");
				printf(" ♥ THANK YOU FOR VISITING , PLEASE COME AGAIN ♥ \n\n");

				count = 1;
			}
		}fclose(f1);
		if (count != 1)
		{
			system("clear");
			printf("\nInvalid Phone-Number \n\nEnter any key to go back\n\n>>>> ");
			getchar();
			getchar();
			system("clear");
			goto bill;
			break;
		}
		else
		{
			getchar();
			printf("\n\n\nEnter any key to go main menu\n\n>>>> ");
			getchar();
		}
		break;
	case (0):
		break;
	}
}
