#include<stdio.h>
/**
*main-Entry Point
*return: 0 if successful
*/
int main(void) 
{
int intType;
float floatType;
char charType;
long int longintType;
long long int longlongintType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of longint: %zu byte\n", sizeof(longintType));
printf("Size of longlongint: %zu byte\n", sizeof(longlongintType));

return (0);
}
