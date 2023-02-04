/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_memnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:48:24 by thfirmin          #+#    #+#             */
/*   Updated: 2023/02/04 01:50:08 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

t_mem	*gc_memnew(void	*ptr)
{
	t_mem	*alloc;

	alloc = malloc(sizeof(t_mem));
	if (alloc)
	{
		alloc->ptr = ptr;
		alloc->next = 0;
	}
	return (alloc);
}
