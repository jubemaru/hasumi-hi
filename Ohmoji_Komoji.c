#include <stdio.h>

int main(void)
{

    int diff;
    char large; //大文字
    char small; //小文字
    
    printf("Please enter lowercase letters.>>>");
    scanf("%c", &small);
    diff = 'A'-'a';     //'A'と'a'との文字の差
    large = small+diff; //小文字に変換
    
    printf("Lowercase letters are (%c), uppercase letters are (%c\n)",small,large);
    
    return 0;
}





