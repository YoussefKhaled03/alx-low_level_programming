#include <stdio.h>
/**
* main - did this will work ?
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;
(void)argv;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
