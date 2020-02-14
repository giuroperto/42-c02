/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:51:48 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/15 10:37:58 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_str_is_numeric(char *str)
{
	int		i;
	int		j;
	int		type;

	i = 0;
	type = 0;
	j = 0;
	if (str[i] == '\0')
		j += 0;
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 48 && str[i] <= 57)
				j += 0;
			else
				j += 1;
			i++;
		}
	}
	if (j > 0)
		type = 0;
	else
		type = 1;
	return (type);
}
