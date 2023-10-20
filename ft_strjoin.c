/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardier <sgardier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:21:04 by sgardier          #+#    #+#             */
/*   Updated: 2023/10/20 14:57:14 by sgardier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char	*strjoined;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	strjoined = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!strjoined)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		strjoined[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len_s2)
	{
		strjoined[len_s1 + i] = s2[i];
		i++;
	}
	strjoined[len_s1 + len_s2] = '\0';
	return (strjoined);
}
