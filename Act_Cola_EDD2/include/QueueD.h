#ifndef QUEUED_H
#define QUEUED_H
#include <iostream>
using namespace std;

class Node
{
    public:
      int num;
      Node *next;
      Node();
};

class QueueD
{
      Node *tail,*head;
public:
      QueueD();

      void insertar();
      void eliminar();
      void imprimir();
      ~QueueD();
};


#endif // QUEUED_H
