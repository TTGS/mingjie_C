#include <stdio.h>
 
void rev_string(char s[][128], int n) {
	int i=0, j=0,k = 0, temp;
	
	for (i = 0; i < n; i++){
//取到每个i里的j长度，这里的i长度从n里过来了。		 
	while(s[i][j]) {
		j++; 						 
	}
	for(k = 0; k < j/2; a++){		 
		temp = s[i][a];
		s[i][k] = s[i][j - k - 1];
		s[i][j - k -1] = temp;
	}
}
 
}
 
int main (void)
{
	int n = 3, i;
	char s[][128] = {"sec", "abc","cartman"};
	
	rev_string(s,n);
	
	for(i = 0;i < n; i++)
		printf("%s\n",s[i]);
		
	return 0;
} 
