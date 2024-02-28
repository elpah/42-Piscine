/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:42:03 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:38:25 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return (0);
    }
    else if (power == 0)
    {
        return (1);
    }
    else
    {
        nb *= ft_recursive_power(nb, power - 1);
    }
    return (nb);
}
