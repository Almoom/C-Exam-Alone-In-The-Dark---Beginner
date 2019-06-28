/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:58:23 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/27 13:58:26 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int matching(char x, char y)
{
	if (x == '(' && y == ')')
		return (1);
	if (x == '[' && y == ']')
		return (1);
	if (x == '{' && y == '}')
		return (1);
	return (0);
}

int brackets(char *s, char *stack)
{
	int i;
	int top;

	i = 0;
	top = -1;
	while (s[i])
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			top++;
			stack[top] = s[i];
		}
		if (s[i] == ')' || s[i] == ']' || s[i] == '}')
		{
			if (!stack[top])
				return (0);
			else if (!matching(stack[top], s[i]))
				return (0);
			else
			{
				stack[top] = 0;
				top--;
			}
		}
		i++;
	}
	if (stack[top] == 0)
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	int i;
	char stack[1000];

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			if (brackets(av[i], stack))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}


int        cycle_detector(const t_list *list)
{
	int i;

	i = 0;
	if (!list)
		return (0);
	while (list)
	{
		list = list->next;
		i++;
		if (i == 1000)
			return (1);
	}
	return (0);
}
