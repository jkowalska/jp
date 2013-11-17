# Przykład pliku makefile:

```sh
CFLAGS=-Wall -g

all : zadanie8

clean :
  rm -f zadanie8 *~

zadanie8 : zadanie8.c
	cc -Wall zadanie8.c -o zadanie8
```
