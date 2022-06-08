#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    printf("********* Welcom in rock pepar sisor Game *********\n\n");
    while (1)
    {
        int comp_point = 0, user_point = 0, chance = 0, status;
        do
        {
            int comp, user;
            srand(time(0));
            comp = (rand() % 3) + 1;
            printf("Enter 1 for rock, 2 for pepar and 3 for sisor: ");
            scanf("%d", &user);
            if (user != 1 && user != 2 && user != 3)
            {
                printf("invalid input!\n");
                continue;
            }
            else
            {
                if (comp == user)
                {
                    printf("---------TIE!---------\n\n");
                    chance++;
                }
                else if (comp == 1 && user == 2)
                {
                    printf("********* USER points +1 *********\n\n");
                    user_point++;
                    chance++;
                }
                else if (comp == 1 && user == 3)
                {
                    printf("********* COMP points +1 *********\n\n");
                    comp_point++;
                    chance++;
                }
                else if (comp == 2 && user == 1)
                {
                    printf("********* COMP points +1 *********\n\n");
                    comp_point++;
                    chance++;
                }
                else if (comp == 2 && user == 3)
                {
                    printf("********* USER points +1 *********\n\n");
                    user_point++;
                    chance++;
                }
                else if (comp == 3 && user == 1)
                {
                    printf("********* USER points +1 *********\n\n");
                    user_point++;
                    chance++;
                }
                else if (comp == 3 && user == 2)
                {
                    printf("*********! COMP points +1 *********\n\n");
                    comp_point++;
                    chance++;
                }
            }
        } while (chance < 3);
        printf("\n");
        if (comp_point == user_point)
        {
            printf("---------TIE!---------\n");
            printf("Computer_points:%d\nUser_points:%d\n", comp_point, user_point);
        }
        else if (comp_point > user_point)
        {
            printf("********* COMPUTER wins! *********\n");
            printf("Computer_points:%d\nUser_points:%d\n", comp_point, user_point);
        }
        else if (comp_point < user_point)
        {
            printf("********* USER wins! *********\n");
            printf("Computer_points:%d\nUser_points:%d\n", comp_point, user_point);
        }
        printf("Press 0 to stop and 1 to continue Game ");
        scanf("%d", &status);
        system("cls");
        if (status == 1)
        {
            continue;
        }
        else if (status == 0)
        {
            break;
        }
        else
            printf("ERROR!\n");
    }
    return 0;
}