#include <stdio.h>
#include <stdlib.h>


int main (){

    int x;

    scanf ("%d", &x);
    printf ("%d\n", x);

    if (x <= 9){
        printf ("1 Digit");
    }
    else if (x <= 99){
        printf ("2 Digit");
    }
    else if (x <= 999){
        printf ("3 digit");
    }
    else {
        printf ("More than 3 digits");
    }


    return 0;
}
