#include "main.h"
/**
*leet - encode into 1337speak
*@n: input string
*Return: pointer to the modified string
*/
char *leet(char *n)
{
int i, j;
char s1[] = "aAeEoOtTlL";
{
for (j = 0; j < 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}

