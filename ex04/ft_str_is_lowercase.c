/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:13:11 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/10 08:58:23 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		j;
	char	type;

	i = 0;
	j = 0;
	type = 0;
	if (str[0] == '\0')
		j += 0;
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 97 && str[i] <= 122)
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
