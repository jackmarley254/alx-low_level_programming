#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print alphabet letter in all cases followed by new line
 *
 * Return: return 0
 *
 * FUNCTIONALITY *
 *
 * 1. The for loop is used to iterate through the lowercase letters
 *
 * 2. The putchar() function is used to print the letter.
 *
 * 3. The if statement is used to check if the letter is z.
 *
 * 4. If the letter is z, then the letter is set to A.
 *
 * 5. The putchar() function is used to print the letter.
 *
 * 6. The break statement is used to break out of the for loop.
 *
 * 7. The putchar() function is used to print a newline.
 *
 * 8. The return statement is used to return 0.
 *
 * Time Complexity: O(n)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			for (; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
