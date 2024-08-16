//
// Created by alecgreene on 8/12/24.
//

#include "GameEngine.h"
#include <iostream>

int main()
{
    GameEngine const engine;
    if (!engine.init())
    {
        std::cout << "Failed to initialize game engine." << std::endl;
        return 1;
    }

    engine.run();
    engine.end();

    return 0;
}
