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


char    **ft_split(char *str);

int		main(int ac, char **av)
{
	char **str;
	int i;
	int k;

	i = 0;
	k = 0;
	str = ft_split(av[1]);
	// while (k < 100)
	// {
		while (str[i])
		{
			printf("%s\n", str[i]);
			i++;
		}
	// 	k++;
	// 	i = 0;
	// }
	return (0);
}
