#include <stdio.h>
#include <string.h>
/* compilation : gcc -Wall -pedantic -std=c99 -o exo3c exo_3.c */

int string_search_chr(const char *token, char s);
char *string_remove_chr(char *str, const char *bad);
char *string_replace_chr(char *str, const char *rep);

/* search for character 's' */
int string_search_chr(const char *token, char s)
{
    if (!token || s == '\0')
        return 0;

    for (; *token; token++)
        if (*token == s)
            return 1;

    return 0;
}

char *string_remove_chr(char *str, const char *bad)
{
    char *src = str, *dst = str;

    /* validate input */
    if (!(str && bad))
        return NULL;

    while (*src)
        if (string_search_chr(bad, *src))
            src++;
        else
            *dst++ = *src++; /* assign first, then incement */

    *dst = '\0';
    return str;
}

char *string_replace_chr(char *str, const char *rep)
{
    char *src = str, *dst = str;

    /* validate input */
    if (!(str && rep))
        return NULL;

    while (*src)
        if (string_search_chr(rep, *src))
        {
            *dst = ' ';
            dst++;
            src++;
        }

        else
            *dst++ = *src++; /* assign first, then incement */

    *dst = '\0';
    return str;
}

int main()
{
    char s[100]; //= "this is a trial, string to test the function.";

    const char *bad = " .";
    const char *replace = ",!;";
    printf("saisir votre phrase: ");
    fgets(s, 100, stdin);
    string_remove_chr(s, bad);
    printf("%s", string_replace_chr(s, replace));
}