//
// Created by alton on 31/07/2025.
//

#include "Animation.h"

#include <iostream>
#include <thread>
#include <mutex>

void Animation::AnimateButton(std::string& colour, std::function<void()> signalCallback)
{
    std::string colour1 = "red";
    std::string colour2 = "blue";
    std::mutex colourLock;
    int i{0};
    while (i < 10)
    {
        colourLock.lock();
        colour = colour1;
        signalCallback();
        colourLock.unlock();
        std::this_thread::sleep_for(std::chrono::seconds(1));
        i++;
        std::cout << i << std::endl;
    }
    colourLock.lock();
    colour = colour2;
    std::cout << colour << std::endl;
    signalCallback();
    colourLock.unlock();
}