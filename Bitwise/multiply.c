#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[]){
	// check args
	if (argc < 3){
		printf("Usage: %s number1 number2\n", argv[0]);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int result = a * b;
	printf("%d x %d = %d\n", a, b, result);

	// Use bitwise right shift to divide number by power of 2
    printf("%d / 2) = %d\n", a, (a >> 1));
    // Use bitwise left shift to multiply  number by power of 2
    printf("%d * 2) = %d\n", a, (a << 1));

    // Check even odd
    if (b & 1)
        printf("%d is an ODD number.\n", b);
    else
        printf("%d is an EVEN number.\n", b);

    int min = (b ^ (a ^ b) & -(a < b));
    int max = (a ^ (a ^ b) & -(a < b));

    printf("Minimum(10, 20) => %d\n", min);
    printf("Maximum(10, 20) => %d\n", max);

}