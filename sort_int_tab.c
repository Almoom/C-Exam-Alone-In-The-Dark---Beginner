/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 14:39:03 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/20 14:39:08 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Assignment name  : sort_int_tab
**Expected files   : sort_int_tab.c
**Allowed functions:
**------------------------------------------------------------------------------
**
**Write the following function:
**
**void sort_int_tab(int *tab, unsigned int size);
**
**It must sort (in-place) the 'tab' int array, that contains exactly 'size'
**members, in ascending order.
**
**Doubles must be preserved.
**
**Input is always coherent.
*/

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int j;
	int t;

	i = 1;
	while (i < size)
	{
		t = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > t)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = t;
		i++;
	}
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int t;

	i = 0;
	while (i + 1 < size)
	{
		if (tab[i] > tab[i + 1])
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
			i = -1;
		}
		i++;
	}
}
