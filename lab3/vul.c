#include <stdio.h>

void myprint()
{
	char input[100];
	int target = 0x11111111;

	printf("address of variable target: %x\n", (unsigned) &target);   //prints out the address of the variable target
	printf("Data at variable target before change: 0x%x\n", target);

	printf("Please enter a string as your input: ");
	fgets(input, sizeof(input)-1, stdin);

	printf(input);
	printf("Data at variable target after change: 0x%x\n", target);
}

void main() { 
	myprint(); 
}

