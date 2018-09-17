#include<stdio.h>
void replace_space(char *s, char c);

int main(){
  char c;
  char things[128],*s ; 
  printf("Enter: ");
   gets(things);
  printf("Char: ");
   scanf(" %c",&c);
  s = things; 
  printf("= ");
  replace_space(s, c);
 return 0;
}

void replace_space(char *s, char c){
  while(*s != '\0'){
  	if( *s == ' ' ){
  		printf("%c",c);
	  } 
	else
       printf("%c",*s);
  *s++;
  }
}
