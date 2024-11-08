#include <stdio.h>

int main(){

    int isAdult = 0;
    int isPAUstudent = 0;

    if(isAdult == 1 || isPAUstudent == 1){  // && is exclusive OR, meaning that only values 11 and 00 give false whilst || is inclusive OR, meaning only value 00 is false(like the normal OR)
        printf("You can get free lunch\n");
    }else {
        printf("No free lunch for you\n");
    }
        

    return 0;
}