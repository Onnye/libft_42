#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (*s)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char *get_next_word(char const **str, char delimiter)
{
    const char *word_start = *str;
    const char *word_end = *str;

    // Avancer jusqu'au début du prochain mot
    while (*word_start == delimiter)
        word_start++;

    // Trouver la fin du mot
    while (*word_end && *word_end != delimiter)
        word_end++;

    // Allouer de la mémoire pour le mot
    char *word = (char *)malloc(word_end - word_start + 1);
    if (!word)
        return NULL;

    // Copier le mot dans la nouvelle allocation
    int i = 0;
    while (word_start < word_end)
        word[i++] = *(word_start++);

    // Ajouter le caractère de fin de chaîne
    word[i] = '\0';

    // Mettre à jour la position du pointeur dans la chaîne
    *str = word_end;

    return word;
}

char **ft_split(char const *str, char delimiter)
{
    char **result;
    int word_count;
    int i;

    // Vérifier si la chaîne est NULL
    if (!str)
        return NULL;

    // Compter le nombre de mots dans la chaîne
    word_count = count_words(str, delimiter);

    // Allouer de la mémoire pour le tableau de mots
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return NULL;

    i = 0;
    // Remplir le tableau de mots en utilisant la fonction get_next_word
    while (i < word_count)
    {
        result[i] = get_next_word(&str, delimiter);
        if (!result[i])
        {
            // Libérer la mémoire si l'allocation échoue
            while (i >= 0)
	    {	--i;
                free(result[i]);
	    }
            free(result)
            return NULL;
        }
        i++;
    }

    // Terminer le tableau avec NULL
    result[i] = NULL;

    return result;
}

