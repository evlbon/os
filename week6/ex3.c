#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>


void handler(int sig){
  printf("Programm was stopped by intercepting SIGINT signal.\n");
  exit(0);
}


int main(){
  signal(SIGINT, handler);
  while(1);
}