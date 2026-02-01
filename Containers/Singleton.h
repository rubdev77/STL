#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
    private:
    static Singleton * instance;
    Singleton() { }
    Singleton(const Singleton &) = delete;
    Singleton& operator=(const Singleton &) = delete;
    public:
    static Singleton * getInstance();
};

static Singleton * Singleton::getInstance()
{
    if(instance == nullptr)
    {
        instance = new Singleton();
    }
    return instance;
}