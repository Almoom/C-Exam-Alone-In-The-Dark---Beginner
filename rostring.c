/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 17:35:14 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/21 17:35:15 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Assignment name  : rostring
**Expected files   : rostring.c
**Allowed functions: write, malloc, free
**------------------------------------------------------------------------------
**
**Write a program that takes a string and displays this string after rotating it
**one word to the left.
**
**Thus, the first word becomes the last, and others stay in the same order.
**
**A "word" is defined as a part of a string delimited either by spaces/tabs, or
**by the start/end of the string.
**
**Words will be separated by only one space in the output.
**
**If there's less than one argument, the program displays \n.
**
**Example:
**
**$>./rostring "abc   " | cat -e
**abc$
**$>
**$>./rostring "Que la      lumiere soit et la lumiere fut"
**la lumiere soit et la lumiere fut Que
**$>
**$>./rostring "     AkjhZ zLKIJz , 23y"
**zLKIJz , 23y AkjhZ
**$>
**$>./rostring | cat -e
**$
**$>
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void rostring(char *s)
{
	int end;
	int beg;
	int i;
	int flag;
	int flag2;

	beg = flag = flag2 = 0;
	end = ft_len(s);
	while (s[beg] == ' ')
		beg++;
	i = beg;
	if (beg == end)
		return ;
	while (s[end - 1] == ' ')
		end--;
	while (i++ < end && flag == 0)
		if (i + 1 < end && s[i] == ' ' && s[i + 1] != ' ')
			flag = 1;
	while (i < end)
	{
		if (s[i] != ' ')
		{
			write(1, &s[i], 1);
			flag2 = 0;
		}
		if (s[i] == ' ' && flag2 == 0)
		{
			write(1, " ", 1);
			flag2 = 1;
		}
		i++;
	}
	if (flag == 1)
		write(1, " ", 1);
	while (s[beg] != ' ')
		write(1, &s[beg++], 1);
}

int		main(int ac, char **av)
{
	if (ac >= 2)
		rostring(av[1]);
	write(1, "\n", 1);
}
