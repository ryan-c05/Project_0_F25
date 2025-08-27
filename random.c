#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void rand_string(char *s, size_t size){
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i; 

    srand ((unsigned)time(NULL));

    for (i = 0; i < size; i++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        s[i] = charset[key];
    }

    s[size] = '\0';
}

