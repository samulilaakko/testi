#include <stdio.h>
#include <ctype.h>

int count_alpha(const char *str){
    int n=0;
    while (*str){
        if (isalpha(*str)){
            // *str = *str+1;
           // str++;
            n++;
        }
        str++;
        /*
        else{
            *str=*str+1;
            str++;
        }
        */
    }
    return n;
}

int main(){
    int n;
    const char message[] = "It is raining.";
    const char* c = &message[1];
    printf("%c\n", *c);
    n = count_alpha(c);
    printf("Aakkosten lukumäärä: %d", n);
}