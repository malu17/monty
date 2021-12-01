#include "monty.h"

/**
* check_command - identifies what the command is
* @line: the input buffer
*
* Return: non-zero if found, otherwise 0
*/
int check_command(char *line)
{
	int i, command;
	int (*chkrs[])(char*) = {check_push, check_pall,
		check_pint, check_pop, check_swap, 
		check_add, check_nop, check_sub, check_div,
		check_mul, check_mod, check_comment};

	i = 0;
	command = 0;
	while (command == 0 && i < 12)
	{
		command = chkrs[i](line);
		i++;
	}
	return (command);
}

/**
* check_push - checks if the command is push
* @line: the input buffer
*
* Return: 1 if found, otherwise 0
*/		
int check_push(char *line)
{
	char *str_push;
	int i;

	i = 0;	
	str_push = "push ";
	while (i < 5)
	{
		if (*(line + i) != *(str_push + i))
			break;
		i++;
	}
	return (i == 5 ? 1 : 0);
}

/**
* check_pall - checks if the command is push
* @line: the input buffer
*
* Return: 2 if found, otherwise 0
*/
int check_pall(char *line)
{
	char *str_pall;
	int i;

	i = 0;
	str_pall = "pall";
	while (i < 4)
	{
		if (*(line + i) != *(str_pall + i))
			break;
		i++;
	}
	return (i == 4 ? 2 : 0);
}

/**
* check_pint - checks if the command is push
* @line: the input buffer
*
* Return: 1 if found, otherwise 0
*/
int check_pint(char *line)
{
	char *str_pint;
	int i;

	i = 0;
	str_pint = "pint";
	while (i < 4)
	{
		if (*(line + i) != *(str_pint + i))
			break;
		i++;
	}
	return (i == 4 ? 3 : 0);
}

/**
* check_pop - checks if the command is push
* @line: the input buffer
*
* Return: 1 if found, otherwise 0
*/
int check_pop(char *line)
{
	char *str_pop;
	int i;

	i = 0;
	str_pop = "pop";
	while (i < 3)
	{
		if (*(line + i) != *(str_pop + i))
			break;
		i++;
	}
	return (i == 3 ? 4 : 0);
}
