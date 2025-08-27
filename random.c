#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void rand_string(char *s, size_t size){
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";   //create a character set to choose from
    int i;  //loop variable

    srand ((unsigned)time(NULL));   //seed the random number generator

    for (i = 0; i < size; i++) {    //generate random string
        int key = rand() % (int)(sizeof(charset) - 1);
        s[i] = charset[key];
    }

    s[size] = '\0';  //null terminate the string
}

