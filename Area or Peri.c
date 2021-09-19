#include <stdio.h>
#include <stdlib.h>

int main (){

     int L;
     int B;

     scanf ("%d", &L);
     scanf ("%d", &B);

     int Area = L * B;
     int Peri = L+L+B+B;

     printf ("%d\n", Area);
     printf ("%d", Peri);

     if (Area > Peri){
        printf ("Area ");
        printf ("%d", Area);

     }
     else {
        printf ("Peri ");
        printf ("%d", Peri);
     }


    return 0;

}
