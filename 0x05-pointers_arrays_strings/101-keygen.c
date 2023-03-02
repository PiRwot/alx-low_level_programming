#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main body
 * Return: All good
*/

int main(void)
{
	int myrand; /*varaible for the random number to be generated*/
	int count;  /*counter variable to determine the iteration times*/
	int total; /*this is the variable to hold the total number of character generated from disassemblying the checksum function*/

	srand(time(NULL)); /*ensuring no repetition between runs*/
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 127); /*the remainder of rand() function result divided by the highest ascii decimal char is stored to myrand*/
		printf("%c", myrand); /*myrand decimal number is printed as char*/
		total -= myrand; /*myrand is subtracted from the total*/
	}
	printf("%c", total); /*when total is less or equal to 122, the decimal character is printed*/

	return (0);
}
