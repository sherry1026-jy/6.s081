#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"



int
main(int argc, char *argv[]){
    
    int seconds;

    if(argc<1){
        fprintf(2, "usage: sleep<seconds>\n");
        exit(1);
    }
    seconds = atoi(argv[1]);
    sleep(seconds);
    exit(0);

}
