//
// Created by alton on 31/07/2025.
//

#include "button.h"

#include <iostream>
#include <ostream>
#include <thread>

void button::signalFunction()
{
    std::cout << "called signal function" << std::endl;
}

void button::buttonAnimateButton()
{
    auto signalCallback = [this]() {this->signalFunction(); };
    std::thread animationThread(&button::AnimateButton, this, std::ref(colour), signalCallback);
    animationThread.detach();
}
