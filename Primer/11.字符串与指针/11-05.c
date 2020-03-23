#include <stdio.h>


int str_chnum(const char* s,int c) {

    int count  ;
        if (*s == c) {
            count=1;
        }
	else 
	{
		count=0;	
	}
    while (*s ++) {
        
        if (*s == c) {
            count++;
        }
        *s++;
    }
    return count;
    
}



int main() {
    char s[123] ;
    char c ;    
	printf("请输入字符串:");
	scanf("%s", s);
	printf("要计数的字符是：");
	scanf("%s", &c);

    
    printf("%d\n", str_chnum(s, c));
}
