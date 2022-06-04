#include<stdio.h>
#include<string.h>

int word(char str[]){                     //Word Counting
    int c=1;
    for(int i=0; i<strlen(str); i++){
        if(str[i]==' '){
            c++;
        }
    }
    return c;
}

int chart(char str[]){                     //Character Counting
    int c=0;
    for(int i=0; i<strlen(str); i++){
        c++;
    }
    return c;
}

int line(char str[]){                     //Lines Counting
    int c=1;
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='\n'){
            c++;
        }
    }
    return c;
}




void pal(char str[]){              //String Palindrome
    char new[50];
    strcpy(new,str);
    int c=0;

    for(int i=0; i<strlen(str); i++){
        if(str[i]!=str[strlen(str)-i-1]){
            c=1;
            break;      
        }
    }

    if(c){
        printf("Not a Palindrome.");
    }
    else{
        printf("Palindrome.");
    }

}

int main(){
    char str[50]="Hello baby\n How are you\n Fine ok";
   // printf("Enter : ");
   // gets(str);

    printf("Total Words : %d\n",word(str));
    printf("Total Characters : %d\n",chart(str));
    printf("Total Lines : %d\n",line(str));

   

    return 0;
}