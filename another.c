#include <stdio.h>
#include <string.h>


struct player
    {
        char name[12];
        int score;
    };
    
int main()
{  
    struct player player1;
    struct player player2; 

    strcpy(player1.name, "Abraham");
    player1.score = 5;
    
    strcpy(player2.name, "Jacob");
    player2.score = 7;

    printf("%s ", player1.name);
    printf("%d\n", player1.score);

    printf("%s ", player2.name);
    printf("%d", player2.score);


}