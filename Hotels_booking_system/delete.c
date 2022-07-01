#include <stdio.h>
#include <stdlib.h>
void delete ()
{
    FILE *p, *tmpp;
    int t ;
    char loc[30], name[70], residential[100], nationality[50], email[60];
    long long int aadhar, phonenumber, checkin, checkout, q ;
    int room, days, count = 0;

d:
    printf("Press 1 for deleting the account using room number\n\nPress 2 for deleting the account using phone number\n\n\nPress 0 to go to main menu\n\n>>>> ");
    scanf("%d", &t);
    system("clear");
    switch (t)
    {   case(0):
                system("clear");
                break;
        default :   system("clear");
                 printf(" \n\nSORRY Invalid Input !! ,enter any key to try  again\n\n>>>> ");
		getchar();
		getchar();
		system("clear");
                goto d;
                break;

    case (1):
    {
        p = fopen("user.txt", "r+");
        tmpp = fopen("usertmp.txt", "w");
        printf("Enter room number\n\n>>>> ");
        scanf("%lld", &q);
        if ((q <= 100) || (q >= 106 && q <= 200) || (q >= 206 && q <= 300) || (q >= 306 && q <= 400) || (q >= 406 && q <= 500) || (q >= 506))
        {
            system("clear");
            printf("INVALID ROOM NUMBER !!\n\n");
            getchar();
            printf("Enter any key to go to back\n\n>>>> ");
            getchar();
            system("clear");
            goto d;
            break;
        }
        while (!feof(p))
        {
            fscanf(p, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, &aadhar, nationality, residential, &phonenumber, email, &room, &checkin, &checkout, &days);
            if (q != room)
            {
                fprintf(tmpp, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, aadhar, nationality, residential, phonenumber, email, room, checkin, checkout, days);
            }
            else
                count = 1;
        }
        if (count != 1)
        {
            system("clear");
            printf("ACCOUNT DOES NOT EXIST\n\n");
            printf("\nEnter any key to go to back\n\n>>>> ");
            getchar();
            getchar();
            system("clear");
            goto d;
            break;
        }
        fclose(p);
        fclose(tmpp);
        remove("user.txt");
        rename("usertmp.txt", "user.txt");
        system("clear");
        printf("\n\nAccount deleted successfully\n\n\nEnter any key to go to main menu\n\n>>>> ");
        getchar();
        getchar();
        system("clear");
        break;
    }
    case (2):
    {
        p = fopen("user.txt", "r+");
        tmpp = fopen("usertmp.txt", "w");
        printf("Enter phone number\n\n>>>> ");
        scanf("%lld", &q);
        while (!feof(p))
        {
            fscanf(p, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, &aadhar, nationality, residential, &phonenumber, email, &room, &checkin, &checkout, &days);
            if (q != phonenumber)
            {
                fprintf(tmpp, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, aadhar, nationality, residential, phonenumber, email, room, checkin, checkout, days);
            }
            else
                count = 1;
        }
        if (count != 1)
        {
            system("clear");
            printf("ACCOUNT DOES NOT EXIST\n\n");
            printf("\nEnter any key to go back\n\n>>>> ");
            getchar();
            getchar();
            system("clear");
            goto d;
            break;
        }
        fclose(p);
        fclose(tmpp);
        remove("user.txt");
        rename("usertmp.txt", "user.txt");
        system("clear");
        printf("Account deleted successfully\n\n\nEnter any key to go to main menu\n\n>>>> ");
        fflush(stdin);
        getchar();
        getchar();
        system("clear");
        break;
    }
    }
}
