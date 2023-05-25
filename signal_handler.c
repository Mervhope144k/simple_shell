#include "shell.h"

/**
 * sigintHandler - handles the SIGINT signal (Ctrl+C)
 * @sig_num: the signal number
 *
 * Return: void
 */
void sigintHandler(__attribute__((unused))int sig_num)
{
	_puts("\n$ ");
	_putchar(BUF_FLUSH);
}
