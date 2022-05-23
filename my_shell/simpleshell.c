#ifndef _SIMPLESHEL_H
#define _SIMPLESHEL_H
#define st_atime st_atim.tv_sec

#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>


int access(const char *pathname, int mode);
int chdir(const char *path);
int close(int fd);
int closedir(DIR *dirp);
int execve(const char *pathname, char *const argv[],
                  char *const envp[]);

noreturn void exit(int status);
noreturn void _exit(int status);
int fflush(FILE *stream);
pid_t fork(void);
void free(void *ptr);
char *getcwd(char *buf, size_t size);
char *getwd(char *buf);
ssize_t getline(char **restrict lineptr, size_t *restrict n,
                       FILE *restrict stream);
pid_t getpid(void);
pid_t getppid(void);
int isatty(int fd);
int kill(pid_t pid, int sig);
void *malloc(size_t size);
int open(const char *pathname, int flags);
DIR *opendir(const char *name);
void perror(const char *s);
ssize_t read(int fd, void *buf, size_t count);
struct dirent *readdir(DIR *dirp);
typedef void (*sighandler_t)(int);
int stat(const char *restrict pathname,
                struct stat *restrict statbuf);
int fstat(int fd, struct stat *statbuf);
int lstat(const char *restrict pathname,
                struct stat *restrict statbuf);
char *strtok(char *restrict str, const char *restrict delim);
char *strtok_r(char *restrict str, const char *restrict delim,
                      char **restrict saveptr);
pid_t wait(int *wstatus);
pid_t waitpid(pid_t pid, int *wstatus, int options);
pid_t wait3(int *status, int options,
            struct rusage *rusage);
pid_t wait4(pid_t pid, int *status, int options,
            struct rusage *rusage);
ssize_t write(int fd, const void *buf, size_t count);
int _putchar(char);
int _putchar(char);
int puts(const char *str);
int op_add(int arg1,int arg2);
void print_arg(char *arg);



#endif


