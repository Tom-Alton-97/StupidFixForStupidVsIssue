#include <iostream>
#include <thread>

#include "button.h"
#include "animation.h"
int main()
{
    button btn{};

    btn.buttonAnimateButton();

    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "main color: " << btn.colour << std::endl;
    }
    return 0;
}