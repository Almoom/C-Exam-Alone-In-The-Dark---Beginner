/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 13:56:46 by ljalikak          #+#    #+#             */
/*   Updated: 2019/06/21 13:56:48 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_list
{
	int				i;
	struct s_list	*next;
}					t_list;
t_list				*sort_list(t_list* lst, int (*cmp)(int, int));
#endif
