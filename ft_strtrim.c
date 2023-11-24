#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	char *trimmed;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);

    // Trim from the beginning
    while (s1[start] && strchr(set, s1[start]))
        start++;

    // Trim from the end
    while (end > start && strchr(set, s1[end - 1]))
        end--;

    // Allocate memory for the trimmed string
    trimmed = (char *)malloc(end - start + 1);

    if (trimmed == NULL)
        return (NULL);

    // Copy the trimmed string
    memcpy(trimmed, s1 + start, end - start);
    trimmed[end - start] = '\0';

    return (trimmed);
}
