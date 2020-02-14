/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:50:23 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/14 11:04:07 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strsize(char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int		ft_strless(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	unsigned int		srcsize;

	i = 0;
	srcsize = ft_strsize(src);
	if (srcsize >= n)
	{
		ft_strless(dest, src, n);
	}
	else if (srcsize < n)
	{
		while (i < srcsize)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
