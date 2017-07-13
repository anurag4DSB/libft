/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:42:57 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	const char	*head;

	head = src;
	while (sz > 1)
	{
		sz--;
		if ((*dst++ = *src++) == 0)
			break ;
	}
	if (sz == 1)
	{
		*dst = '\0';
		while (*src++)
			;
	}
	return (src - head - 1);
}
