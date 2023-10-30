/*
** ft_split
** Allocates and returns an array of strings obtained
** by splitting ’s’ using the character ’c’ as a delimiter
*/

#include "libft.h"

int word_count(char *str, char c)
{
    int words;
    int i;

    words = 0;
    i = 0;
    if (str[0] != c && str[0] != '\0')
        words++;
    while (str[i] != '\0')
    {
        if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
        {
            words++;
        }
        i++;
    }
    return (words);
}

char    *word_add(char *str, char c)
{
    char    *word;
    int     len;
    int     i;

    len = 0;
    while (str[len] != c && str[len] != '\0')
        len++;
    word = malloc(sizeof(char) * (len + 1));
    if (word == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char    **array;
    char    *str;
    int     i;
    int     j;

    str = (char *) s;
    array = malloc(sizeof(char *) * (word_count(str, c) + 1));
    if (array == NULL)
        return (NULL);
    i = 0;
    j = 0;
    if (str[i] != '\0' && str[i] != c)
    {
        array[j] = word_add(&str[i], c);
        j++;
    }
    while (str[i] != '\0')
    {
        if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
        {
            array[j] = word_add((&str[i] + 1), c);
            j++;
        }
        i++;
    }
    array[j] = NULL;
    return (array);
}

/* 
#include <stdio.h>

int main() {
    char *s = "Hello,World!,42";
    char c = ',';
    char **result = ft_split(s, c);
    int i = 0;

    if (result != NULL) {
        while (result[i] != NULL)
        {
            printf("%s\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    } else {
        printf("ft_split returned NULL\n");
    }

    return 0;
}
 */