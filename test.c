/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:19:13 by amittal           #+#    #+#             */
/*   Updated: 2017/06/05 21:33:18 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ps()
{
	printf("***************\n");
}

void print_bytes(const void *object, size_t size)
{
	const unsigned char * const bytes = object;
	size_t i;

	printf("[ ");
	for(i = 0; i < size; i++)
	{
		printf("%02x ", bytes[i]);
	}
	printf("]\n");
}


int main()
{
	ps();
	char ch1[] = "ft_memtest test";
	printf("%s\n", ch1);
	print_bytes(ch1, 15);
	ft_memset(ch1, '-', 6);
	print_bytes(ch1, 15);
	printf("%s\n", ch1);
	ps();
}



















