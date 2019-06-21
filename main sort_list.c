/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:13:24 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/19 14:13:26 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list 	*create_list(int n)
{
	t_list *l;

	if (!(l = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	l->i = n;
	l->next = NULL;
	return (l);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int		main(int ac, char **av)
{
	t_list *l1;
	t_list *l2;
	t_list *l3;
	int (*cmd)(int, int);
	t_list *t;

	l1 = create_list(55);
	l2 = create_list(10);
	l3 = create_list(56);
	l1->next = l2;
	l2->next = l3;
	cmd = &ascending;
	l1 = sort_list(l1, cmd);
	t = l1;
	while (t)
	{
		printf("%d\n", t->i);
		t = t->next;
	}
}
