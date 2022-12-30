# Project Description
Writing a simple UNIX command interpreter.

## Output
* Unless specified otherwise, your program must have the exact same output as `sh` (`/bin/sh`) as well as the exact same error output.
* The only difference is when you print an error, the name of the program must be equivalent to your `argv[0]` (See below)

Example of error with `sh`:
```sh
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

Same error with your program `hsh`:
```hsh
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
## Compilation
Your shell will be compiled this way:
```hsh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g *.c -o hsh
```
But also in non-interactive mode:
```hsh
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

Or also test to realize an analysis with valgrind tool
```
valgrind ./hsh
```

## man_1_simple_shell

Man page for the Simple man_1_simple_shell

To access manpage format:
```
man ./man_1_simple_shell
```

## Authors
Othmane Bengharbi [othmane901](https://github.com/othmane901)