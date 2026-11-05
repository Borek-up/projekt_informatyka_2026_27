
#pragma once

class Pilka {
    private:
    float x, y, vx, vy, r;

    public:
    // Konstruktor pilki
    Pilka(float sx, float sy, float svx, float svy, float sr);
    // Gettery tylko do odczytu dlatego const.
    float getX() const {return x;}
    float getY() const {return y;}
    float getR() const {return r;}
    void odbijX();
    void odbijY();
    void przesun(float dt);
    
};