
#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
float a,min;
i=0;
 puts("Saisir le reel");
    scanf("%f",&min);
 for (i=0;i<9;i=i+1)
    {
    puts("Saisir le reel");
    scanf("%f",&a);
    if(a<min)
        {
        min=a;
        }
    }
    printf("Le minimum de la suite est %f",min);
}
