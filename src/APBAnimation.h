#ifndef _APBANIMATION_H_#define _APBANIMATION_H_#include <SDL.h>class APBAnimation{private:    int currentFrame;    int frameInc;private:    int frameRate; //Milliseconds    long oldTime;public:    int	maxFrames;    bool loop;    bool oscillate;public:    APBAnimation();    void animate();public:    void setFrameRate(int rate);    void setCurrentFrame(int frame);    int getCurrentFrame();};#endif