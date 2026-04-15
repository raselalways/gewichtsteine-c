#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int gewicht;

    printf("geben soe ein gewicht (0-127)ein: ");
    scanf("%d", &gewicht);

    printf("\nDie Steine:\n");

    if(gewicht>=64){
    printf("\n 64kg Stein\n");
    gewicht = gewicht-64;
    }

     if(gewicht>=32){
    printf("\n 32kg Stein\n");
    gewicht = gewicht-32;
    }

     if(gewicht>=16){
    printf("\n 16kg Stein\n");
    gewicht = gewicht-16;
    }
     if(gewicht>=8){
    printf("\n 8kg Stein\n");
    gewicht = gewicht-8;
    }
     if(gewicht>=4){
    printf("\n 4kg Stein\n");
    gewicht = gewicht-4;
    }
     if(gewicht>=2){
    printf("\n 2kg Stein\n");
    gewicht = gewicht-2;
    }
     if(gewicht>=1){
    printf("\n 1kg Stein\n");
    }
    return 0;
}
