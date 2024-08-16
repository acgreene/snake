//
// Created by alecgreene on 8/13/24.
//
#include "GameState.h"

GameState::GameState(State const state)
{
    this->state = state;
}

GameState::State GameState::getState() const
{
    return state;
}

void GameState::setState(State const state)
{
    this->state = state;
}
