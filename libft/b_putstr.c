/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yserkez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:00:35 by yserkez           #+#    #+#             */
/*   Updated: 2018/12/13 17:51:56 by yserkez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	b_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (s == NULL)
		b_putstr("(null)", count);
	else
	{
		while (s[i])
			b_putchar(s[i++], count);
	}
}
