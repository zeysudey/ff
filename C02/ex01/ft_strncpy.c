/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:52:52 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/10 13:11:37 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src,unsigned	int	n)
{
	int i;
	i = 0;
    
	while (src[i] && i < n )
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int main()
{
	char src[] = "qq";
    char dest[] = "aaa";
	printf("%s", ft_strncpy(dest,src,3));
}
