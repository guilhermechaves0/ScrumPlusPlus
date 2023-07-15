#include <iostream>
#include <string>
#include "../include/stakeHolder.hpp"
#include "../include/scrumMaster.hpp"
#include "../include/productOwner.hpp"
#include "../include/developer.hpp"
#include "../include/tester.hpp"

int main()
{
    std::cout << "----- Bem vindo ao sistema de gerenciamento de tarefas! -----" << std::endl;
    std::cout << "Escolha uma opção:                                           " << std::endl;
    std::cout << "      1 - Logar como ScrumMaster                              " << std::endl;
    std::cout << "      2 - Logar como ProductOwner                             " << std::endl;
    std::cout << "      3 - Logar como Developer                                " << std::endl;
    std::cout << "      4 - Logar como Tester                                   " << std::endl;
    std::cout << "      0 - Sair                                               " << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl
              << std::endl;
    int i = -1;
    while (i < 0 || i > 5)
    {
        std::cout << "Digite sua opção: ";
        std::cin >> i;
        std::cin.ignore();
        std::cout << std::endl;
    }

    std::vector<Tasks> tarefas;

    switch (i)
    {
    case 1:
    {
        std::cout << "Qual é o seu nome? ";
        std::string nome;
        std::getline(std::cin, nome);
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
        std::cout << "Bem vindo, " << nome << "!" << std::endl;
        std::cout << "Vejo que você é um ScrumMaster. O que deseja fazer? " << std::endl;
        std::cout << "          1 - Criar uma tarefa                      " << std::endl;
        std::cout << "          2 - Priorizar uma tarefa existente        " << std::endl;
        std::cout << "          3 - Listar tarefas                        " << std::endl;
        std::cout << "          0 - Sair                                  " << std::endl;
        std::cout << "----------------------------------------------------" << std::endl
                  << std::endl;
        int j = -1;
        while (j < 0 || j > 3)
        {
            std::cout << "Digite sua opção: ";
            std::cin >> j;
            std::cin.ignore();
            std::cout << std::endl;
        }

        if (j == 1)
        {
            std::cout << "Vamos criar uma tarefa!" << std::endl;
            std::cout << "Qual é o nome da tarefa? ";
            std::string nome;
            std::getline(std::cin, nome);
            std::cout << "Qual é a descrição da tarefa? ";
            std::string descricao;
            std::getline(std::cin, descricao);
            std::cout << "Qual é a prioridade da tarefa? ";
            std::string prioridade;
            std::getline(std::cin, prioridade);
            std::cout << "Qual é o responsável pela tarefa? ";
            std::string responsavel;
            std::getline(std::cin, responsavel);

            StakeHolder *sh = new ScrumMaster(nome, descricao, prioridade, responsavel);
            int id = 1; // ID da tarefa
            sh->cadastrarTarefa(id, tarefas);

            std::cout << "Lista de tarefas: " << std::endl;
            for (const auto &tarefa : tarefas)
            {
                std::cout << tarefa.getNome() << std::endl;
            }

            delete sh;
        }

        break;
    }

    case 2:
    {
        std::cout << "Qual é o seu nome? ";
        std::string nome;
        std::getline(std::cin, nome);
        std::cout << "Bem vindo, " << nome << "!" << std::endl;
    }

    case 3:
    {
        std::cout << "Qual é o seu nome? ";
        std::string nome;
        std::getline(std::cin, nome);
        std::cout << "Bem vindo, " << nome << "!" << std::endl;
    }

    case 4:
    {
        std::cout << "Qual é o seu nome? ";
        std::string nome;
        std::getline(std::cin, nome);
        std::cout << "Bem vindo, " << nome << "!" << std::endl;
    }

    case 5:
    {
        std::cout << "Qual é o seu nome? ";
        std::string nome;
        std::getline(std::cin, nome);
        std::cout << "Bem vindo, " << nome << "!" << std::endl;
    }

    case 0:
    {
        std::cout << "Saindo..." << std::endl;
        break;
    }
    }

    return 0;
}