#if !defined(IO_H_)
#define IO_H_

#define MAX_BUFFER 5
#define MAX_ARGS 3
#define MAX_LINE 256

typedef struct {
    char *line;
}CommandLine;

CommandLine * construct();
void read_line(CommandLine *, int *);

#endif // IO_H_
