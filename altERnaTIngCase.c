#include <stdio.h>
char* to_alternating_case(const char *s) {
  char turnString[strlen(s)];

  for (int i = 0; i < strlen(s); i++){
    if(s[i]>96 && s[i]<123 ){
      //printf("%c\n",s[i] -32);
      turnString[i] = s[i] -32;
    }
    else if(s[i]>64 && s[i]<91 ){
      //printf("%c\n",s[i] +32);
      turnString[i] = s[i] +32;
    }
    else{
      //printf("%c\n",s[i]);
      turnString[i] = s[i];
    }
  }

  printf("%s\n",turnString);
  printf("%s\n","HELLO WORLD");


  return turnString; // TODO
}


int main()
{
   printf("%s\n", to_alternating_case("hello world"));
   printf("%s\n", to_alternating_case("hello world") == "HELLO WORLD");


   return 0;
}
