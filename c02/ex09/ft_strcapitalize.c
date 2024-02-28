/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:23:42 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:03:46 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_alnum(char c)
{
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9'));
}

char to_upper_case(char c)
{
    if ('a' <= c && c <= 'z')
    {
        c -= 32;
    }
    return (c);
}

char to_lower_case(char c)
{
    if ('A' <= c && c <= 'Z')
    {
        c += 32;
    }
    return (c);
}

char *ft_strcapitalize(char *str)
{
    int i;
    int new_word;

    new_word = 1;
    i = 0;
    while (str[i] != '\0')
    {
        if (is_alnum(str[i]))
        {
            if (new_word)
            {
                str[i] = to_upper_case(str[i]);
                new_word = 0;
            }
            else
                str[i] = to_lower_case(str[i]);
        }
        else
            new_word = 1;
        i++;
    }
    return (str);
}
