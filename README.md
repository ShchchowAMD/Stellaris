# Stellaris
LGD NB

#### Develop Plan

- Entrypoint
- Application layer
- Window layer
- Event
    - Input
- Renderer
- Debugging support
- Scripting language
- Memory system
- Entity-component-system
- Physics
- File IO
- Build system

and more...

#### Basic usage

- Stellaris: the game engine, will be built as a dll.
- Sandbox: the game, will be built as a exe.

- Visual Studio Solution will be generated automatically. All you need to do is execute GenerateProjects.bat, it will do every thing for you.
- Once VS Solution is generated, you may build projects. First time build will be fail, because it will copy Stellaris.dll to the same dir as Sandbox.exe, which is not exixt right now; build second time will work.


CG NB