#include <stdio.h>
#include <string.h>

int busca_char(char s, char *t);

int main(){

    int i, n, d;
    scanf("%d", &n);
    char str[503];
    char c;

    for(i=0; i<n; i++){
        scanf("%*c");
        scanf("%c", &c);
        //scanf("%*c");
        //scanf("%[^\n]", str);
        
       printf("%c\n", c);
        
    }

    return 0;
}

int busca_char(char s, char *t){
    int i;
    for(i=0; i<strlen(t); i++){
        if(t[i]==s) return i;
    }
    if(i==strlen(t)) return -1;
}

