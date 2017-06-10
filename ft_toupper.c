/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 10:21:46 by amittal           #+#    #+#             */
/*   Updated: 2017/06/08 18:13:43 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_islower(int c)
{
	return (c <= 'z' && c >= 'a');
}

int				ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}