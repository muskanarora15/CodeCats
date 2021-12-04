#include <stdio.h>
#include <stdlib.h>
static int convert(char c)
{
    switch(c) {
    case 'I':  
        return 1;  
    case 'V':  
        return 5;  
    case 'X':  
        return 10;  
    case 'L':  
        return 50;  
    case 'C':  
        return 100;  
    case 'D':  
        return 500;  
    case 'M':  
        return 1000;  
    default:
        return 0;
    }
}

int roman_to_int (char *s)
{
    int i, res = convert(s[0]);

    for (i = 1; s[i] != '\0'; i++) {
        int num1 = convert(s[i - 1]);
        int num2 = convert(s[i]);
        if (num1 < num2) {
            res = res - num1 + (num2 - num1);
        } else {
            res += num2;
        }
    }
    return res;
}
int main(void)
 {
  char *str1 = "XIV";
    printf("Original Roman number: %s", str1);
    printf("\nRoman to integer: %d", convert(str1));
    return 0;
}