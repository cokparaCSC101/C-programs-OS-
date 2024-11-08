#include <stdio.h>

int main(){

    int a;

    printf("What age are you?");

    scanf("%d", &a);

    
    if(a > 18){
        printf("You can Vote\n");
    }else {
        printf("You cannot vote\n");
    }

    return  0;
}