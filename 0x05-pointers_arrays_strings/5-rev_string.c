#include "main.h"
/**
 * rev_string - raverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
int l, i;
char temp;

/*find string length without null char*/
for (l = 0; s[l] != '\0'; ++1)
;
/*swap the string by looping to half the string*/
for (i = 0; i < l / 2; i++)
{
temp = s[i];
s[i] = s[l - l - i]; /*-l because the array scarte from 0*/
s[l - l - i] = temp;
}
}
