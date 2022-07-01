
#include <stdio.h>
#include <stdlib.h>
#include "registration.h"
#include "view.h"
#include "delete.h"
#include "rooms_details.h"
#include "location.h"
#include "cheapest.h"
#include "bill.h"
#include "average_rating.h"
#include "rating.h"
int main()
{
	system("clear");
	int sml = 1;
menu:
	printf("\t\t\t\t\t********************************************\n");
	printf("\t\t\t\t\t* ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦  *\n");
	printf("\t\t\t\t\t* ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦  *\n");
	printf("\t\t\t\t\t* ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭  *\n");
	printf("\t\t\t\t\t* ✦                                     ✦  *\n");
	printf("\t\t\t\t\t* ✦  WELCOME TO CLARK GROUPS OF HOTELS  ✦  *\n");
	printf("\t\t\t\t\t* ✦                                     ✦  *\n");
	printf("\t\t\t\t\t* ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭ ✭  *\n");
	printf("\t\t\t\t\t* ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦  *\n");
	printf("\t\t\t\t\t* ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦ ✦  *\n");
	printf("\t\t\t\t\t********************************************\n");
	printf("\n\n1  ==> Rating");
        printf("\n\n2  ==> Available Destinations");
	printf("\n\n3  ==> Room Details\n\n");
	printf("4  ==> Cheapest Rooms ");
        printf("\n\n5  ==> User Registration");
	printf("\n\n6  ==> View Exsisting Account Details\n\n");
	printf("7  ==> Delete Exsisting Account \n\n");
	printf("8  ==> Bill \n\n");
        printf("9  ==> Please Rate Us");
        printf("\n\n0  ==> Exit\n");
        printf("\n");
	int choice;
	printf("\nChoose required option\n\n>>>> ");
	scanf("%d", &choice);
	system("clear");
	switch (choice)
	{
	case (2):
		location();
		goto menu;
		break;
	case (5):
		new_user_details();
		goto menu;
		break;
	case (6):
		search();
		goto menu;
		break;
	case (7):
		delete ();
		goto menu;
		break;
        case (8):
                bill();
                goto menu;
                break;
        case (0):
                break;
        case (9):
                rating();
                system("clear");
                goto menu;
                break;
        case (1):
                average_rating();
                system("clear");
                goto menu;
                break;
	case(4):
		cheapest();
                goto menu;
                break;
	case (3):
	available_rooms:
		available_rooms();
		system("clear");
		goto menu;
		break;
		//case for exit.
	default:system("clear");
		printf(" \n\nSORRY Invalid Input !! ,enter any key to try again\n\n>>>> ");
		getchar();
		getchar();
		system("clear");
		goto menu;
	}
	return 0;
}
