//
// Created by alecgreene on 8/12/24.
//

#ifndef SNAKE_H
#define SNAKE_H
#include <vector>

enum Direction
{
    Up,
    Left,
    Right,
    Down
};

class Snake
{
  public:
    Snake();

    /**
     * @brief Moves the snake in the specified direction.
     * @param direction the direction to move the snake, left, right, up or down.
     */
    void move(Direction direction);

    /**
     * @brief Increases the snake body size by the specified amount.
     * @param amount the amount in which to increase the snakes body by
     */
    void grow(int amount);

    void reset();
    bool checkCollision();
    void render();

  private:
    struct SnakeSegment
    {
        int x, y;
    };

    std::vector<SnakeSegment> body;
    Direction direction;
};

#endif // SNAKE_H
