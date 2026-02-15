# Super Trunfo – Nível Aventureiro

Projeto desenvolvido em linguagem C como atividade da disciplina Introdução à Programação de Computadores.  
O programa simula a comparação de cartas do jogo Super Trunfo, utilizando estruturas de decisão e um menu interativo.

## Objetivo
Implementar a lógica de comparação entre duas cartas a partir de um atributo escolhido pelo usuário, aplicando os conceitos básicos de programação em C.

## Funcionalidades
- Comparação entre duas cartas de países
- Menu interativo utilizando `switch`
- Comparação dos seguintes atributos:
  - População
  - Área
  - PIB
  - Pontos turísticos
  - Densidade demográfica
- Regra especial para densidade demográfica (menor valor vence)
- Exibição de empate quando os valores são iguais
- Tratamento de opção inválida no menu

## Conteúdos aplicados
- Estruturas de decisão (`if`, `else if`, `else`)
- Estrutura de seleção `switch`
- Operadores relacionais
- Entrada e saída de dados com `scanf` e `printf`

## Compilação
Para compilar o programa, utilize o comando:

```bash
gcc super_trunfo.c -o super_trunfo
Após a compilação, execute:
./super_trunfo
