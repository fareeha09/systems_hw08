#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime){
	int cur_num = 2;
	int num_primes = 0;
	//int ind = (int)(targetPrime * log(targetPrime) * 1.15); //it says undefined reference to log even though i clearly have math.h
	int ind = 50,000;
	int * array = malloc(sizeof(int) *ind);
	
	for (int j=0; j < ind; j++){ //initializes each pointer to 0
		array[j]=0;
		} 
	
	while (num_primes != targetPrime){ //while the nth prime is not reached
		if (array[cur_num]){
			cur_num++; //if the value exists, go onto next number
		}
		else {
			for (int i=1; i<(ind/i); i++){
				if (array[i]){
					array[i]=1; //marks as composite
				}
			num_primes++;
			cur_num++;
			}
		}
	} return cur_num  ;
}

