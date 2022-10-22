#include<stdio.h>
/**
*main-Entry Point
*return: 0 if successful
*/
int main(void) 
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of char: %zu byte\n", sizeof(charType)); 
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of longint: %zu byte\n", sizeof(longintType));
printf("Size of longlongint: %zu byte\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));


return (0);
}
