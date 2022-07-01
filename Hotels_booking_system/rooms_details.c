#include <stdlib.h>
#include <stdio.h>
void available_rooms()
{
    FILE *p;
    int count = 0, total_room[25] = {101, 102, 103, 104, 105, 201, 202, 203, 204, 205, 301, 302, 303, 304, 305, 401, 402, 403, 404, 405, 501, 502, 503, 504, 505};
    char loc[20],name[70],residential[100], nationality[50], email[60];
    long long int aadhar, phonenumber, checkin, checkout;
    int days, c1 = 0;
    p = fopen("user.txt", "r");
    int test, room_numbers[30], i = 100, j = 1;
    int r;
    while (!feof(p))
    {
        fscanf(p, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n",loc, name, &aadhar, nationality, residential, &phonenumber, email, &room_numbers[count], &checkin, &checkout, &days);
        count++;
    }fclose(p);
a:
    printf("Enter 1 --> delux rooms\n\n");
    printf("Enter 2 --> luxury rooms\n\n");
    printf("Enter 3 --> twin rooms\n\n");
    printf("Enter 4 --> king rooms\n\n");
    printf("Enter 5 --> queen rooms\n\n\n");
    printf("Enter 0 --> main menu\n\n>>>> ");
    
    scanf("%d", &r);
    system("clear");
    switch (r)
    {
    case (1):
        printf("\nThese rooms are most suitable for single travellers to Mumbai.\n They are furnished with a queen size bed and a writing desk.\n The Italian marble bathroom has a freestanding bathtub and a separate shower.\n Contemporary artworks add a touch of elegance.\n");
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < count; j++)
            {
                if (room_numbers[j] == total_room[i])
                {
                    total_room[i] = 0;
                    c1++;
                }
            }
        }
        if (c1 == 5)
        {
            printf("\nNO AVAILABLE ROOMS!!\n\n");
            break;
        }
        i = 0;
        printf("\n\nAvailable rooms in the delux category are -->  ");
        while (i < 5)
        {
            if (total_room[i] > r * 100 && total_room[i] < r * 100 + 6 && total_room[i] != 0)
            {   
                printf("%d   ", total_room[i]);
            }
            i++;
        }
         printf("\n\n Price ==> Rs. 5000\n\n");
         printf("\n\n\nEnter any key to go back\n\n>>>> ");
        getchar();
        getchar();
        system("clear"); 
        goto a;
        break;
    case (2):
        c1 = 0;
        printf("\nThese rooms offer bird’s eye views of Mumbai’s skyline, dotted with modern and traditional architecture. Interiors include a king size bed, a walk in wardrobe, a silk armchair and a writing desk.\n The bathroom has a standalone bathtub and a separate shower.\n");
        for (i = 5; i < 10; i++)
        {
            for (j = 0; j < count; j++)
            {
                if (room_numbers[j] == total_room[i])
                {
                    total_room[i] = 0;
                    c1++;
                }
            }
        }
        if (c1 == 5)
        {
            printf("\nNO AVAILABLE ROOMS!!\n\n");
            break;
        }
        i = 5;
        printf("\n\nAvailable luxury rooms  are -->  ");
        while (i < 10)
        {
            if (total_room[i] > r * 100 && total_room[i] < r * 100 + 6 && total_room[i] != 0)
            {
                printf("%d   ", total_room[i]);
            }
            i++;
        }printf("\n\n Price ==> Rs. 6000\n\n");
         printf("\n\n\nEnter any key to go back\n\n>>>> ");
        getchar();
        getchar();
        system("clear"); 
        goto a;
        break;
    case (3):
        c1 = 0;
        printf("\nTwin: A room with two beds. May be occupied by one or more people.");
        for (i = 10; i < 15; i++)
        {
            for (j = 0; j < count; j++)
            {
                if (room_numbers[j] == total_room[i])
                {
                    total_room[i] = 0;
                    c1++;
                }
            }
        }
        if (c1 == 5)
        {
            printf("\nNO AVAILABLE ROOMS!!\n\n");
        }
        i = 10;
        printf("\n\nAvailable rooms in the twin category are -->  ");
        while (i < 15)
        {
            if (total_room[i] > r * 100 && total_room[i] < r * 100 + 6 && total_room[i] != 0)
            {
                printf("%d   ", total_room[i]);
            }
            i++;
        }printf("\n\n Price ==> Rs. 4500\n\n");
        printf("\n\n\nEnter any key to go back\n\n>>>> ");
        getchar();
        getchar();
        system("clear"); 
        goto a;
        break;
    case (4):
        c1 = 0;
        printf("\nKing: A room with a king-sized bed. May be occupied by one or more people.");
        for (i = 15; i < 20; i++)
        {
            for (j = 0; j < count; j++)
            {
                if (room_numbers[j] == total_room[i])
                {
                    total_room[i] = 0;
                    c1++;
                }
            }
        }
        if (c1 == 5)
        {
            printf("\nNO AVAILABLE ROOMS!!\n\n");
        }
        i = 15;
        printf("\n\nAvailable rooms in the king category are -->  ");
        while (i < 20)
        {
            if (total_room[i] > r * 100 && total_room[i] < r * 100 + 6 && total_room[i] != 0)
            {
                printf("%d   ", total_room[i]);
            }
            i++;
        }printf("\n\n Price ==> Rs. 4000\n\n");
        printf("\n\n\nEnter any key to go back\n\n>>>> ");
        getchar();
        getchar();
        system("clear"); 
        goto a;
        break;
    case (5):
        c1 = 0;
        printf("\nQueen: A room with a queen-sized bed. May be occupied by one or more people.");

        for (i = 20; i < 25; i++)
        {
            for (j = 0; j < count; j++)
            {
                if (room_numbers[j] == total_room[i])
                {
                    total_room[i] = 0;
                    c1++;
                }
            }
        }
        if (c1 == 5)
        {
            printf("\nNO AVAILABLE ROOMS!!\n\n");
            break;
        }
        i = 20;
        printf("\n\nAvailable rooms in the queen category are -->  ");
        while (i < 25)
        {
            if (total_room[i] > r * 100 && total_room[i] < r * 100 + 6 && total_room[i] != 0)
            {
                printf("%d   ", total_room[i]);
            }
            i++;
        }printf("\n\n Price ==> Rs. 3500\n\n");
        printf("\n\n\nEnter any key to go back\n\n>>>> ");
        getchar();
        getchar();
        system("clear"); 
        goto a;
        break;
    case (0):
            system("clear");
            break;
    default :
                 system("clear");
                 printf(" \n\nSORRY Invalid Input !! ,enter any key to try again\n\n>>>> ");
		getchar();
		getchar();
		system("clear");
        goto a;
    }
}
