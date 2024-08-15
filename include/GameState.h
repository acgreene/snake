//
// Created by alecgreene on 8/13/24.
//

#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState
{
  public:
    enum State
    {
        MainMenu,
        Playing,
        GameOver,
    };
    explicit GameState(State state);
    [[nodiscard]] State getState() const;
    void setState(State state);

  private:
    State state;
};

#endif // GAMESTATE_H
