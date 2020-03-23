#include <stdio.h>


int str_chnum(const char* s,int c) {

    int cnt = 0;

    while (*s != '\0') {
        
        if (*s == c) {
            cnt++;
        }
        *s++;
    }
    return cnt;
    
}



int main() {
    char s[123] ;
    char c ;
    printf("要计数的字符是：");
    scanf("%c", &c);
    printf("请输入字符串:");
    scanf("%s",s);
    
    printf("%d\n", str_chnum(s, c));
}
