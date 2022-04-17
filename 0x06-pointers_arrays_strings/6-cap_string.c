#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @string: pointer to a string
 *
 * Return: pointer to a converted string
 */

char *cap_string(char *string)
{
	int a, str, check;
	char lookup[] = ",;.!?(){}\n\t\" ";

	for (a = 0, check = 0; string[a] != '\0'; a++)
	{
		if (string[0] >= 97 && string[0 <= 122])
		{
			check = 1;
		}

		for (str = 0; lookup[str] != '\0'; str++)
		{
			if (lookup[str] == string[a])
				check = 1;
		}

		if (check)
		{
			if (string[a] >= 97 && string[a] <= 123)
			{
				string[a] -= 32;
				check = 0;
			}

			else if (string[a] >= 65 && string[a] <= 90)
				check = 0;
			else if (string[a] >= 48 && string[a] <= 57)
				check = 0;
		}
	}

	return (string);


}
