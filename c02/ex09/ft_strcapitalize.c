/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:34:52 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/20 03:52:04 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_upcase(char c);
char	ft_lowcase(char c);
int		ft_is_alpha(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str[0] = ft_upcase(str[0]);
	while (str[i] != '\0')
	{
		if (!ft_is_alpha(str[i - 1]) && ft_is_alpha(str[i]))
			str[i] = ft_upcase(str[i]);
		else
			str[i] = ft_lowcase(str[i]);
		i++;
	}
	return (str);
}

char	ft_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
