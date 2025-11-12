# mandatory

- programme name : libftprintf.a
- files to turn in :
  - `Makefile`
	- `*.h`
	- `*/*.h`
	- `*.c`
	- `*/*.c`
- Makefile : NAME , all, clean, fclean, re
- External functions : malloc, free, write, va_start, va_arg, va_copy, va_end
- Libft authorized : yes

## Discription
- Write a library that contains ft_printf(), a function that will mimic the original printf()

------------------------------------------------

prototype :
- `int ft_printf(const char *, ...);`

## Requirements
• Do not implement the original printf()’s buffer management.
• Your function has to handle the following conversions: cspdiuxX%
• Your implementation will be evaluated against the behavior of the original printf().
• You must use the command ar to create your library. The use of the libtool command is strictly forbidden.
• libftprintf.a must be created at the root of your repository.
