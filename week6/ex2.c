#include<stdio.h>
#include<unistd.h>

int main(){
  int p[2];
  pipe(p);
  pid_t pid = fork();



  if (pid == 0) {
    char s[100];
    close(p[1]);
    read(p[0], s, 100);
    printf("%s\n", s);
  } 

  else {
    char s[] = "text";
    close(p[0]);
    write(p[1], s, 100);
  }
}