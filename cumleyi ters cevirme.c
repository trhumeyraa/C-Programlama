#include <stdio.h>
#include <string.h>

int main(){
  char metin[1000] = "";

  fprintf(stdout, "write the sentence : ");
  gets(metin);

  fprintf(stdout, "%s\n", strrev(metin));


}
