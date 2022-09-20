/*
 * File: 2-strlen.c
 * Auth: Deogracius
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
 _strlen(const char *str)
{
	_strlen length = 0;

	while (*str++)
		length++;

	return (length);
}
