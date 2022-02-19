# so_long
A top down 2D game in C and minilibX (graphics library made by 42 school)

## The game:
Your goal is to collect every collectible on the map, and then escape.
### Movement:
- **W** to move up.
- **S** to move down.
- **A** to move left.
- **D** to move right.
> You can also move with arrow keys.
### The goal:
You are a fox and you need to eat all the chicken in the map, then you will be able to exit and win the game.

## How to play ?
Run `make` and then run `so_long ./maps/` and choose a map file from the folder.
If you wanna play the complete game with animation and enemies go to the folder name **so_long_bonus** and run `make` and then `so_long_bonus ./maps` and choose a map.

##Create your own map:
create a `.ber` file with:
- **1** is the wall.
- **0** is the grass.
- **P** is the player.
- **E** is the exit.
- **C** is the collectible.

**This is my first 2D game, I had so much fun creating my own assets and coding it, I ran into some problems like player animation and memory leaks, but overall I loved working in this project.**
