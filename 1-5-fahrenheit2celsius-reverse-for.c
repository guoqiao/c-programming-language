#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	int fahrenheit;

	printf("  F      C\n");
	for (fahrenheit=LOWER; fahrenheit<=UPPER; fahrenheit+=STEP) {
		printf("%3d %6.1f\n", fahrenheit, 5.0*(fahrenheit-32.0)/9.0);
	}
}
