#include <string.h>

int
_strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] == s2[a]; a++)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
		{
			return (0);
		}
	}
	return (s1[a] - s2[a]);
}
