#include <stdio.h>
#include <string.h>

void clearInputBuffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void display_ByCol(int index, char chara)
{
    char str[20];
    sprintf(str, "%d", index);

    printf("|");
    int spaces = 6 - strlen(str);

    int L_spaces = spaces / 2;
    int R_space = spaces - L_spaces;
}

int main()
{
    char chara1 = -128;
    int iter = -128;
    int columns = (128*2) / 10;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < )
    }
    //clearInputBuffer();
    getchar();
}