//
//  FirstExercise#3.c
//  
//
//  Created by gia diaz on 2/26/23.
//

#include "FirstExercise#3.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main() {
    int status;
    int pid = fork();
    
    
    if(pid == 0){
        int pid1 = fork(); // creating child process
        if (pid1 == 0){//means there is a grandchild
            int pid2 = getpid(); //grandchild
            printf("I am the grandchild: %d\n", pid2);
        }
        else{ //no grandchild, only child
            int pid2 = getpid(); // child
            printf("I am the child: %d\n", pid2);
            
        }
    }
    else{ //no child, just parent
        int pid1 = getpid();
        printf("I am the parent: %d\n ", pid1);
    }
    
return 0;
    
}
