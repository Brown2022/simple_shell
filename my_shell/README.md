Holberton School robot Simple Shell
-----------------------------------
Synopsis
--------
This is a humble and simple implementation of a UNIX command line interpreter.
Description speech_balloon
Custom version UNIX command language interpreter built as a project for Holberton School. This mini shell reads commands from either interactive mode and non-interactive mode.

Requeriments 
------------
. Allowed editors: vi, vim, emacs

. Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

. All files should end with a new line

. Code should use the Betty style. it will be checked using [betty-style.pl]

 (https://github.com/holbertonschool/Betty/blob/master/betty-style\ .pl) and betty-doc.pl

. No more than 5 functions per file

. All your header files should be include guarded

. Use system calls only when you need to

. Write a README with the description of your project

. You should have an AUTHORS file at the root of your repository

List of allowed functions and system calls
-------------------------------------------
. access     (man 2 access)

. chdir       (man 2 chdir)

. close       (man 2 close)

. closedir (man 3 closedir)

. execve     (man 2 execve)

. exit         (man 3 exit)

. _exit       (man 2 _exit)

. fflush     (man 3 fflush)

. fork         (man 2 fork)

. free         (man 3 free)

. getcwd     (man 3 getcwd)

. getline   (man 3 getline)

. getpid     (man 2 getpid)

. isatty     (man 3 isatty)

. kill         (man 2 kill)

. malloc     (man 3 malloc)

. open         (man 2 open)

. opendir   (man 3 opendir)

. perror     (man 3 perror)

. read         (man 2 read)

. readdir   (man 3 readdir)

. signal     (man 2 signal)

. stat (__xstat) (man 2 stat)

. lstat (__lxstat) (man 2 lstat)

. fstat (__fxstat) (man 2 fstat)

. strtok     (man 3 strtok)

. wait         (man 2 wait)

. waitpid   (man 2 waitpid)

. wait3       (man 2 wait3)

. wait4       (man 2 wait4)

. write       (man 2 write)

Flowchart
---------
Below you can see all the process flow in general terms that was taken into account at the time of making the code.

https://user-images.githubusercontent.com/60367519/79517219-2adbc000-8013-11ea-9835-30bf7c59a41e.jpg


Quick start 
-----------
git clone https://github.com/Brown2022/simple-shell.git

Compilation 
-----------
Your shell will be compiled this way:

|gcc -Wall -Werror -Wextra -pedantic -std=gnu89  * .c hsh 
----------------------------------------------------------

List of functions
-----------------

|Function Name| Description|
|-------------|--------------|
|access| checks whether the calling process can access the file pathname|
|chdir| changes the current working directory of the calling process to the directory specified in path|
|close|  closes a file descriptor, so that it no longer refers to any file|
|closedir|  closes the directory stream associated with dirp|
|execve|  executes the program referred to by pathname|
|exit|  causes normal process termination and the least significant byte of status
|-exit|  terminates the calling process "immediately"|
|fflush|  flush a stream|
|fork|  create a child process|
|free|  Display amount of free and used memory in the system|
|getcwd|  return a null-terminated string containing an absolute pathname that is the current working directory|
|getline|  reads an entire line from stream|
|getpid|  returns the process ID (PID) of the calling process|
|isatty|  tests whether fd is an open file descriptor|
|kill|  send signal to a process|
|malloc|  allocates size bytes and returns a pointer to the allocated memory|
|open|  open and possibly create a file|
|opendir|  open a directory|
|perror|  print a system error message|
|read|  read from a file descriptor|
|readir|  read a directory|
|signal|  determines how the process behaves|
|stat|  get file status|
|istat|  get file status|
|lstat|  get file status|
|fstat|  get file status|
|strtok|  extract tokens from strings|
|wait|  wait for process to change state|
|waitpid|  wait for a child process to stop or terminate|
|wait3|  wait for a child process to stop or terminate|
|wait4|  wait for process to change state, BSD style
|write|  write to a file descriptor|
	
<h2>Resouces</h2>

- [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)

- [create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)

- [Technical Writing](https://intranet.alxswe.com/concepts/225)

General

- What is a dynamic library, how does it work, how to create one, and how to use it

- What is the environment variable $LD_LIBRARY_PATH and how to use it

- What are the differences between static and shared libraries

- Basic usage nm, ldd, ldconfig

<h2>Tasks</h2>

<h3>0. A library is not a luxury but one of the necessities of life</h3>

Create the dynamic library libdynamic.so containing all the functions listed below:

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your main.h file in your repository, containing at least all the prototypes of the above functions.

julien@ubuntu:~/0x18. Dynamic libraries$ ls -la lib*
-rwxrwxr-x 1 julien julien 13632 Jan  7 06:25 libdynamic.so
julien@ubuntu:~/0x18. Dynamic libraries$ nm -D libdynamic.so 
0000000000000a90 T _abs
0000000000000aa9 T _atoi
0000000000202048 B __bss_start
                 w __cxa_finalize
0000000000202048 D _edata
0000000000202050 B _end
00000000000011f8 T _fini
                 w __gmon_start__
0000000000000900 T _init
0000000000000bd7 T _isalpha
0000000000000c04 T _isdigit
0000000000000c25 T _islower
0000000000000c46 T _isupper
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
                 w _Jv_RegisterClasses
0000000000000c67 T _memcpy
0000000000000caa T _memset
0000000000000ce9 T _putchar
0000000000000d0e T _puts
0000000000000d4a T _strcat
0000000000000dcf T _strchr
0000000000000e21 T _strcmp
0000000000000e89 T _strcpy
0000000000000eeb T _strlen
0000000000000f15 T _strncat
0000000000000fa5 T _strncpy
0000000000001029 T _strpbrk
000000000000109d T _strspn
0000000000001176 T _strstr
                 U write
julien@ubuntu:~/0x18. Dynamic libraries$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x18. Dynamic libraries$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len 
    linux-vdso.so.1 =>  (0x00007fff5d1d2000)
    libdynamic.so => not found
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f74c6bb9000)
    /lib64/ld-linux-x86-64.so.2 (0x0000556be5b82000)
julien@ubuntu:~/0x18. Dynamic libraries$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len
    linux-vdso.so.1 =>  (0x00007fff41ae9000)
    libdynamic.so => ./libdynamic.so (0x00007fd4bf2d9000)
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fd4beef6000)
    /lib64/ld-linux-x86-64.so.2 (0x0000557566402000)
