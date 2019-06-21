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

#include <stdio.h>
#include <stdlib.h>

void	sort_int_tab(int *tab, unsigned int size);

int		main(int ac, char **av)
{
	int tab[ac];
	int i;

	i = 0;
	while (i < ac - 1)
	{
		tab[i] = atoi(av[i + 1]);
		i++;
	}
	sort_int_tab(tab, (unsigned int) ac - 1);
	i = 0;
	while (i < ac - 1)
	{
		printf("%d\n", tab[i]);
		i++;
	}

	return (0);
}
