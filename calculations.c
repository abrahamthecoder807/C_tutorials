#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "water";
    char b[] = "acid";
    char temp[12];

   strcpy(temp, a);
   strcpy(a, b);
   strcpy(a, temp);
 
    printf("a = %s\n", a);
    printf("b = %s", b);
}