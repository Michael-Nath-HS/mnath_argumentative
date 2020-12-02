#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
char **parse_args(char *line)
{
    // creates an array of strings that has a max length of 5
    char **args = malloc(sizeof(char *) * 5);
    char *token;
    char *p = strdup(line);
    // printf("%s\n", p);
    // token = strsep(&p, " ");
    // printf("%s\n", p);
    int i = 0;
    while (p)
    {
        token = strsep(&p, " ");
        args[i] = token;
        // strcpy(args[i], token);
        i++;
    }
    return args;
}

int main()
{
    char *line = "ls -a -l";
    char **args = parse_args(line);
    execvp(args[0], args);
    return 0;
}
