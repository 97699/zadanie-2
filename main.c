#include <stdio.h>
#include "kwa.h"
#include "szes.h"

int main()
{
    int war=0;
    float a;
    while(war<=3)
    {
        printf("Co chcesz zrobic?\n");
        printf("1 pole kwadratu\n2 objetosc szescianu\n3 koniec\n\n");
        scanf("%d", &war);
        switch(war)
        {
            case 1:
            {
            printf("Podaj bok kwadratu:"); 
            scanf("%f",&a); Polkwa(a);
            break;
            }
            case 2: 
            {
            printf("Podaj krawedz szescianu:");
            scanf("%f",&a);
            Objszes(a);
            break;
            }
        }
    }

    return 0;
