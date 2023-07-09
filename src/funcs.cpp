#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "tasks.hpp"


std::vector<Tasks> readTasksFromFile(const std::string& filename)
{
    std::vector<Tasks> tasks;
    std::ifstream file(filename);

    if(!file.is_open())
    {
        std::cout << "Erro ao abrir o arquivo." << filename << std::endl;
        return tasks;
    }

    std::string line;
    while(std::getline(file, line))
    {
        while(std::getline(file, line))
        {
            std::stringstream ss(line);
            std::string token;
            std::vector<std::string> attributes;

            while(std::getline(ss, token, ','))
            {
                attributes.push_back(token);
            }

            if(attributes.size() != 6)
            {
                std::cout << "Fromato inválido da linha." << filename << std::endl;
                continue;
            }

            int id = std::stoi(attributes[0]);
            std::string nome = attributes[1];
            std::string dataCriacao = attributes[2];
            std::string dataEntrega = attributes[3];
            std::string prioridade = attributes[4];
            Tasks::Status status = Tasks::convertToStatus(attributes[5]);

            Tasks task(id, nome, dataCriacao, dataEntrega, prioridade);
            tasks.push_back(task);
        }        
        file.close();
        return tasks;
    }
}

void listAllTasks(const std::vector<Tasks>& tasks)
{
    std::cout << "Listando todas as tarefas..." << std::endl;
    for(const auto& task : tasks)
    {
        std::cout << "ID: " << task.getId() << ", Nome: " << task.getNome() << ", Data de criação: " << task.getDataCriacao() << ", Data de entrega: " << task.getDataEntrega() << ", Prioridade: " << task.getPrioridade() << ", Status: " << static_cast<int>(task.getStatus()) << std::endl;
    }
}

bool isTaskIdDuplicate(const std::vector<Tasks>& tasks, int taskId) {
    for (const auto& task : tasks) {
        if (task.getId() == taskId) {
            return true; // ID duplicado encontrado
        }
    }
    return false; // ID não encontrado
}

void AddNewTask(std::vector<Tasks>& tasks, const Tasks& newTask)
{
    if (isTaskIdDuplicate(tasks, newTask.getId())) {
        std::cout << "A tarefa com ID " << newTask.getId() << " já está cadastrada." << std::endl;
    } else {
        tasks.push_back(newTask);
        std::cout << "Nova tarefa cadastrada:" << std::endl;
        std::cout << "ID: " << newTask.getId() << ", Nome: " << newTask.getNome() << ", Status: " << static_cast<int>(newTask.getStatus()) << std::endl;
    }
}