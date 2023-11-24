#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    if (s == NULL || f == NULL) {
        return NULL;
    }

    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }

    char *result = (char *)malloc(len + 1);

    if (result == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < len; i++) {
        result[i] = f(i, s[i]);
    }

    result[len] = '\0';

    return result;
}
