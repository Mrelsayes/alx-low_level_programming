#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: apointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int h_len = 0, n_len = 0, ptr_flag = 0, correct = 0;

	for (; needle[n_len] != '\0'; n_len++)
	;
	int n_len_flag = n_len;

	for (; haystack[h_len] != '\0'; h_len++)
	{
		for (n_len = 0; needle[n_len] != '\0'; n_len++)
		{
			if (haystack[h_len] != needle[n_len])
			ptr_flag = 0;
			if (haystack[h_len] == needle[n_len] && ptr_flag == 0)
			ptr_flag = h_len;
			if (haystack[h_len] == needle[n_len])
			correct++;
			if (correct == n_len_flag - 1)
			return (&haystack[ptr_flag]);
		}
	}
	return (NULL);
}
