/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_allfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:05:37 by thfirmin          #+#    #+#             */
/*   Updated: 2023/02/04 02:07:29 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

void	gc_allfree(t_mem **list)
{
	t_mem	*mem;

	mem = *list;
	while(*list)
	{
		mem = (**list).next;
		free((**list).ptr);
		free(*list);
		*list = mem;
	}
}
