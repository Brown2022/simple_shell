Holberton School robot Simple Shell
-----------------------------------
Synopsis
---------
This is a humble and simple implemnetation of a Unix command line interpreter.
Description speech_balloon
Custom version Unix command language interpreter built as a project for Holberton Schol. This mini shell reads commands from either interactive mode and non-interactive mode.
Requirements
------------
. Allowed editors: vi, vim, emacs

. Programs and functions will be compiled with gcc 4. 8. 4 using the flags -Wall -Werror Wextra and -pedantic

. All files should end with a new line

. Code should use the Betty style. It will be checked using [betty-style.pl]
 (https://github.com/holbertonschool/Betty/blob/master/betty-style\ .p) and betty-doc.pl

. No more than 5 functions per file

. All your header files should be include guarded

. Use system calls only when you need to

. Write a README with the description of your project

. You should have an AUTHORS file at the root of your repository

List of allowed functions and system calls
------------------------------------------
. access (man 2 access)

. chdir (man 2 chdir)

. close (man 2 close)

. closedir (man 3 closedir)

. execve (man 2 execve)

. exit (man 3 exit)

. _exit (man 2 _exit)

. fflush (man 3 fflush)

. fork (man 2 fork)

. free (man 3 free)

. getcwd (man 3 getcwd)

. getline (man 3 getline)

. getpid (man 2 getpid)

. isatty (man 3 isatty)

. kill (man 2 kill)

. malloc (man 3 malloc)

. open (man 2 open)

. opendir (man 3 opendir)

. perror (man 3 perror)

. read (man 2 read)

. readdir (man 3 readdir)

. signal (man 2 signal)

. stat (__xstat) (man 2 stat)

. lstat (__lxstat) (man 2 lstat)

. fstat (__fxstat) (man 2 fstat)

. strtok (man 3 strtok)

. wait (man 2 wait)

. waitpid (man 2 waitpid)

. wait3 (man 2 wait3)

. wait4 (man 2 wait4)

. write (man 2 write)

Flowchart pushpin
-----------------
Beolw you can see all the process flow in general terms that was taken into account at the time of making the code.
Quick start runner
------------------
git clone https://github.com/Brown2022/simple-shell.git

https://user-images.githubusercontent.com/60367519/79517219-2adbc000-8013-11ea-9835-30bf7c59a41e.jpg

Compilation computer
-------------------
Your shell will be compiled this way:

|gcc -Wall -Werror -Wextra -pedantic -std=gnu89 * .c hsh
-------------------------------------------------------


List of functions page_facing_up
-------------------------------
|Function Name| Description|
|----------------------------|
|access| changes whether the calling process can access the file pathname|
|chdir| changes the current working directory of the calling process to the directory specified in path|
|close| closes a file descriptor, so that it no longer to any file|
|closedir| closes the directory stream associated with dirp|
|execve| executes the program referred to by pathname|
|exit| causes normal process termination and the least significant byte of status
|-exit| terminates the calling process "immediately"|
|fflush| flush a stream|
|fork| create a child process|
|free| Display amount of free and used memory in the system|
|getcwd| return a null-terminated string containing an absolute pathname that is the current working directory|
|getline| reads an entire line from stream|
|getpid| returns the process ID (PID) of the calling process|
|isatty| tests whether fd is an open file descriptor|
|kill| send signal to a process|
|malloc| allocates size bytes and returns a pointer to the allocated memory|
|open| open and possibly create a file|
|opendir| open a directory|
|perror| print a system error message|
|read| read from a file descriptor|
|readir| read a directory|
|signal| determines how the process behaves|
|stat| get file status|
|lstat| get file status|
|fstat| getfile status|
|strtok| extract tokens from strings|
|wait| wait for process to change state|
|waitpid| wait for a child process to stop or terminate|
|wait3| wait for a child process to stop or terminate|
|wait4| wait for process to change state, BSD style
|write| write to a file descriptor|

