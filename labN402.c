#include<stdio.h>
#include<string.h>
char* find_space(char *s);
int main(){
	char str[128],c;
	char *pStr;
	int i ;
  printf("Enter: ");
  fgets(str,128,stdin);
  printf("Char: ");
  scanf(" %c",&c);
  printf("= ");
  for(i=0 ; i<strlen(str) ; i++){
   pStr = find_space(&str[i]);
  if(pStr == NULL){
  	printf("%c",str[i]);
  }
  else 
    printf("%c",c);
 }
 return 0;
}

char* find_space(char *s){
  	if( *s == ' '){
  		return s;
	  }
	 else 
	    return NULL;  
}
