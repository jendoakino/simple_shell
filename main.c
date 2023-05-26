#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define MAX_INPUT_LENGTH 100

/**
 * main - Point of entry of the program
 * Function carries out basic command line interface
 * that asks user to enter commands
 * It reads user input and checks for "exit"
 * Return: Always returns 0 for success
 */
int main(void)
{
	char *input = NULL;
	size_t input_length = 0;
	ssize_t read;

	while (1)
	{
		printf("# ");
		read = getline(&input, &input_length, stdin);

	if (read == -1)
	{
		break;
	}

	if (input[read - 1] == '\n')
	{
		input[read - 1] = '\0';
	}

	if (strcmp(input, "exit") == 0)
	{
		break;
	}
	}

	free(input);
	return (0);
}
