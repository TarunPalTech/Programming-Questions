// 8. Write a function to make first character of each word of the string capital.


void makeFirstWordCapital(char str[]){
    int flag=1;
    for(int i=0;str[i];i++){
        if(isalpha(str[i]) && flag){
            str[i]=toupper(str[i]);
            flag=0;
        }else if(isspace(str[i])){
            flag=1;
        }
    }
}