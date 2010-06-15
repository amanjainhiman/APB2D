#ifndef _APBSPRITE_H_#define _APBSPRITE_H_#include <SDL.h>#include "APBSurface.h"#include "APBAnimation.h"class APBSprite {public:    APBSprite();    ~APBSprite();    int cleanup();    // Movement etc.public:    void moveTo( int x, int y );    void moveRelative( int dx, int dy );    void setSurface( APBSurface& surface );    void setAnimation( APBAnimation& animation );    virtual void update();    virtual void animate();    SDL_Rect getDirtyRectangle();private:    bool alive;    bool visible;    int x;    int y;    APBAnimation* animation;    APBSurface* surface;};#endif // APBSPRITE_H_