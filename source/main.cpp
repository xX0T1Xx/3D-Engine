#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

// Engine
#include "Engine/Engine.h"

// This main function is a demo on how to use the core features of the game engine
int main(void)
{

    // Initialize Engine
    Engine::initialize();

    // Changing title
    Engine::window->setWindowTitle("Game");

    // Create Model
    Model model = Model("assets/objs/THEY.obj", "assets/bmps/CARDBOARD.bmp");

    // Create Sprite
    Sprite sprite = Sprite("assets/sprites/HUD.bmp");
    sprite.posX = 0;
    sprite.posY = 0;

    // Engine
    while (!Engine::window->shouldClose())
    {
        // Update Camera
        Engine::camera->update();

        // Rendering
        Engine::renderer->update();
        Engine::renderer->renderModel(model);
        Engine::renderer->renderSprite(sprite);

        // Swap screen buffers and poll for events
        Engine::window->update();
    }

    // End
    Engine::window->closeWindow();
    return 0;
}