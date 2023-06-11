
#include "vvod1.h"
int vvod1 () {
    char str[20] = "";
    char str2[20] = "";


    puts("enter string to search for:");
    scanf("%s", &str);
    puts("enter string to look for at the end:");
    scanf("%s", &str2);

    printf("%s\n\n\n", (strend(str, str2) ? "True" : "False"));

}