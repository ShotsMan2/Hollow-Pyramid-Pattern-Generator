#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j,k,satir,m;

    satir=5;

    for(i=1;i<=satir;i++){
        for(k=1;k<=satir-i;k++){
            printf(" ");
        }
        if(i==1){
            printf("*");
        }
        else{
            printf("*");
            for(j=1;j<=2*i-3;j++){
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }
}
