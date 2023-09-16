# Avaliação 4 - AED
<b>Nome</b> : Miguel Carraro<br/>
<b>Turma</b> : M1

## Problema (LeetCode 56)
<div align="justify">
O desafio solicita uma função que receba como parâmetro uma matriz de pares de inteiros, onde cada um deles representa uma "distância" que vai de seu primeiro dado até seu segundo dado. Ela deve procurar por intersecções entre os valores dos diferentes pares (detectando se os números de um estão contidos parcialmente ou totalmente na distância coberta por outro), de modo a uni-los em um único par. A função deve retornar uma nova matriz sem nenhuma intersecção ao final de sua execução.
</div>

## Testes de Uso
Obs: todas as entradas testadas pelo algoritmo do LeetCode tiveram o retorno esperado.

### Entrada 1 :
int **intervals = { { 1, 3 }, { 2, 6 }, { 8, 10 }, { 15, 18 } }<br/>

<b>Resultado</b> : { { 1, 6 }, { 8, 10 }, { 15, 18 } }

### Entrada 2 :
int **intervals = { { 1, 4 }, { 4, 5 } }<br/>

<b>Resultado</b> : { { 1, 5 } }

### Entrada 3 :
int **intervals = { { 2, 3 }, { 4, 5 }, { 6, 7 }, { 8, 9 }, { 1, 10 } }<br/>

<b>Resultado</b> : { { 1, 10 } }
