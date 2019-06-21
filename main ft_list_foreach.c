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

#include "ft_list.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}

char	*ft_strnew(size_t n)
{
	char	*t;
	size_t	i;

	i = 0;
	if (n + 1 < n || !(t = (char *)malloc(n + 1)))
		return (NULL);
	while (i < n)
		t[i++] = '\0';
	t[i] = '\0';
	return (t);
}

size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

t_list 	*create_list(void *data)
{
	t_list *l;

	if (!(l = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!data)
		l->data = NULL;
	else
	{
		if (!(l->data = ft_strnew(ft_strlen(data))))
		{
			free(l);
			return (NULL);
		}
		ft_memcpy(l->data, data, ft_strlen(data));
	}
	l->next = NULL;
	return (l);
}

void print(void *s)
{
	printf("%s\n", s);
}

int		main(int ac, char **av)
{
	t_list *l1;
	t_list *l2;
	t_list *l3;
	void (*f)(void *);

	l1 = create_list("first");
	l2 = create_list("second");
	l3 = create_list("third");
	l1->next = l2;
	l2->next = l3;
	f = &print;
	ft_list_foreach(l1, f);
}
