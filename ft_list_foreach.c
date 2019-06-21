/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:25:05 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/19 14:25:07 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Assignment name  : ft_list_foreach
**Expected files   : ft_list_foreach.c, ft_list.h
**Allowed functions:
**------------------------------------------------------------------------------
**
**Write a function that takes a list and a function pointer, and applies this
**function to each element of the list.
**
**It must be declared as follows:
**
**void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
**
**The function pointed to by f will be used as follows:
**
**(*f)(list_ptr->data);
**
**You must use the following structure, and turn it in as a file called
**ft_list.h:
**
**typedef struct    s_list
**{
**    struct s_list *next;
**    void          *data;
**}                 t_list;
*/

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *t;

	t = begin_list;
	while (t)
	{
		(*f)(t->data);
		t = t->next;
	}
}