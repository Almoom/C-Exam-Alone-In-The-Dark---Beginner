/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 15:56:53 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/21 15:56:54 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Assignment name  : ft_itoa
**Expected files   : ft_itoa.c
**Allowed functions: malloc
**------------------------------------------------------------------------------
**
**Write a function that takes an int and converts it to a null-terminated
**string.
**The function returns the result in a char array that you must allocate.
**
**Your function must be declared as follows:
**
**char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <stdio.h>

int		ft_len(int nbr)
{
	int len;

	len = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int znak;
	int len;
	char *rez;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr == 0)
		return ("0\0");
	znak = nbr < 0 ? 1 : 0;
	nbr = nbr < 0 ? -nbr : nbr;
	len = znak == 1 ? 1 + ft_len(nbr) : ft_len(nbr);
	rez = (char*)malloc(sizeof(*rez) * (len + 1));
	rez[len] = 0;
	while (nbr > 9)
	{
		rez[len - 1] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	rez[len - 1] = nbr + '0';
	rez[0] = znak ? '-': rez[0];
	return (rez);
}
