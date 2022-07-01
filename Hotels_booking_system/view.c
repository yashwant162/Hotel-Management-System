#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void search()
{
    FILE *p;
    int t;
    char loc[30],name[70], residential[100], nationality[50], email[60];
    long long int aadhar, phonenumber, checkin, checkout,q=0;
    int room, days,c=0;
    
    v:
    printf("Press 1 to search with room number \n\nPress 2 to search with phone number\n\nPress 0 to go to main menu\n\n>>>> ");
    
    scanf("%d", &t);
    switch (t)
    {default :   system("clear");
                 printf(" \n\nSORRY Invalid Input !! ,enter any key to try again\n\n>>>> ");
		getchar();
		getchar();
		system("clear");
                goto v;
            case(0):
            system("clear"); 
            break;
    case (1):
        p = fopen("user.txt", "r");
        system("clear");
        printf("Enter room number \n\n>>>> ");
        scanf("%lld", &q);
        system("clear");
	 if ((q <= 100) || (q >= 106 && q <= 200) || (q >= 206 && q <= 300) || (q >= 306 && q <= 400) || (q >= 406 && q <= 500) || (q >= 506))
{
printf("INVALID ROOM NUMBER !!\n\n");
getchar();
printf("Enter any key to go back\n\n>>>> ");
getchar();
system("clear");
goto v;
break;
}

        while (!feof(p))
        {
            fscanf(p, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n",loc, name, &aadhar, nationality, residential, &phonenumber, email, &room, &checkin, &checkout, &days);
            if (q == room)
            {c=1;
                printf("Destination : %s\n\nName : ",loc);
            for(int i=0;i<strlen(name);i++)
              {
                if(name[i]=='-')
                  { printf(" ");
                  }
                else
               printf("%c",name[i]);
              }                
              printf("\n\nAadhar Number : %lld\n\nNationality : %s\n\nResidential Address : ",aadhar, nationality);
     for(int i=0;i<strlen(residential);i++)
              {
               if(residential[i]=='_')
               { printf(" ");
               }
               else
               printf("%c",residential[i]);
              }              
printf("\n\nPhone Number : %lld\n\nEmail : %s\n\nRoom No. : %d\n\nCheck-in Date : %lld\n\nCheck-out : %lld\n\nPeriod : %d\n",phonenumber, email, room, checkin, checkout, days);}
        }fclose(p);

        if (c != 1)
           {
               printf("Account does not exist!!\n\n\n");
               printf("Enter any key to go to back\n\n>>>> ");
               fflush(stdin);
               getchar();
               getchar();            
               system("clear");
           goto v; 
        break;}
        else{   
                printf("\n\nEnter any key to go to main menu\n\n>>>> ");
                fflush(stdin);
                getchar();
                getchar();
                system("clear");
            break;}
         
    case (2):

    {p = fopen("user.txt", "r");
         system("clear");
        c=0;
        printf("Enter phone number\n\n>>>> ");
        scanf("%lld",&q);
        system("clear");
        while (!feof(p))
        {
            fscanf(p, "%s %s %lld %s %s %lld %s %d %lld %lld %d \n",loc, name, &aadhar, nationality, residential, &phonenumber, email, &room, &checkin, &checkout, &days);
            if (q == phonenumber)
            {c=1;
                printf("Destination : %s\n\nName : ",loc);
            for(int i=0;i<strlen(name);i++)
              {
                if(name[i]=='-')
                  { printf(" ");
                  }
                else
               printf("%c",name[i]);
              }                
              printf("\n\nAadhar Number : %lld\n\nNationality : %s\n\nResidential Address : ",aadhar, nationality);
     for(int i=0;i<strlen(residential);i++)
              {
               if(residential[i]=='_')
               { printf(" ");
               }
               else
               printf("%c",residential[i]);
              }              
printf("\n\nPhone Number : %lld\n\nEmail : %s\n\nRoom No. : %d\n\nCheck-in Date : %lld\n\nCheck-out : %lld\n\nPeriod : %d\n",phonenumber, email, room, checkin, checkout, days);}
        }fclose(p);

        if (c != 1)
           {
               printf("Account does not exist!!\n\n\n");
               printf("Enter any key to go to back\n\n>>>> ");
               fflush(stdin);
               getchar();
               getchar();            
               system("clear");
               goto v;
               break;
           }
        else{   
                printf("\n\nEnter any key to go to main menu\n\n>>>> ");
                fflush(stdin);
                getchar();
                getchar();
                system("clear");
            
        break;} 

    }
    
    }
}
