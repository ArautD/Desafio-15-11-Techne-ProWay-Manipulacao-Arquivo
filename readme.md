Projeto: Manipulação de Arquivos em C++

Este projeto foi desenvolvido como um desafio de prática em C++ para manipulação de arquivos .txt. Ele contém diversas funcionalidades relacionadas a leitura e processamento de texto.

Estrutura do Projeto:
- main.cpp → Ponto de entrada do programa
- menu.cpp / menu.h → Exibe o menu de opções
- contadorLinhas.cpp / contadorLinhas.h → Conta o número de linhas no arquivo
- contadorPalavras.cpp / contadorPalavras.h → Conta o número de palavras no arquivo
- buscadorPalavra.cpp / buscadorPalavra.h → Busca uma palavra específica no arquivo
- exibeMaiorMenor.cpp / exibeMaiorMenor.h → Exibe a maior e a menor palavra do arquivo
- substituirPalavra.cpp / substituirPalavra.h → Substitui uma palavra por outra no arquivo

Funcionalidades:
1. Contar linhas → Mostra quantas linhas existem no arquivo.
2. Contar palavras → Mostra quantas palavras existem no arquivo.
3. Buscar palavra → Permite procurar uma palavra específica.
4. Exibir maior e menor palavra → Mostra a menor e a maior palavra encontradas.
5. Substituir palavra → Troca todas as ocorrências de uma palavra por outra.

Compilação:
No VSCode, já existe uma configuração em tasks.json.
O projeto já possui um executável mas para compilar manualmente via terminal, use:

 g++ -std=c++17 -o programa main.cpp menu.cpp exibeMaiorMenor.cpp contadorPalavras.cpp contadorLinhas.cpp buscadorPalavra.cpp substituirPalavra.cpp

E para executar:

 ./programa

Uso:
1. Execute o programa.
2. Escolha uma opção no menu:
   - (1) Contar linhas
   - (2) Contar palavras
   - (3) Buscar palavra
   - (4) Exibir maior e menor palavra
   - (5) Substituir palavra
   - (0) Sair

Requisitos:
- Compilador g++ com suporte a C++17
- VSCode (opcional, mas recomendado)
- Sistema operacional Windows/Linux/Mac

---
Projeto feito para estudo e prática de manipulação de arquivos em C++.
