#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void new_user_details(void)
{
    FILE *p;
    char loc[20], name[70], residential[100], nationality[50], email[60];
    long long int aadhar, phonenumber, checkin, checkout;
    int cloc = 0, room, days, i = 0, room_numbers[30], count = 0;
l:
    p = fopen("user.txt", "r");
    while (!feof(p))
    {
        fscanf(p, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, &aadhar, nationality, residential, &phonenumber, email, &room_numbers[count], &checkin, &checkout, &days);
        count++;
    }
    fclose(p);
    printf("Choose your destination :   \n\n");
    printf("\nPRESS 1 => AGRA\n\n");
    printf("PRESS 2 => CHANDIGARH\n\n");
    printf("PRESS 3 => JAIPUR\n\n");
    printf("PRESS 4 => MUMBAI\n\n");
    printf("PRESS 5 => DELHI\n\n");
    printf("PRESS 6 => SHIMLA\n\n>>>> ");
    scanf("%d", &cloc);
    switch (cloc)
    {
    case (1):
        strcpy(loc, "Agra");
        break;
    case (2):
        strcpy(loc, "Chandigarh");
        break;
    case (3):
        strcpy(loc, "Jaipur");
        break;
    case (4):
        strcpy(loc, "Mumbai");
        break;
    case (5):
        strcpy(loc, "Delhi");
        break;
    case (6):
        strcpy(loc, "Shimla");
        break;
    default:
          system("clear");
          printf("Invalid choice\n Try again ");
          goto l ;
    }
    system("clear");
    printf("You are booking for the %s branch\n\n\n", loc);
    printf("Enter your name(use - instead of spaces) : ");
    scanf("%s", name);
    //getchar();
    fflush(stdin);
    printf("\nEnter Aadhar number  :	");
    scanf("%lld", &aadhar);
    fflush(stdin);
    printf("\nEnter nationality  :	");
    scanf("%s", nationality);
    fflush(stdin);
    printf("\nEnter residential address(use _ instead of spaces)   :	");
    scanf("%s", residential);
    printf("\nEnter phone number  :	");
    scanf("%lld", &phonenumber);
    printf("\nEnter email address  :	");
    scanf("%s", email);
roomno:
    printf("\nEnter room number :    ");
    scanf("%d", &room);
    if ((room <= 100) || (room >= 106 && room <= 200) || (room >= 206 && room <= 300) || (room >= 306 && room <= 400) || (room >= 406 && room <= 500) || (room >= 506))
    {
        system("clear");
        printf("\nInvalid Room number !!\n\nTry Again\n\n");
        goto roomno;
    }
    for (i = 0; i < count; i++)
    {
        if (room == room_numbers[i])
        {
            system("clear");
            printf("Sorry!! This room number is already booked\nTry looking for available room numbers in Room Details section\n\n");
            goto roomno;
        }
    }
    printf("\nEnter check-in date(ddmmyyyy) :  ");
    scanf("%lld", &checkin);
    printf("\nEnter check-out date(ddmmyyyy) :  ");
    scanf("%lld", &checkout);
    printf("\nEnter period(number of days) :  ");
    scanf("%d", &days);
    system("clear");
    printf("\n\nThanks %s :) !!\nRoom No. %d booked sucessfully :) \n\n", name, room);
    fflush(stdin);
    printf("\n\n\nPress any key to go to main menu\n\n>>>> ");
    getchar();
    getchar();
    system("clear");
    FILE *fp = fopen("user.txt", "a+");
    fprintf(fp, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, aadhar, nationality, residential, phonenumber, email, room, checkin, checkout, days);
    fclose(fp);
}
