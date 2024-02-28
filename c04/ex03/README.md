## ex03: ft_atoi ##

- Write a function that converts the initial portion of the string pointed by str to its int representation.
- The string can start with an arbitrary amount of white space (as determined by isspace(3)).
- The string can be followed by an arbitrary amount of + and – signs, – sign will change the sign of the int returned based on the number of is odd or even.
- Finally the string can be followed by any numbers of the base 10.
- Your function should read the string until the string stop following the rules and return the number found until now.
- You should not take care of overflow or underflow. result can be undefined in that case.
- Here’s an example of a program that prints the atoi return value:

   ```c
   %> ./a.out " ---+--+1234ab567"
      -1234
    
- Here’s how it should be prototyped:

    ```c
    int	ft_atoi(char *str);