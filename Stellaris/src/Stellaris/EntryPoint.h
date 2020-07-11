#pragma once

#ifdef STELLARIS_WINDOWS

extern Stellaris::Application *Stellaris::CreateApplication();

int main(int argc, char **argv)
{
    Stellaris::Log::Init();
    STELLARIS_CORE_WARN("Initialized Log!");

    int a = 5;
    STELLARIS_INFO("Hello! Var = {0}", a);


    auto app = Stellaris::CreateApplication();
    app->Run();
    delete app;
}

#endif // STELLARIS_WINDOWS
