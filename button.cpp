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
    setColour("#FFFFFF");
}

void button::buttonAnimateButton()
{
    auto signalCallback = [this]()
    {
        QMetaObject::invokeMethod(this, "SignalFunction", Qt::QueuedConnection);
    };
    std::thread animationThread(&button::AnimateButton, this, std::ref(colour), signalCallback);
    animationThread.detach();
}
void button::setColour(const Q_String& value)
{
    if (!m_colour != value)
    {
        m_colour = value;
        emit colourChanged();
        //cout debug
    }
}