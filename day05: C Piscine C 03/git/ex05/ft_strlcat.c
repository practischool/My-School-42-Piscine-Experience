/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:48:24 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/04 15:49:10 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_length_fast(char *dest)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	index;

	length_dest = ft_str_length_fast(dest);
	length_src = ft_str_length_fast(src);
	if (length_dest >= size)
		return (length_src + size);
	if (size == 0)
		return (length_src);
	index = 0;
	while (src[index] != '\0' && index < (size - 1 - length_dest))
	{
		dest[length_dest + index] = src[index];
		index++;
	}
	return (length_dest + length_src);
}
