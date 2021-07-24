# :rocket: Basecamp Rush 72 kdos-san 

Este repositório é o resultado do tema do módulo Rush 00 da Piscina C da 42.

## Membros do grupo
 - @kdos-san (Lider)
 - @gadolfo
 - @calberto

## Git
### Combinados
* Se divertir!
* Realizar as implementações de código nas branches locais.
* Debater com o grupo antes de subir na master.
* Realizar commits identificaveis (evitar: ``` $ git add .```).
* Antes de subir o projeto final incluir este `README/md` no .gitignore.

1. Para trocar de branch no ambiente:
```shel
$ git checkout -b <user>
```
2. Atualizar o repo
```shell
$ git pull
```

###Representação das braches:

                        ___________________________________@gadolfo
                       /                                          __________@kdos-san
                      |                                         /
                      |                   Ajustes              |
Branch master o======*o*================*o*===================*o*=============================>>
              |                          |
               \ ____@calberto____merge__/

## Compilação:
```shell
$ cc -Wall -Wextra -Werror <nome_do_arquivo.c>
```
## Tema do Rush 72 kdos-san

Calculo do módulo:
```shell
k = 1
11 % 5 = 0
```
 - [] rush(5,3)
 ```shell
$>./a.out
o---o
| |
o---o
$>
```
 - [] rush(5, 1)
 ```shell
$>./a.out
o---o
$>
```
 - [] rush(1, 1)
 ```shell
$>./a.out
o
$>
```

 - [] rush(1, 5)
 ```shell
 $>./a.out
o
|
|
|
o
$>
```
 - [] rush(4, 4)
```shell
$>./a.out
o
|
|
|
o
$>
```

## Entregas:
[] main.c
	[x] Criar o arquivo
	[x] Header include <stdio.h>
	[x] Function main
	[] Chamar a funçào ```rush(5, 5);```
	[] incluis a checagem do sistema ```return (0);```
	[] Check ``` norminette -R  < nome do arquivo > ``` (Entregar apenas se a norminette retornar ok!)

 * Exemplo de main.c:

```C
int main()
{
rush(5, 5);
return (0);
}
```

** O main será modificado na defesa para poder mudar os parâmetros da chamada
à função rush. Por exemplo, um cenário como será testado:

```C
int main()
{
rush(123, 42);
return (0);
}
```

[] ft_putchar.c
	[x] Criar o arquivo
	[x] Header <unistd.h>
	[x] Function void
	[x] function write para "colocar" apenas 1 caracter
	[] Check ``` norminette -R  < nome do arquivo > ``` (Entregar apenas se a norminette retornar ok!)

 * Hipoteses:
	1. a função ```ft_putchar.c``` será usada para gerar os caracteres dentro do ````rush00.c```
	

[] rush00.c
	[x] Criar o arquivo
	[] Escrever a função rush
	[] Parâmetros: variáveis de tipo inteiro nomeadas respectivamente x e y.
	[] A função rush deverá exibir na tela um retângulo de x caracteres de largura, e y
caracteres de altura
	[] Check ``` norminette -R  < nome do arquivo > ``` (Entregar apenas se a norminette retornar ok!)
 
 * Hipoteses:
	1. Os caracteres serão printados na tela como a função ```ft_putchar.c```
	2. Para imprimir as sequencias de caracteres sera usado o ```while```
