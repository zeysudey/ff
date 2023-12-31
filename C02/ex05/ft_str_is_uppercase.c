/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 06:27:26 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/11 07:27:46 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (! (str[i] <= 90 && str[i] >= 65))
			return (0);
		i++;
	}
	return (1);
}
