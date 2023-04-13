#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    const int MIN = 1;
    const int MAX = 36;
    int number;
    int random_num;
    

    srand(time(0));

    random_num = (rand() % MAX) + MIN;

    do{
        printf("Enter any number of your choice : ");
        scanf("%d", &number);
            if(number > random_num)
                {
                    printf("Too high try again\n");
                }
                else if (number < random_num)
                {
                    printf("Too low try again\n");
                }
                else
                {
                     printf("CORRECT! see your big head\n");
                }
    }while( number != random_num);
    printf("%d", random_num);
}