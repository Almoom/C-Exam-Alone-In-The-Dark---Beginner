/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:35:50 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/19 16:35:52 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Assignment name  : ft_split
**Expected files   : ft_split.c
**Allowed functions: malloc
**------------------------------------------------------------------------------
**
**Write a function that takes a string, splits it into words, and returns them
**as a NULL-terminated array of strings.
**
**A "word" is defined as a part of a string delimited either by spaces/tabs/new
**lines, or by the start/end of the string.
**
**Your function must be declared as follows:
**
**char    **ft_split(char *str);
*/

#include <stdlib.h>
#include <stdio.h>

int		numw(char *s)
{
	int beg;

	beg = 0;
	if (s[0] != ' ' && s[0] != '\t' && s[0] != '\n' && s[0] != 0)
		beg++;
	while (*s)
	{
		if (s[1] && (*s == ' ' || *s == '\t' || *s == '\n') && (s[1] != ' '
		&& s[1] != '\t' && s[1] != '\n'))
			beg++;
		s++;
	}
	return (beg);
}

int		lenw(char *s)
{
	int len;

	len = 0;
	while (s[len] != ' ' && s[len] != '\t' && s[len] != '\n' && s[len] != 0)
		len++;
	return (len);
}

char    **ft_split(char *str)
{
	char **tab;
	int i;
	int j;

	i = 0;
	tab = (char**)malloc(sizeof(**tab) * (numw(str) + 1));
	while (*str)
	{
		j = 0;
		while ((*str == ' ' || *str == '\t' || *str == '\n') && *str != 0)
			str++;
		if (*str == 0)
			break ;
		tab[i] = (char*)malloc(lenw(str) + 1);
		while (*str > 32)
		{
			tab[i][j] = *str;
			str++;
			j++;
		}
		tab[i][j] = 0;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
