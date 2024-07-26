#include "mbed.h"
#include <cstdio>
/*
next term is the sum of the previous two terms.
The first two terms of the fibonacci sequence are 0 followed by 1.
The Fibonacci sequence is generated bot recursively and iteratively by the given code. 
The first terms are initialised in the main function, after which a loop outputs the next eight terms. 
The Fibonacci number for a particular point is calculated by the recursive function fib, which is then used by another loop to output the first ten terms. 
This shows how to build the Fibonacci sequence using two different approaches: recursive and iteration. 
*/
// main() runs in its own thread in the OS
int t_1 = 0;
int t_2 = 1;
int next_term = 0;
int max_terms = 10;
int fib(int n ){
    // inp: position of the fib sequence
    // out: the number in that sequence 
    if(n==0)
       return 0;
    if(n==1)
       return 1;
    else
        return(fib(n-1)+ fib(n-2));
}
int main()
{
   printf("Finbonachi series loop: %d, %d,", t_1, t_2);
   for(int i=2; i<max_terms; i++){
       next_term = t_1 + t_2;
       printf("%d,", next_term);
      t_1 = t_2;
       t_2 = next_term;
   }
   printf("\r\n");
    printf("Finbonachi series recursive:");
    for(int i=0; i<max_terms; i++){
        printf("%d,", fib(i));
    }
    printf("\r\n");
        
    while (true) {

    }
}
