#include <stdio.h>
#include <stdlib.h>
void location()
{
        int n;
loc:
        printf("FOR MORE DETAILS :\n\n");
        printf("PRESS 1 => AGRA\n\n");
        printf("PRESS 2 => CHANDIGARH\n\n");
        printf("PRESS 3 => JAIPUR\n\n");
        printf("PRESS 4 => MUMBAI\n\n");
        printf("PRESS 5 => DELHI\n\n");
        printf("PRESS 6 => SHIMLA\n\n");
        printf("\n\nPRESS 0 => main window\n\n>>>> ");
        scanf("%d", &n);
        switch (n)
        {default :
                 system("clear");
                 printf(" \n\nSORRY Invalid Input !! ,enter any key to try again\n\n>>>> ");
		getchar();
		getchar();
		system("clear");
                goto loc;
        case (1):
                system("clear");
                printf("PROPERTY CHOSEN IS AGRA:\n");
                printf("\nLOCATION : Taj East Gate Rd, Paktola, Tajganj, Agra, Uttar Pradesh 282001\n");
                printf("\nPLACES TO VISIT :-->600m from TAJ MAHAL\n\t\t --> 5.7Km from AGRA FORT\n\t\t --> 6.8Km from Itmad-d-Daulah\n");
                printf("\n\nEnter any key to go to back\n\n>>>> ");
                getchar();
                getchar();
                system("clear");
                goto loc;
                break;
        case (2):
                system("clear");
                printf("THE PROPERTY CHOSEN IS CHANDIGARH : \n");
                printf("\nLOCATION : Pallanpur P.O. Sialba Majri New Chandigarh, Chandigarh, Punjab 140110\n");
                printf("\nPLACES TO VISIT :--> 14.9Km from The Rock Garden\n\t\t --> 14.7Km from Chandigarh Rose Garden\n\t\t --> 15Km from ISKCON Temple Chandigarh\n");
                printf("\n\nEnter any key to go to back\n\n>>>> ");
                getchar();
                getchar();
                system("clear");
                goto loc;
                break;
        case (3):
                system("clear");
                printf("THE PROPERTY CHOSEN IS JAIPUR : \n");
                printf("\nLOCATION : Babaji Ka Modh, Goner Rd, Jaipur, Rajasthan 302031\n");
                printf("\nPLACES TO VISIT :--> 8Km from Jantar Mantar\n\t\t --> 8.2Km from World Trade Park\n\t\t --> 8Km from City Palace\n\t\t --> 8.5Km from Hawa Mahal\n");
                printf("\n\nEnter any key to go to back\n\n>>>> ");
                getchar();
                getchar();
                system("clear");
                goto loc;
                break;
        case (4):
                system("clear");
                printf("THE PROPERTY CHOSEN IS MUMBAI : \n");
                printf("\nLOCATION : Nariman Point, Mumbai, Maharashtra 400021\n");
                printf("\nPLACES TO VISIT :--> 15min from Marine Drive\n\t\t --> 7min walk from Sana Mosque\n\t\t --> 31min from Gayteway of India\n\t\t --> 3.2Km from Nariman Point\n");
                printf("\nEnter any key to go to back\n\n>>>> ");
                getchar();
                getchar();
                system("clear");
                goto loc;
                break;
        case (5):
                system("clear");
                printf("THE PROPERTY CHOSEN IS DELHI : \n");
                printf("\nLOCATION : Dr Zakir Hussain Marg, Delhi Golf Club, Golf Links,Delhi 110003\n");
                printf("\nPLACES TO VISIT :--> 5.8Km from Akshardham Temple\n\t\t --> 19min walk from Hazrat Nizamuddin Dargah\n\t\t --> 9.6Km from Qutub Minar\n\t\t --> 27min walk from Khan Market\n\t\t --> 2.5Km from Lodhi Garden\n");
                printf("\n\nEnter any key to go to back\n\n>>>> ");
                getchar();
                getchar();
                system("clear");
                goto loc;
                break;
        case (6):
                system("clear");
                printf("THE PROPERTY CHOSEN IS SHIMLA : \n");
                printf("\nLOCATION : Chaura Maidan Rd, Nabha, Shimla, Himachal Pradesh 171004•0177 280 4848\n");
                printf("\nPLACES TO VISIT :--> 0.4Km from Summer Hill\n\t\t --> 0.3Km from Annandale Ground\n\t\t --> 0.7Km from City Center Mall\n\t\t --> 1.9Km from The Mall\n\t\t --> 1.1Km from Chadwick Falls\n");
                printf("\n\nEnter any key to go to back\n\n>>>> ");
                getchar();
                getchar();
                system("clear");
                goto loc;
                break;
        case(0):
                system("clear");
                break;
        }
}
