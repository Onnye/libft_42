#include <libft.h.h>

char *ft_itoa(int n) {
    int size = 1;
    int temp = n;

    // Calculer la taille de la chaîne nécessaire
    if (n <= 0) {
        size = 1;
        temp = -n;
    }

    while (temp != 0) {
        temp /= 10;
        size++;
    }

    // Allouer de la mémoire pour la chaîne
    char *str = (char *)malloc((size + 1) * sizeof(char));
    if (str == NULL) {
        return NULL;  // Échec de l'allocation
    }

    int i = size;

    // Utiliser une boucle while pour remplir la chaîne de caractères
    while (n != 0) {
        int digit = n % 10;
        str[i - 1] = '0' + digit;
        i--;
        n /= 10;
    }

    // Ajouter le caractère de fin de chaîne
    str[size] = '\0';

    return str;
}

int main() {
    int num = -12345;
    char *result = ft_itoa(num);

    if (result != NULL) {
        printf("Nombre : %d\nChaîne : %s\n", num, result);
        free(result);  // N'oubliez pas de libérer la mémoire allouée
    } else {
        printf("Échec de l'allocation mémoire\n");
    }

    return 0;
}
