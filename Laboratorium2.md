#Rozwiązanie zadań:

[Zadania ze strony - Laboratorium 1](http://wbzyl.inf.ug.edu.pl/sp/labs01)

Zadanie 1: Używając linii poleceń stwórz strukturę katalogów:

```sh
jkowalska@sigma:~$ mkdir temp
jkowalska@sigma:~$ cd temp
jkowalska@sigma:~/temp$ mkdir dom nauka praca
jkowalska@sigma:~/temp$ cd nauka
jkowalska@sigma:~/temp/nauka$ mkdir c logo pascal
jkowalska@sigma:~/temp/nauka$ cd ..
jkowalska@sigma:~/temp$ cd praca
jkowalska@sigma:~/temp/praca$ mkdir dokumenty zlecenia
jkowalska@sigma:~/temp/praca$ cd zlecenia
jkowalska@sigma:~/temp/praca/zlecenia$ mkdir niezrealizowane zrealizowane
jkowalska@sigma:~/temp/praca/zlecenia$ cd ..
jkowalska@sigma:~/temp/praca$ cd ..
jkowalska@sigma:~/temp$ tree
.
├── dom
├── nauka
│   ├── c
│   ├── logo
│   └── pascal
└── praca
    ├── dokumenty
    └── zlecenia
        ├── niezrealizowane
        └── zrealizowane

10 directories, 0 files
```
Zadanie 2: Przejdź do katalogu dom i utwórz katalog wazne-sprawy.

```sh
jkowalska@sigma:~/temp$ cd dom
jkowalska@sigma:~/temp/dom$ mkdir wazne-sprawy
```
Zadanie 3: Wejdź do katalogu wazne-sprawy i utwórz tam pusty plik rachunki.txt.

```sh
jkowalska@sigma:~/temp/dom$ cd wazne-sprawy/
jkowalska@sigma:~/temp/dom/wazne-sprawy$ touch rachunki.txt
jkowalska@sigma:~/temp/dom/wazne-sprawy$ ls
rachunki.txt
```
Zadanie 4: Będąc w katalogu wazne-sprawy skopiuj plik rachunki.txt do katalogu zrealizowane.

```sh
jkowalska@sigma:~/temp/dom/wazne-sprawy$ cp ./rachunki.txt ../../praca/zlecenia/zrealizowane/
```
Zadanie 5: Przejdź do katalogu zrealizowane i zmień nazwę pliku rachunki.txt na wykonano.txt.

```sh
jkowalska@sigma:~/temp/dom/wazne-sprawy$ cd ..
jkowalska@sigma:~/temp/dom$ cd ..
jkowalska@sigma:~/temp$ cd praca/zlecenia/zrealizowane/
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ ls
rachunki.txt
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ mv rachunki.txt wykonano.txt
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ ls
wykonano.txt
```
Zadanie 6: Utwórz plik wykonano.txt wielkości 11 bajtów, następnie podziel go pliki wielkości 5 bajtów. 
    W ten sposób otrzymasz 3 pliki. (split)

```sh
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ cat >> wykonano.txt 
1234567890
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ ls -l
razem 4
-rw-r--r-- 1 jkowalska studinf 11 paź 31 16:33 wykonano.txt
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ split --bytes=5 wykonano.txt 
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ ls -l
razem 16
-rw-r--r-- 1 jkowalska studinf 11 paź 31 16:33 wykonano.txt
-rw-r--r-- 1 jkowalska studinf  5 paź 31 16:34 xaa
-rw-r--r-- 1 jkowalska studinf  5 paź 31 16:34 xab
-rw-r--r-- 1 jkowalska studinf  1 paź 31 16:34 xac
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ 
```
Zadanie 7: Będąc w katalogu logo skopiuj powyżej otrzymane 3 pliki do katalogu dokumenty.

```sh
jkowalska@sigma:~/temp/praca/zlecenia/zrealizowane$ cd ..
jkowalska@sigma:~/temp/praca/zlecenia$ cd ..
jkowalska@sigma:~/temp/praca$ cd ..
jkowalska@sigma:~/temp$ cd nauka/logo/
jkowalska@sigma:~/temp/nauka/logo$ cp ../../praca/zlecenia/zrealizowane/x* ../../praca/dokumenty/
jkowalska@sigma:~/temp/nauka/logo$ 
jkowalska@sigma:~/temp/nauka/logo$ cd ..
jkowalska@sigma:~/temp/nauka$ cd ..
jkowalska@sigma:~/temp$ cd praca/dokumenty/
jkowalska@sigma:~/temp/praca/dokumenty$ ls
xaa  xab  xac
```
Zadanie 8: Będąc w katalogu dokumenty połącz skopiowane 3 pliki w plik odtworzono.txt, tak aby otrzymać plik 
    o zawartości identycznej z wykonano.txt. Następnie plik odtworzono.txt skopiuj do katalogu wazne-sprawy.

```sh
jkowalska@sigma:~/temp$ cd praca/dokumenty/
jkowalska@sigma:~/temp/praca/dokumenty$ ls
xaa  xab  xac
jkowalska@sigma:~/temp/praca/dokumenty$ cat x*
1234567890
jkowalska@sigma:~/temp/praca/dokumenty$ cat x* >> odtworzono.txt
jkowalska@sigma:~/temp/praca/dokumenty$ ls
odtworzono.txt  xaa  xab  xac
jkowalska@sigma:~/temp/praca/dokumenty$ cat odtworzono.txt 
1234567890
jkowalska@sigma:~/temp/praca/dokumenty$ cp odtworzono.txt ../../dom/wazne-sprawy/
jkowalska@sigma:~/temp/praca/dokumenty$ 
```
Zadanie 9: Będąc w katalogu wazne-sprawy sprawdź, czy są jakieś różnice w zawartości plików wykonano.txt i odtworzono.txt.

```sh
jkowalska@sigma:~/temp/praca/dokumenty$ 
jkowalska@sigma:~/temp/praca/dokumenty$ cd ..
jkowalska@sigma:~/temp/praca$ cd ..
jkowalska@sigma:~/temp$ cd dom/wazne-sprawy/
jkowalska@sigma:~/temp/dom/wazne-sprawy$ ls
odtworzono.txt  rachunki.txt
jkowalska@sigma:~/temp/dom/wazne-sprawy$ diff ./odtworzono.txt ../../praca/zlecenia/zrealizowane/wykonano.txt 
jkowalska@sigma:~/temp/dom/wazne-sprawy$ 
```
Zadanie 10: Wyświetl kalendarz na październik 2009 r. (cal)

```sh
jkowalska@sigma:~$ cal 10 2009
  Październik 2009    
ni po wt śr cz pi so  
             1  2  3  
 4  5  6  7  8  9 10  
11 12 13 14 15 16 17  
18 19 20 21 22 23 24  
25 26 27 28 29 30 31
```
Wyświetl kalendarz na wrzesień, październik i listopad 2009 r. z miesiącami obok siebie (cal).

```sh
jkowalska@sigma:~$ cal -3m 11 2009
                            2009
    Październik             Listopad              Grudzień        
ni po wt śr cz pi so  ni po wt śr cz pi so  ni po wt śr cz pi so  
             1  2  3   1  2  3  4  5  6  7         1  2  3  4  5  
 4  5  6  7  8  9 10   8  9 10 11 12 13 14   6  7  8  9 10 11 12  
11 12 13 14 15 16 17  15 16 17 18 19 20 21  13 14 15 16 17 18 19  
18 19 20 21 22 23 24  22 23 24 25 26 27 28  20 21 22 23 24 25 26  
25 26 27 28 29 30 31  29 30                 27 28 29 30 31        
```
Zadanie 11: Jaki był dzień tygodnia 25 maja 1975 r. (cal i date)

```sh
jkowalska@sigma:~$ date -d 1975-05-25 +%A
niedziela
```
