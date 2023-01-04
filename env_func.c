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
* print_env - prints the environment variable
*/

void print_env(void)
{
int index = 0;
int size = 0;
extern char **environ;

while (environ[index] != NULL)
{
size = strlen(environ[index]);
write(1, environ[index], size);
write(1, "\n", 1);
index++;
}
}