julien@ubuntu:~/0x18. Dynamic libraries$ ./len 
10
julien@ubuntu:~/0x18. Dynamic libraries$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x18-dynamic_libraries
File: libdynamic.so, main.h
     
1. Without libraries what have we? We have no past and no future

Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

julien@ubuntu:~/0x18. Dynamic libraries$ ls *.c
abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c
atoi.c  isdigit.c  isupper.c  memset.c  puts.c     strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c
julien@ubuntu:~/0x18. Dynamic libraries$ ./1-create_dynamic_lib.sh 
julien@ubuntu:~/0x18. Dynamic libraries$ nm -D --defined-only liball.so 
0000000000000a90 T _abs
0000000000000aa9 T _atoi
0000000000202048 B __bss_start
0000000000202048 D _edata
0000000000202050 B _end
00000000000011f8 T _fini
0000000000000900 T _init
0000000000000bd7 T _isalpha
0000000000000c04 T _isdigit
0000000000000c25 T _islower
0000000000000c46 T _isupper
0000000000000c67 T _memcpy
0000000000000caa T _memset
0000000000000ce9 T _putchar
0000000000000d0e T _puts
0000000000000d4a T _strcat
0000000000000dcf T _strchr
0000000000000e21 T _strcmp
0000000000000e89 T _strcpy
0000000000000eeb T _strlen
0000000000000f15 T _strncat
0000000000000fa5 T _strncpy
0000000000001029 T _strpbrk
000000000000109d T _strspn
0000000000001176 T _strstr
julien@ubuntu:~/0x18. Dynamic libraries$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x18-dynamic_libraries
File: 1-create_dynamic_lib.sh
     
2. Let's call C functions from Python

I know, you’re missing C when coding in Python. So let’s fix that!

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.


julien@ubuntu:~/0x18$ cat 100-tests.py
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
66 + -76 = -10
66 - -76 = 142
66 x -76 = -5016
66 / -76 = 0
66 % -76 = 66
julien@ubuntu:~/0x18$ python3 100-tests.py 
-34 + -57 = -91
-34 - -57 = 23
-34 x -57 = 1938
-34 / -57 = 0
-34 % -57 = -34
julien@ubuntu:~/0x18$ python3 100-tests.py 
-5 + -72 = -77
-5 - -72 = 67
-5 x -72 = 360
-5 / -72 = 0
-5 % -72 = -5
julien@ubuntu:~/0x18$ python3 100-tests.py 
39 + -62 = -23
39 - -62 = 101
39 x -62 = -2418
39 / -62 = 0
39 % -62 = 39
julien@ubuntu:~/0x18$ 
     
3. Code injection: Win the Giga Millions!

I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
The system is an Linux Ubuntu 16.04
The server has internet access
Our mole will be only able to run two commands from a shell script, without being detected by MSS
Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
Our mole has only the authorization to upload one file on the server. It will be your shell script
Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
MSS will use the same terminal and session than our mole
Before running the gm program, MSS always check the content of the directory
MSS always exit after running the program gm
TL;DR; This is what is going to happen
mss@gm_server$ . ./101-make_me_win.sh
mss@gm_server$ rm 101-make_me_win.sh
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ history -c
mss@gm_server$ clear
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ md5sum gm
d52e6c18e0723f5b025a75dea19ef365  gm
mss@gm_server$ ./gm 9 8 10 24 75 9
--> Please make me win!
mss@gm_server$ exit
```
