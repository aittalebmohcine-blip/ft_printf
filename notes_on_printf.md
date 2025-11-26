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

## prototype :
- `int ft_printf(const char *, ...);`

## Requirements
- Do not implement the original printf()’s buffer management.
- Your function has to handle the following conversions: cspdiuxX%
- Your implementation will be evaluated against the behavior of the original printf().
- You must use the command ar to create your library. The use of the libtool command is strictly forbidden.
- libftprintf.a must be created at the root of your repository.


---------------------------------------------------------------
# steps to manipulate the va_list list


1. create the variable argument list
	va_list	args;
2. initialize the arg ist
	va_start(args, fixed_arg)
		- fixed_arg : the last fixed arg before the var argmuents(...).
3. retrieve argmuents
	va_arg(args, type) : returns the next arg form the list args.
		- type is the type of the arg to retrieve.
4. clean up with va_end()
	va_end(atgs) : ensures that resources associated with va_list properly released.

----------------------------------------------------------------
# pseudo code


```
int ft_printf(const char *, ...);
- declare the list of args
	- va_list args;
- initialize the list of args
	- for that we need the number of args
	- 
```

-------------------------------------------------------------
# normal vs edge cases


- normal cases.
	- loop through str
	- if a char == '%'
		- if char+1 == a format specifier
			- print_arg(va_arg(args, type:based on the format found))
- edge cases
	- str is NULL;

---------
# planing the code

```c
int ft_printf(const char *str, ...)
  {
		//loop on str
		//if str[i] == 'c'
		//if str[i+1]
	}
```






------------



# Quests

- [x] hex upercase.
- [x] test puthex
  - add put hex to header file
  - add it to makefile

- printpointer
  - trying same logic as puthex
  - add it to header file
  - add it to makefile
  - understand the logic and the steps
  - implement.
-------
- edge cases:
	- no specifier after %.
	- % after %.
	- putchar:
		- null character
		- empty string ending with %
  - putstr:
		- NULL input : print (nill) and return 6
		- empty string
		- long string
	- putnbr:
		- int_min
		- 0
		- negative
		- int_max
	- putunsignedint
    - -1
    - 0
    - max unsigned
	- puthexlow and uprhex
	- putptr
	- printf(NULL) retunrs -1
  - 

- return of putstr if a string parameter is null.

- make sure fd are correct

- [x] norminette

--------

 we will try to organize this notes. use headers, sub headers.

# general steps

i have finished:
- the core of the function.
- made every file passe the norminette.
next is :
- understanding what happens in the back side (theory).

- push.,
