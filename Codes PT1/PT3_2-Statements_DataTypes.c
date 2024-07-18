#include <stdio.h>
#include <string.h>

void clearInputBuffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void displayCentered_ByCol(int index, char chara)
{
    // Turn index into string
    char str1[20];
    sprintf(str1, "%d", index);


    // Calculate total spaces each side
    int stringLen = strlen(str1);
    if (stringLen > 6) stringLen = 6;
    int spaces = 6 - stringLen;

    int L_space = spaces / 2;
    int R_space = spaces - L_space;
    if (L_space < 0) L_space = 0;
    if (R_space < 0) R_space = 0;


    // Print index first
    printf("|");
    for (int i = 0; i < L_space; i++) printf(" ");
    for (int i = 0; i < stringLen; i++) printf("%c", str1[i]);
    for (int i = 0; i < R_space; i++) printf(" ");
    printf("| %c |", chara);
}

int main()
{
    int col = (128*2) / 20;
    char chara = -128;
    int index = -128;

    for (int i = 0; (i < 20) && (chara < 127); i++)
    {
        for (int j = 0; j < col; j++)
        {
            displayCentered_ByCol(index++, chara++);
        }
        printf("\n");
    }

    getchar();
    return 0;
}