#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* generateString(char** words, int wordsSize, int* weights) {
    char* result = (char*)malloc((wordsSize + 1) * sizeof(char));

    for (int i = 0; i < wordsSize; i++) {
        int sum = 0;

        for (int j = 0; words[i][j] != '\0'; j++) {
            sum += weights[words[i][j] - 'a'];
        }

        int rem = sum % 26;
        result[i] = 'z' - rem;
    }

    result[wordsSize] = '\0';
    return result;
}

int main() {
    char* words[] = {"abcd", "def", "xyz"};
    int weights[26] = {
        5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2
    };

    char* ans = generateString(words, 3, weights);
    printf("%s\n", ans);  // rij

    free(ans);
    return 0;
}
