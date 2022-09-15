#includ "main.h"

/**
<<<<<<< HEAD
* print_alphabet
*/

void print_alphabet(void)
{
	int j;

	for (j = 0; j <= 'z'; j++)
	{
		_putchar(j);
=======
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
>>>>>>> 1986bcbe8478baab99fd85d63da8e623987a6302
	}
	_putchar('\n');
}
