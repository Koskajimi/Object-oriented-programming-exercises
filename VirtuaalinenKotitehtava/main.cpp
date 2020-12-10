#include <iostream>
using namespace std;

class A
{

public:

    A()
    {
        cout << "A:n muodostin" << endl;
    }

    virtual ~A()
    {
        cout << "A:n tuhoaja" << endl;
    }
    virtual void f()

    const
    {
        cout << "A:n f()" << endl;
    }
    void gf()
    {
        cout << "A:n gf()" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B:n muodostin" << endl;
    }
virtual ~B()
    {
        cout << "B:n tuhoaja" << endl;
    }
    virtual void f() const override
    {
        cout << "B:n f()" << endl;
    }
    void gf()
    {
        cout << "B:n gf()" << endl;

    }
};

int main()
{
    A *object = new B();

object->f();
object->gf();

delete object;

return 0;
}
