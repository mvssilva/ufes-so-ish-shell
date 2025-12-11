#include <stdlib.h>
#include <stdio.h>
#include "io.h"

int main (){

    int total_command = 0;
    CommandLine * buffer = construct();
    while (1)
    {   
        if (total_command == MAX_BUFFER) 
            break; 

        printf("lsh> ");
        read_line(buffer, &total_command);
    }

    //for(int i = 5; i > 0; i--){
    //    printf("[%s]\n", buffer[i-1].line);
    //}
}