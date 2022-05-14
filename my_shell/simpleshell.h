#ifndef _H_simpleshell_H
#define _H_simpleshell_H

#include<sys/wait.h>
#include<sys/struct.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>




pid_t waitpid(pid_t pid, int *wstatus, int options);
int chdir(const char *path);i
int close(int fd);
int closedir(DIR *dirp);
int execve(const char *pathname, char *const argv[],
                  char *const envp[]);
noreturn void exit(int status);
noreturn void _exit(int status);
int fflush(FILE *stream);
pid_t fork(void);
void *malloc(size_t size);
char *getcwd(char *buf, size_t size);
ssize_t getline(char **restrict lineptr, size_t *restrict n,
                       FILE *restrict stream);
pid_t getpid(void);
int isatty(int fd);
void *malloc(size_t size);
int open(const char *path, int oflag, ... );
DIR *opendir(const char *name);
void perror(const char *s);
ssize_t read(int fd, void *buf, size_t count);
struct dirent *readdir(DIR *dirp);
typedef void (*sighandler_t)(int);
int stat(const char *restrict pathname,
                struct stat *restrict statbuf);
int lstat(const char *path, struct stat *buf);
int fstat(int fd, struct stat *buf);
char *strtok(char *restrict str, const char *restrict delim);
pid_t wait(int *wstatus);
pid_t waitpid(pid_t pid, int *status, int options);
pid_t wait3(int *status, int options,
            struct rusage *rusage);
pid_t wait4(pid_t pid, int *status, int options,
            struct rusage *rusage);
ssize_t write(int fd, const void *buf, size_t count);

#endif;

