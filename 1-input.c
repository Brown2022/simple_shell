#include "simple_shell.h"


/**
 * prompt - prints '$' and waits for a user's input
 */
void prompt(void)
{
	char *prompt = {"{^_^} "};
	char *buffer = getcwd(NULL, 0);

	if (isatty(STDIN_FILENO))
	{
		write (STDOUT_FILENO, prompt, _strlen(prompt));
	}
	free(buffer);
}
