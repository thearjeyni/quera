#include <stdio.h>

int main()
{
    int a,x=1,b;


    scanf ("%d",&a);
       while (a>x+1){
        x++;
        b=a%x;
        if (b==0){
            printf ("Is not prime number.");
            break;
         }
         }
   /*     do {
        x++;
        b=a%x;
        printf ("%d",b);
        if (b==0){
            printf ("Is not prime number.");
        }
        }
        while (a>x-1);   */
        if (b!=0){
        printf ("Is prime number.");
        }
}
