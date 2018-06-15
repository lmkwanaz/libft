/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkwanaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:01:00 by lmkwanaz          #+#    #+#             */
/*   Updated: 2018/06/06 16:40:16 by lmkwanaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int l;

	l = 0;
	if (!s)
		return ;
	while (s[l] != '\0')
	{
		ft_putchar(s[l]);
		l++;
	}
}
