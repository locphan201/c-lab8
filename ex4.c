#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

char* substring(char str[], int start, int length)
{
    char* sub = malloc(SIZE);
    for (int i = 0; i < length; i++)
    {
        sub[i] = str[start+i];
    }
    sub[start+length-1] = '\0';
    return sub;
}

int length(char str[])
{
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}

int search(char text[], char keyword[])
{
    if (text[0] == '\0') return 0;  
    if (text[0] != '\0' && keyword[0] == '\0') return 1;
    if (length(text) < length(keyword)) return 0;

    for (int i = 0; i < length(text)-length(keyword); i++)
    {
        char *sub = substring(text, i, length(keyword));
        printf("%s\n", sub);
        if (sub == keyword)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char text[SIZE], keyword[SIZE];
    printf("Enter a text: ");
    scanf("%[^\n]s", text);
    printf("Enter a keyword: ");
    scanf(" %[^\n]s", keyword);

    if (search(text, keyword))
    {
        printf("The keyword is found.\n");
    }
    else
    {
        printf("The keyword is not found.\n");
    }

    return 0;
}