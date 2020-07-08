#include <Stellaris.h>  // A game only need to include this file

class Sandbox : public Stellaris::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }
};

Stellaris::Application *Stellaris::CreateApplication()
{
    return new Sandbox();
}