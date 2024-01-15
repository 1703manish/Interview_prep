#include<stdio.h>

int strlen(char *str2){
    
    int i;
    for(i=0; str2[i] != '\0'; i++);
    return i;
}
void revstr(char *str1){
        int temp,i,len;
        len = strlen(str1);
        
        for(i=0; i< len/2; i++){
            
            temp = str1[i];
            str1[i] = str1[len-i-1];
            str1[len-i-1] = temp;
        }
}

void main(){
    
    char str[50];
    
    printf("\nenter string here:\n");
    fgets(str,50,stdin);
    
    printf("Given string is: %s \n",str);
    
    revstr(str);
    
    printf("\nString after reversing is: %s ",str);
    
}
