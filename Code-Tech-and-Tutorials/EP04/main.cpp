#include <GLFW/glfw3.h>
#include <adder.h>

#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Hey, Zeus!" << std::endl;
    std::cout << add(72.1f, 23.4f);

    GLFWwindow* window;
    int width, height;

    if (!glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(300, 300, "Gears", NULL, NULL);
    if (!window) {
        fprintf(stderr, "Failed to open GLFW window\n");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    // Main loop
    while (!glfwWindowShouldClose(window)) {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0;
}
