TRABALHO 3 - CONJUNTO DE DADOS POPULACIONAIS

OBJETIVO:

Trabalho desenvolvido com o intuito de criar um programa em c++ para receber dados populacionais e utilizar algoritmos de ordenação para organizá-los em ordem crescente e apresentar para o usuário no final.

FUNCIONALIDADE:

O programa é bem simples, começa recebendo a variável para determinar o tamanho do vetor, estando dentro de um loop para não permitir que o usuário insira um número negativo. Após isso recebe os valores que entrarão dentro desse vetor, sendo os dados populacionais. Então entra em três condições, caso o tamanho do vetor for entre 1 e 20 chamará a função insertionSort e vai realizar o algoritmo correspondente para organizar o vetor, caso for entre 21 e 30 utilizará a função Bubble Sort que realizará o algoritmo correspondente e caso for maior que 30 a função Selection Sort será chamada para organizar o vetor com o algoritmo correspondente, e por fim apresentando os dados em ordem crescente. 

TESTES:

1° TESTE -
Entrada de dados: 
Tamanho do vetor: 0
Tamanho do vetor: 10
Valor dos dados: -1
3
2
4
7
1
3
4
5
8
10
2
Saída: 
1 2 2 3 3 4 5 7 8 10

2° TESTE -
Entrada de dados:
Tamanho do vetor: 21
Valor dos dados:
5
4
10
90
1002
203
45
76
91
2
34
52
1
0
34
5
2
8
88
888
56

Saída:
0 1 2 2 4 5 5 8 10 34 34 45 52 56 76 88 90 91 203 888 1002

3° TESTE - 
Entrada de dados:
Tamanho do vetor: 31
Valor dos dados:
31
11
22
33
1
2
7
88
67
43
4
1222
1
123
3211
215
77
656
555
7
88
9
87
10
100
123
547
87
89
99
975
43

Saída: 
1 1 2 4 7 7 9 10 11 22 33 43 43 67 77 87 87 88 88 89 99 100 123 123 215 547 555 656 975 1222 321


ESTRUTURA DO PROJETO:

Trabalho3
├── README.md
├─── trabalho3.cpp
└──── fluxograma3.pdf
