/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:55:28 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 11:51:49 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
    int counter;

    counter = 0;
    while (src[counter] != '\0')
    {
        dest[counter] = src[counter];
        counter++;
    }
    dest[counter] = '\0';
    return (dest);
}
