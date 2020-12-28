//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_TIME_H
#define GAMEENGINE_TIME_H

struct TimeValue
{
    unsigned int days;
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
    float fractionalSeconds;
};

class Timer
{
public:

    Timer() = default;
    ~Timer() = default;

protected:

private:

};

#endif //GAMEENGINE_TIME_H
