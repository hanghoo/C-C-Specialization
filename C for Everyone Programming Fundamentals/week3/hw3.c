#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 10000000 /* number of fct calls */
#define NCOLS 8   /* number of columns */
#define NLINES 3  /* number of lines */

int main(){
    int i, val;
    long begin, diff, end;

    begin = time(NULL); // initialize time(), record current time
    srand(time(NULL)); // random number generation
    printf("\nTIMING TEST: %d calls to rand()\n\n", NCALLS);
    for(i=1; i<=NCALLS; ++i){
        val = rand();
        if(i<=NCOLS*NLINES){
            printf("%7d", val);
            if(i%NCOLS==0)
                putchar('\n'); // print \n
        }
        else if(i==NCOLS*NLINES+1)
            printf("%7s\n\n","......"); // ???
    }
    end = time(NULL);
    diff = end - begin;
    printf("%s%ld\n%s%ld\n%s%ld\n%s%.10f\n\n",
    "         end time:", end,
    "        begin time:", begin,
    "       elapsed time:", diff,
    "time for each call:",(double)diff/NCALLS);
    return 0;
}