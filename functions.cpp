#include "func.h"
#include <stdlib.h>

struct node {
    char* name;
    struct node *next;
};

struct node* head;
head.name = NULL;
head.next = NULL;



void insertNode(char* fileName)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> name = fileName;
    new_node -> next = head;
    head = new_node;
}

bool anyFiles()
{
    fstream checkFile;
    checkFile.open("ToDos/head.txt", ios::out);
    if (checkFile.is_open())
    {
        while (!eof())
        {
            
        }
    }
}

void viewList()
{

}


void addTask()
{

}


void removeTask()
{

}


void newList()
{

}