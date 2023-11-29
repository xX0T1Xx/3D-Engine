#pragma once
// Includes
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

// Engine includes everything
// When Engine is included, all engine features will be included
#include "Engine/camera.h"
#include "Engine/model.h"
#include "Engine/renderer.h"
#include "Engine/window.h"

namespace Engine {
    extern Window *window;
    extern Renderer *renderer;
    extern Camera *camera;
    void initialize();
}