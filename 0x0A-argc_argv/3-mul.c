#include <stdio.h>
#include <stdlib.h>
/**
* main - mul
* @argc: number of parameters
* @argv: parameters
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc == 3)
{
int x = atoi(argv[1]);
int y = atoi(argv[2]);
int sum = x * y;
printf("%d\n", sum);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
