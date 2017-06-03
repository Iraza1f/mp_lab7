#include <iostream>
using namespace std;
class Singleton
{
    private:
        static Singleton* instance;
        Singleton();

    public:
        static Singleton* getInstance();
};

Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance()
{
    if (instance == 0)
    {
        instance = new Singleton();
    }

    return instance;
}


Singleton::Singleton()
{}

int main()
{
    Singleton* s = Singleton::getInstance();
    Singleton* r = Singleton::getInstance();
    cout << s << endl;
    cout << r << endl;
    return 0;
}
