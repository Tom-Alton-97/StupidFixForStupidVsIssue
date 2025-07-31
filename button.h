//
// Created by alton on 31/07/2025.
//

#ifndef BUTTON_H
#define BUTTON_H

#include "Animation.h"

class button : public Animation {
    Q_OBJECT
        Q_PROPERTY(QString colour READ colour WRITE setColour NOTIFY colourChanged)
public:
    button()= default;

    Q_String Colour() const;

    void setColour(const Q_String& value);
    void buttonAnimateButton();
    public slots:
    void signalFunction();

    signals:
    void colourChanged();

    std::string colour = "";
private:
    Q_String m_colour;

};



#endif //BUTTON_H
