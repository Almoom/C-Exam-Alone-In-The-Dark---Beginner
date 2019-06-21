/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:44:30 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/19 13:44:33 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Assignment name  : fprime
**Expected files   : fprime.c
**Allowed functions: printf, atoi
**------------------------------------------------------------------------------
**
**Write a program that takes a positive int and displays its prime factors on
**the standard output, followed by a newline.
**
**Factors must be displayed in ascending order and separated by '*', so that
**the expression in the output gives the right result.
**
**If the number of parameters is not 1, simply display a newline.
**
**The input, when there's one, will be valid.
**
**Examples:
**
**$> ./fprime 225225 | cat -e
**3*3*5*5*7*11*13$
**$> ./fprime 8333325 | cat -e
**3*3*5*5*7*11*13*37$
**$> ./fprime 9539 | cat -e
**9539$
**$> ./fprime 804577 | cat -e
**804577$
**$> ./fprime 42 | cat -e
**2*3*7$
**$> ./fprime 1 | cat -e
**1$
**$> ./fprime | cat -e
**$
**$> ./fprime 42 21 | cat -e
**$
*/

#include <stdio.h>
#include <stdlib.h>

void	ftprime(int n)
{
	int i;

	i = 2;
	if (n == 1)
		printf("1");
	else
	{
		while (n > 1 && i <= n)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				n = n / i;
				if (n != 1)
					printf("*");
			}
			else
				i++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ftprime(atoi(av[1]));
	printf("\n");
}
