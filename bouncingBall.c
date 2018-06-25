#include <stdio.h>
int main()
{
   // printf() displays the string inside quotation

   bouncingBall(3.0,0.66,1.5);
   return 0;
}

int bouncingBall(double h, double bounce, double window) {
    // your code;
    int r = 0;
    if(h > 0.0 && (bounce > 0.0 && bounce < 1.0) && window < h )
    {

      while(h>window){
        if( window < h){
          r++;
        }
        h = h * bounce;
        printf("%lf\n",h );
        if( window < h){
          r++;
        }
      }
      return r;

    }
    else{
      return -1;
    }



}
