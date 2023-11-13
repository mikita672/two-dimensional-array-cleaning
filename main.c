//
// Created by dzevi on 13.11.2023.
//

#include <stdio.h>
#include "two-dimensional array cleaning 1000.h"
#include "two-dimensional array cleaning.h"

int main()
{
    char array[1000][1000];
    char_array_clean_1000(array);
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            printf("%c", array[i][j]);
        }
    }

    return 0;
}
