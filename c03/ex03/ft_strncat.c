/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 03:33:32 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/21 13:32:50 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = ft_strlen(dest);
	while (*src != '\0' && nb > 0)
	{
		dest[i] = *src;
		i++;
		src++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
