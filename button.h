//
// Created by alton on 31/07/2025.
//

#ifndef BUTTON_H
#define BUTTON_H

#include "Animation.h"

class button : public Animation {
public:
    button()= default;

    void buttonAnimateButton();
    void signalFunction();
    std::string colour = "";
private:
    Animation anim;
};



#endif //BUTTON_H
