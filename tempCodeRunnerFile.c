#include <stdio.h>

int main()
{
    FILE *pF = fopen("another.txt", "w");

    fprintf(pF, "spongebob Squarepants\n");
    fprintf(pF, "He created all things\n");
    fprintf(pF, "The unsorted goat\n");

    fclose(pF);
    return 0;

}