#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct wordANDcount
{
    char *word;
    int frequency;
} array[100];

int compare(const void *input1, const void *input2)
{
    struct wordANDcount *w1 = (struct wordANDcount *)input1;
    struct wordANDcount *w2 = (struct wordANDcount *)input2;

    if (strcmp(w1->word, w2->word) > 0)
        return 1;
    else if (strcmp(w1->word, w2->word) < 0)
        return -1;
    return 0;
}

int isPresentIn(struct wordANDcount *w1, char *string, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (strcmp(w1[i].word, string) == 0)
            return i;
    }

    return -1;
}

int main()
{
    char *string = (char *)malloc(sizeof(char) * 600);

    if (string == NULL)
    {
        printf("Malloc Failed !");
        return 0;
    }

    int wordCount = -1;
    printf("\nEnter the sentence: ");
    scanf("%[^\n]s", string);

    char delim[2] = " ";
    char *token;

    token = strtok(string, delim);
    array[++wordCount].word = malloc(sizeof(token));
    if (array[wordCount].word == NULL)
    {
        printf("Malloc Failed !");
        return 0;
    }
    strcpy(array[wordCount].word, token);
    array[wordCount].frequency = 1;

    // printf("Hello");

    while (token != NULL)
    {
        char *token;
        token = strtok(NULL, delim);

        if (token != NULL)
        {
            // printf("11%s11", token);

            int temp = isPresentIn(array, token, wordCount + 1);
            if (temp == -1)
            {
                array[++wordCount].word = malloc(sizeof(token));
                if (array[wordCount].word == NULL)
                {
                    printf("Malloc Failed !");
                    return 0;
                }
                strcpy(array[wordCount].word, token);
                array[wordCount].frequency = 1;
            }
            else
            {
                array[temp].frequency++;
            }
        }
        else
        {
            break;
        }
    }

    qsort(array, wordCount + 1, sizeof(struct wordANDcount), compare);

    for (size_t i = 0; i < wordCount + 1; i++)
    {
        printf("%s : %d\n", array[i].word, array[i].frequency);
    }

    free(string);
}