# Przykład pliku makefile:

```sh
CFLAGS=-Wall -g -lm

all : zadanie8

clean :
	rm -f zadanie8 *~

zadanie8 : zadanie8.c
	cc -Wall zadanie8.c -o zadanie8
```

# Aby zmienić wcięcia w pliku .c:

```sh
indent -kr nazwapliku
```
lub (tab = 2 znaki):

```sh
indent -kr -i2 nazwapliku
```
# W [zadaniu 9](https://github.com/jkowalska/jp/blob/master/Lab4-zadania/zadanie9ver2.c "Zadanie9")

4 lub 8 to szerokość pola (np. prawy margines to 8 pól)
```sh
%8.4
```
