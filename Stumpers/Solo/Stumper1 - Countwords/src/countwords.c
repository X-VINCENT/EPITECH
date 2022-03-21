/*
** EPITECH PROJECT, 2022
** Countwords File for Countwords
** File description:
** Xavier VINCENT
*/

#include "countwords.h"

int countwords(const char *str)
{
    char **stored_words = NULL;

    if (!str)
        return 84;
    stored_words = store_words(str);
    for (int i = 0; stored_words[i] != NULL; i += 1)
        printf("%s\n", stored_words[i]);
    return 0;
}

int my_strlen(const char *str)
{
    int count = 0;

    if (!str)
        return 0;
    for (int i = 0; str[i] != '\0'; i += 1)
        count += 1;
    return count;
}

char **store_words(const char *str)
{
    char **stored_words = NULL;
    char *tmp_word = NULL;
    int i = 0;
    int j = 0;

    if (!str)
        return NULL;
    stored_words = malloc(sizeof(char) * my_strlen(str) + 1);
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t')
            i += 1;
        else {
            tmp_word = get_word(str, i);
            i += my_strlen(tmp_word);
            stored_words[j] = malloc(sizeof(char) * my_strlen(tmp_word));
            my_strcpy(stored_words[j], tmp_word);
            tmp_word = '\0';
            j += 1;
        }
    }
    stored_words[j] = 0;
    return stored_words;
}

char *get_word(const char *str, int i)
{
    char *word = NULL;
    int count = 0;
    int tmp = i;
    int j = 0;

    if (!str)
        return NULL;
    while (!(str[tmp] == ' ' || str[tmp] == '\t' ||
        str[tmp] == '\0')) {
        count += 1;
        tmp += 1;
    }
    word = malloc(sizeof(char) * count + 1);
    while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\0')) {
        word[j] = str[i];
        j += 1;
        i += 1;
    }
    word[j] = '\0';
    return word;
}
