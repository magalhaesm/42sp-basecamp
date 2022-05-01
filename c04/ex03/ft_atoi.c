/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:42:37 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/22 01:11:38 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c);
int	ft_isnumeric(char c);
int	ft_issign(char c, int *s);

int	ft_atoi(char *str)
{
	int				i;
	int				sign;
	unsigned int	total;

	i = 0;
	sign = 1;
	total = 0;
	while (ft_isspace(str[i]))
		i++;
	while (ft_issign(str[i], &sign))
		i++;
	while (ft_isnumeric(str[i]))
	{
		total = (str[i] - '0') + (total * 10);
		i++;
	}
	return (total * sign);
}

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_isnumeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_issign(char c, int *s)
{
	if (c == '+' || c == '-')
	{
		if (c == '-')
			*s *= (-1);
		return (1);
	}
	return (0);
}
