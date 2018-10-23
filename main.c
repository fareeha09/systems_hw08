#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int main() {
	int i= sieve(1);
	printf("%d\n", i);
	int i= sieve(10);
	printf("%d\n", i);
	int i= sieve(1000);
	printf("%d\n", i);
	int i= sieve(10000);
	printf("%d\n", i);
}