#include "main.h"

/**
* split_env - function that tokenizes the path
* @path: path to be tokenize
* Return: argv pointer
*/

char **split_env(char *path)
{
int path_size = 1024;
char *token = NULL;
char **argv = NULL;
int index = 0;

argv = malloc(path_size * sizeof(char *));

if (argv == NULL)
{
perror("Error : allocation memory");
return (0);
}
token = strtok(path, ":");

while (token != NULL)
{
argv[index] = token;
index++;
token = strtok(NULL, ":");
}
argv[index] = NULL;

return (argv);
}

/**
* get_env - function that gets the path
* @command: command entered by the user
*
* Return: NULL.
*/

char *get_env(char *command)
{
int index, size;
extern char **environ;
size = strlen(command);

for (index = 0; environ[index]; index++)
{
if (strncmp(environ[index], command, size) == 0)
return (environ[index] + size + 1);
}
return (NULL);
}

/**
* f_read - function that reads the user input
*
* Return: line if success or NULL if it fails
*/

char *f_read(void)
{
char *line = NULL;
size_t size = 0;
ssize_t length = 0;

length = getline(&line, &size, stdin);

if (length == -1 || _strcmp(line, "exit\n") == 0)
{
free(line);
exit(0);
}
if (length == -1 || _strcmp(line, "env\n") == 0)
{
get_env();
}
if (line[length - 1] == '\n' && line[1] != '\0')
{
line[length - 1] = '\0';
}
return (line);
}
