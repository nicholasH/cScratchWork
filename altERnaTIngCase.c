#include <stdio.h>




char* to_alternating_case(const char *s) {
  for (int i = 0; i < strlen(s); i++){
      printf("%c\n",s[i] -39);



  }


  return ""; // TODO
}


int main()
{
   to_alternating_case("a");


   return 0;
}
