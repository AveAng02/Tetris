

#pragma once

#include <SFML/Graphics.hpp>



class Bob
{

public:

    // Create a new character
    Bob();

    // Get a copy of the sprite
    sf::Sprite getSprite();

    // Movement Direction
    void moveLeft();
    void moveRight();

    // Stop Movement
    void stopLeft();
    void stopRight();

    // Updating frame - will be called once every frame update
    void update(float time);

private:

    Vector2f m_Pos;

    Sprite m_sprite;

    Texture m_tex;

    bool m_left_pressed;
    bool m_right_pressed;

    float m_speed;
}

