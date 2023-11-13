//
// Created by dzevi on 13.11.2023.
//

#ifndef TWO_DIMENSIONAL_ARRAY_CLEANING_TWO_DIMENSIONAL_ARRAY_CLEANING_1000_H
#define TWO_DIMENSIONAL_ARRAY_CLEANING_TWO_DIMENSIONAL_ARRAY_CLEANING_1000_H

#endif //TWO_DIMENSIONAL_ARRAY_CLEANING_TWO_DIMENSIONAL_ARRAY_CLEANING_1000_H

void char_array_clean_1000(char array[1000][1000]) {
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            array[i][j] = '\0';
        }
    }
}
