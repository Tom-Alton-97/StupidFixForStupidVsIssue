//
// Created by alton on 31/07/2025.
//
#include <functional>
#include <string>


#ifndef ANIMATION_H
#define ANIMATION_H



class Animation {
    public:
    Animation() = default;

    void AnimateButton(std::string& colour, std::function<void()> signalCallback);

private:
    std::string buttonColour = "";
};



#endif //ANIMATION_H
