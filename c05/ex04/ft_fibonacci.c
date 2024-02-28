/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:46:37 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:39:44 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    int number;

    number = 0;
    if (index < 0)
    {
        return (-1);
    }
    else if (index == 0)
    {
        return (0);
    }
    else if (index == 1)
    {
        return (1);
    }
    else
    {
        number = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    }
    return (number);
}
