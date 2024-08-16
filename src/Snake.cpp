//
// Created by alecgreene on 8/12/24.
//
#include "Snake.h"
#include <iostream>

Snake::Snake() = default;

void Snake::move(Direction const direction)
{
    this->direction = direction;
}

void Snake::grow(int amount)
{
    this->body.push_back({0, 0});
}