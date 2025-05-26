-english
# Final Project - Introduction to Programming (Discipline and Student Management)
This repository contains the source code for the final project of the Introduction to Programming discipline. The project is a simple console-based system for managing discipline and student data, developed in the C language.

## Covered Topics and Relation to the Discipline
This project demonstrates the practical application of several fundamental C programming concepts, addressed throughout the Introduction to Programming discipline:

- **Structures (Structs):** Extensive use of struct (e.g., Disciplina, Endereco, Aluno) to define custom data types. This allows for the grouping of related data, facilitating the organization and manipulation of complex information, such as a student's details including their address and enrolled disciplines.

- **File Handling (File I/O):** Persistent storage of Disciplina and Aluno data in binary files (disciplinas and alunos). This involves crucial file operations like fopen (opening files), fread (reading data), fwrite (writing data), rewind (resetting file pointer), remove (deleting files), and rename (renaming files). This demonstrates how data can be maintained across different program executions, a foundational concept for data persistence.

- **Functions and Modularity:** The code is well-structured into distinct functions for each specific operation (e.g., insereDisciplina, mostraAluno, pesquisaDisciplina, atualizaAluno, removeDisciplina, imprimeMenu, crud_disciplina, crud_alunos). This promotes code reusability, improves readability, and enhances the overall maintainability of the project.

- **Loops (while, for):** Utilized for iterating over collections of data (such as a student's enrolled disciplines) and for controlling the logic of file reading and writing. The main program loop (while(1)) ensures continuous operation until the user explicitly chooses to exit.

- **Conditional Structures (if, switch):** Essential for controlling the program's flow. switch statements are used for menu navigation, allowing users to choose different actions, while if conditions handle data validation, search results, and the logic for updating or deleting records.

- **Arrays:** Employed to store multiple discipline IDs (disciplinas[20]) within the Aluno struct, representing the courses a student is currently enrolled in.

- **Strings:** Manipulation of character arrays (strings) for storing and processing textual data such as names, addresses, and state abbreviations. This includes techniques for reading entire lines of input using scanf("%[^\n]", ...).

- **File Pointers (FILE \*):** Declaration and use of pointers to FILE structures to manage access to the data files, enabling the program to perform read and write operations.

- **Basic Data Management Operations (CRUD):** The system implements fundamental CRUD (Create, Read, Update, Delete) operations for both disciplines and students. The update and delete functionalities often involve creating temporary files to rewrite the entire dataset, a common pattern in simple file-based record management.

This final project effectively integrates these fundamental programming concepts to build a functional system that interacts with the user and manages information persistently, reflecting a solid understanding of the Introduction to Programming curriculum.

-português

# Trabalho Final - Introdução à Programação (Gerenciamento de Disciplinas e Alunos)
Este repositório contém o código-fonte do trabalho final da disciplina de Introdução à Programação. O projeto é um sistema simples baseado em console para gerenciamento de dados de disciplinas e alunos, desenvolvido na linguagem C.

## Conteúdos Abordados e Relação com a Disciplina
Este projeto demonstra a aplicação prática de diversos conceitos fundamentais da programação em C, abordados ao longo da disciplina de Introdução à Programação:

- **Estruturas (Structs):** Utilização extensiva de struct (ex: Disciplina, Endereco, Aluno) para definir tipos de dados personalizados. Isso permite agrupar dados relacionados, facilitando a organização e manipulação de informações complexas, como os detalhes de um aluno, incluindo seu endereço e disciplinas matriculadas.

- **Manipulação de Arquivos (File I/O):** Armazenamento persistente de dados de Disciplina e Aluno em arquivos binários (disciplinas e alunos). Isso envolve operações de arquivo cruciais como fopen (abrir arquivos), fread (ler dados), fwrite (escrever dados), rewind (reiniciar ponteiro do arquivo), remove (excluir arquivos) e rename (renomear arquivos). Isso demonstra como os dados podem ser mantidos entre diferentes execuções do programa, um conceito fundamental para persistência de dados.

- **Funções e Modularidade:** O código é bem estruturado em funções distintas para cada operação específica (ex: insereDisciplina, mostraAluno, pesquisaDisciplina, atualizaAluno, removeDisciplina, imprimeMenu, crud_disciplina, crud_alunos). Isso promove a reutilização de código, melhora a legibilidade e a manutenibilidade geral do projeto.

- **Laços de Repetição (while, for):** Utilizados para iterar sobre coleções de dados (como as disciplinas matriculadas de um aluno) e para controlar a lógica de leitura e escrita de arquivos. O laço principal do programa (while(1)) garante a operação contínua até que o usuário escolha sair explicitamente.

- **Estruturas Condicionais (if, switch):** Essenciais para controlar o fluxo do programa. As declarações switch são usadas para a navegação do menu, permitindo que os usuários escolham diferentes ações, enquanto as condições if lidam com a validação de dados, resultados de pesquisa e a lógica para atualizar ou excluir registros.

- **Arrays:** Empregados para armazenar múltiplos IDs de disciplinas (disciplinas[20]) dentro da struct Aluno, representando os cursos nos quais um aluno está atualmente matriculado.

- **Strings:** Manipulação de arrays de caracteres (strings) para armazenar e processar dados textuais como nomes, endereços e abreviações de estados. Isso inclui técnicas para ler linhas inteiras de entrada usando scanf("%[^\n]", ...).

- **Ponteiros para Arquivos (FILE \*):** Declaração e uso de ponteiros para estruturas FILE para gerenciar o acesso aos arquivos de dados, permitindo que o programa realize operações de leitura e escrita.

- **Operações Básicas de Gerenciamento de Dados (CRUD):** O sistema implementa operações CRUD (Criar, Ler, Atualizar, Excluir) fundamentais para disciplinas e alunos. As funcionalidades de atualização e exclusão frequentemente envolvem a criação de arquivos temporários para reescrever todo o conjunto de dados, um padrão comum em gerenciamento de registros baseado em arquivos simples.

Este projeto final integra efetivamente esses conceitos fundamentais de programação para construir um sistema funcional que interage com o usuário e gerencia informações de forma persistente, refletindo uma sólida compreensão do currículo de Introdução à Programação.
