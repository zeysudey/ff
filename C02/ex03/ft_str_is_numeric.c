/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 02:43:26 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/11 03:01:26 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if(!(str[i] <= 57 && str[i] >= 48))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	printf("%d",ft_str_is_numeric("0999"));
}
