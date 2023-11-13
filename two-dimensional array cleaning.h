//
// Created by dzevi on 13.11.2023.
//

#ifndef TWO_DIMENSIONAL_ARRAY_CLEANING_TWO_DIMENSIONAL_ARRAY_CLEANING_H
#define TWO_DIMENSIONAL_ARRAY_CLEANING_TWO_DIMENSIONAL_ARRAY_CLEANING_H

#endif //TWO_DIMENSIONAL_ARRAY_CLEANING_TWO_DIMENSIONAL_ARRAY_CLEANING_H

void char_array_clean(char **array, int size_1, int size_2) {
    for (int i = 0; i < size_1; i++) {
        for (int j = 0; j < size_2; j++) {
            array[i][j] = '\0';
        }
    }
}
