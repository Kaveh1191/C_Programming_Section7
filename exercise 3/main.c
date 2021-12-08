/*Name:Kaveh Masoudinia
Section 7 Exercise 3
Date:12/07/2021(1400/09/16)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STRSIZ 30
#define MAXAPP 50

int alpha_first(char *list[], int min_sub, int max_sub);
void select_sort_str(char *list[], int * numbers[], int n);

int main()

{
    char applicants[MAXAPP][STRSIZ];
    int ages[MAXAPP];
    char *alpha[MAXAPP];
    int *numeric[MAXAPP];
    int num_app, i, j;
    char one_char;

    printf("Enter number of people (0 . . %d)\n> ", MAXAPP);
    scanf("%d", &num_app);
    for (i = 0; i < num_app; i++)
    {
        scanf("%c", &one_char);
        printf("\nEnter name %d (lastname, firstname): ", i + 1);
        j = 0;
        while ((one_char = (char)getchar()) != '\n' && j < STRSIZ)
            applicants[i][j++] = one_char;
        applicants[i][j] = '\0';
        printf("Enter age %d: ", (i + 1));
        scanf("%d", &ages[i]);

        alpha[i] = (char*)malloc(strlen(applicants[i]) * sizeof(char));

        strcpy(alpha[i], applicants[i]);
        numeric[i] = &ages[i];
    }
    printf("\n\nOriginal list");
    printf("\n---------------------------\n");

    for (i = 0; i < num_app; ++i)
        printf("%-30s%2d\n", applicants[i], ages[i]);

    select_sort_str(alpha, numeric, num_app);

    printf("\n\nAlphabetized list");
    printf("\n---------------------------\n");

    for (i = 0; i < num_app; ++i)
        printf("%-30s%2d\n", alpha[i], *numeric[i]);
    return 0;
}
int alpha_first(char* list[], int min_sub, int max_sub)
{
    int first, i;
    first = min_sub;
    for (i = min_sub + 1; i <= max_sub; ++i)

        if (strcmp(list[i], list[first]) < 0)

            first = i;

    return (first);
}

void select_sort_str(char* list[], int* numbers[], int n)
{
    int fill, index_of_min;
    char* temp;
    int* tempNum;
    for (fill = 0; fill < n - 1; ++fill)
    {
        index_of_min = alpha_first(list, fill, n - 1);

        if (index_of_min != fill)

        {
            temp = (char*)malloc(strlen(list[fill]) * sizeof(char));

            strcpy(temp, list[index_of_min]);

            strcpy(list[index_of_min], list[fill]);

            strcpy(list[fill], temp);

            tempNum = numbers[index_of_min];

            numbers[index_of_min] = numbers[fill];

            numbers[fill] = tempNum;
        }
    }
}