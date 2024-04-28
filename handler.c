#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void myHandler(int signal);

int main(){
    signal(SIGIO,&myHandler);
    signal(SIGINT,&myHandler);
    signal(SIGALRM,&myHandler);
    signal(SIGUSR1,&myHandler);
    signal(SIGUSR2,&myHandler);
    while(1){
      sleep(1);
      printf("procesando\n");
    }
    return 0;
}

/*
SIGINT ES 2
SIGALRM ES 14
SIGUSR1 ES 10
SIGUSR2 ES 12
*/
void myHandler(int signal){
    printf("NUmero de senal: %d\n",signal);
}