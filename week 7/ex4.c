#include <stdlib.h>
#include <stdio.h>

void *rlloc(void *p, size_t size) {
  void *new = NULL;
  if(!size)
    new = malloc(size);
  if (p && !size)
    for(char *i=p; i<(char*)p+size; i++)
      *(char*)new = *(char*)i;
  if(p && size) free(p);
  return new;
}



int main(){
	
	return 0;
}