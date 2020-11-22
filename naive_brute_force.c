//naive brute force approach to string matching prolem

#include <stdio.h>
#include <string.h>

void nb_force(char* pattern, char* text)
{
    int lt = strlen(text);
    int lp = strlen(pattern);

    for (int i = 0; i <= lt - lp; i++) {
        int j;


        for (j = 0; j < lp; j++)
            if (text[i + j] != pattern[j])
                break;

        if (j == lp)
            printf("The match has been found at %d\n", i);
    }
}

int main()
{
    char text[] = "SDU is the best university";
    char pattern[] = "best";
    nb_force(pattern, text);
    return 0;
}
