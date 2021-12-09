
// NAME              : Akshat Kushawah
// Colleg RollNo.    : 20201403
// University RollNO : 20020570004

// SET - 1 
// OPERATING SYSTEM Practical -- 2

// C++ program to implement fork where parent and 
// child run different codes and parent process should 
// be executed first

// Description:
// Fork system call is used for creating a new process (child process),
// which runs concurrently with the process that makes the fork() call (parent process).
// After a new child process is created, both processes will execute 
// the next instruction following the fork() system call.
// It takes no parameters and returns an integer value. 

It takes no parameters and returns an integer value.



#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

void forkexample() 
{ 

    // child process because return value zero 

    if (fork() == 0) 

        printf("Hello from Child!\n"); 

  

    // parent process because return value non-zero. 

    else

        printf("Hello from Parent!\n"); 
} 

int main() 
{ 

    forkexample(); 

    return 0; 
}