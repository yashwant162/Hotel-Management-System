#include <stdio.h>
#include <stdlib.h>
void cheapest()
{
    FILE *p;
    int count = 0, total_room[10] = {501, 502, 503, 504, 505};
    char loc[20], name[70], residential[100], nationality[50], email[60];
    long long int aadhar, phonenumber, checkin, checkout;
    int days, c1 = 0;
    p = fopen("user.txt", "r");
    int test, room_numbers[30], i = 100, j = 1;
    int r;
    while (!feof(p))
    {
        fscanf(p, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n", loc, name, &aadhar, nationality, residential, &phonenumber, email, &room_numbers[count], &checkin, &checkout, &days);
        count++;
    }
    fclose(p);
    c1 = 0;
    printf("It is the cheapest category...\n");
    printf("\nQueen: A room with a queen-sized bed. May be occupied by one or more people.\n");

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
    }
    else
    {
        i = 0;
        printf("\nAvailable rooms in the queen category are -->  ");
        while (i < 5)
        {
            if (total_room[i] > 500 && total_room[i] < 506 && total_room[i] != 0)
            {
                printf("%d   ", total_room[i]);
            }
            i++;
        }
    }printf("\n\n Price ==> Rs. 3500\n\n");
    getchar();
    printf("\n\n\n\nEnter any key to go to main menu\n\n>>>> ");
    getchar();
    system("clear");
}
