# __Projeto Metodologia Ágil SCRUM! :partying_face:__

## __1. Integrantes:__

* __Cristian Deyves Oliveira de Brito__
* __Guilherme Camara Lima Chaves__

## __2. Descrição do projeto:__

<p>O projeto da terceira unidade da matéria Linguagem de Programção I tem como objetivo principal fomentar o conhecimento através da criação de um projeto do tema escolhido pela dupla. Iremos abordar o Gerenciador de Tarefas de Metodologia Ágil com SCRUM. Para esse fim, utilizaremos de conhecimentos abordados nas disciplinas de Estrutura de Dados I e Linguagem de Programação I, como conceitos de Classe, sobrecarga de metodos, polimorfismo, entre outros. Também, iremos utilizar de estruturar de dados como listas, filas, pilhas, dicionários, entre outros. Além disso, conceitos de recursividade para a resolução de alguns problemas, somado a funções de ordenação e busca em listas e dicionários pra que o programa seja mais eficiente.<p>
<p>Por fim, o programa será desenvolvido em C++ e compilado com o compilador G++. O projeto SCRUM contará com documentação Doxygen, e um diagrama conceitual implementado pela dupla para agregar valor ao projeto, e facilitar o entendimento do mesmo. O projeto também contará com um arquivo Makefile para facilitar a compilação e execução do programa.<p>


## __Mecanismos de busca:__
<p>A busca é uma operação essencial em muitas aplicações, especialmente quando lidamos com estruturas de dados como listas, dicionários e árvores. No nosso contexto do projeto SCRUM da matéria Linguagem de Programção I, a busca pode ser utilizada para localizar elementos específicos em uma lista de tarefas, um dicionário de equipes ou para encontrar informações relevantes em arquivos de registro.<p>
<p>A busca linear é uma abordagem simples, porém, tem uma complexidade de tempo O(n), onde "n" representa o número de elementos a serem percorridos. Como nosso projeto é pequenos, essa abordagem pode ser suficiente, mas à medida que o volume de dados aumenta, a busca linear torna-se menos eficiente.<p>
<p>Já a busca binária é uma opção mais eficiente para listas que utilizamos neste projeto, pois sua complexidade de tempo é O(log n). No entanto, para usar a busca binária, é necessário que a estrutura de dados esteja previamente ordenada, o que pode adicionar um overhead de tempo ao realizar a inserção e manutenção da ordem.<p>

## __Mecanismos de ordenação:__
<p>A ordenação é crucial quando se deseja apresentar dados de forma organizada, melhorar a eficiência de buscas ou otimizar algoritmos de outros processos no nosso projeto SCRUM. Dentre os algoritmos de ordenação mais comuns, podemos citar o Bubble Sort.<p>
<p>O Bubble Sort é simples de implementar, porém, tem complexidade de tempo O(n^2) no pior caso, o que o torna pouco eficiente para listas maiores. Mas, em nosso projeto, a lista de tarefas é pequena, logo existe um baixo overhead e uma estabilidade que não altera a ordem relativa das tarefas. O que pode ser importante em algum caso que a duplicidade de tarefas deva ser preservada.<p>

## __Como compilar:__

Para compilar o programa, basta executar os seguintes comandos no terminal:

```bash
$ make # Compila o programa
$ make run # Executa o programa
$ make doc # Gera a documentação do programa
$ make test # Executa os testes do programa
$ make clean # Limpa os arquivos objetos do programa
```

Em caso de duvidas, basta executar o comando `make help` para ver os comandos disponíveis.

## __Requisitos:__
+ Compilador G++.

## __Observações:__

* O programa foi desenvolvido e testado em um ambiente Linux, portanto o Makefile não irá funcionar em um ambiente Windows/MacOS.

* O programa foi desenvolvido utilizando a linguagem C++ e compilado com o compilador G++.