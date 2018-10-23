#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime){
	int cur_num = 1;
	int num_primes = 0;
	int ind = (int)(targetPrime * log(targetPrime) * 1.15); //it says undefined reference to log even though i clearly have math.h

	int * array = calloc(ind, sizeof(int) *ind);
	
	// for (int j=0; j < ind; j++){ //initializes each pointer to 0
		// array[j]=0;
		// } 
	
	while (num_primes != targetPrime){ //while the nth prime is not reached
		if (array[cur_num]){
			cur_num++; //if the value exists, go onto next number
		}
		else 
            num_primes++; //add one to the number of primes
			for (int i=2; i<(ind/i); i++){
				array[cur_num*i]=1; //marks as composite
				}
			
			cur_num++;
			}
		
	return cur_num  ;
}

int main() {
	int i= sieve(1);
	printf("%d\n", i);
	int j= sieve(10);
	printf("%d\n", j);
	int k= sieve(1000);
	printf("%d\n", k);
	int l= sieve(10000);
	printf("%d\n", l);
}

