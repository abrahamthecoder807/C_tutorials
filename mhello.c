#include <stdio.h>
int main()
{
    int rows;
    int colunms;
    char symbol;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of colunms: ");
    scanf("%d", &colunms);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colunms; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for (int g = 0; g <= 34; g++)
    {
        printf("%d\n", g);
    }
    return 0;
}