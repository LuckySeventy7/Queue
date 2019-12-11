#ifndef QUEUES_H
#define QUEUES_H

class Queue
{
    public:

};

class QueueS
{
    public:
        QueueS();
    unsigned capacity;
        int arr[10];
        virtual ~QueueS();
        void insertar();
        void eliminar();
        void imprimir();

    protected:

    private:
        int cont;
};

#endif // QUEUES_H
