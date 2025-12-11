    #include "io.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <err.h>
    #include <errno.h>
    #include <string.h>

    CommandLine *construct()
    {   
        CommandLine * x = (CommandLine *) malloc(MAX_BUFFER * sizeof(CommandLine));
        return x;
    }

    void read_line(CommandLine * buffer, int *count){
        char *line_buffer = NULL; 
        size_t size = 0;

        // leitura da linha
        int ret = getline(&line_buffer, &size, stdin);

        // tratamento de erros, tem que incluir a questao do ctrl c
        if (ret == -1) {
            free(line_buffer);
            return; 
        }

        // remove o \n
        line_buffer[strcspn(line_buffer, "\n")] = 0;
        
        // salva no buffer geral
        buffer[*count].line = line_buffer;
        (*count)++;
    }
