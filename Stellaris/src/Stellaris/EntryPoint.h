#pragma once

#ifdef STELLARIS_WINDOWS

extern Stellaris::Application *Stellaris::CreateApplication();

int main(int argc, char **argv)
{
    auto app = Stellaris::CreateApplication();
    app->Run();
    delete app;
}

#endif // STELLARIS_WINDOWS
