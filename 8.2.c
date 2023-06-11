

#include "8.2.h"


int vvod2(){
    int total_str, i;
    printf("Enter number of strings: ");
    scanf("%d", &total_str);

    char** arr = (char**)malloc(total_str * sizeof(char*));

    for (i = 0; i < total_str; i++) {
        printf("Enter string %d: ", i + 1);
        char buffer[100];
        scanf("%s", buffer);
        arr[i] = strdup(buffer);
    }

    shell_sort(arr, total_str);

    printf("\nSorted array:\n");
    for (i = 0; i < total_str; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }

    free(arr);

}