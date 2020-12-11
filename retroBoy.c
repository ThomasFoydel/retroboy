#include <gb/gb.h>
#include <stdio.h>
#include "KantiSprites.c"

int main( int argc, const char* argv[]) {
    printf("hello world :) \n");
    UINT8 currentSpriteIdx = 0;
    set_sprite_data(0, 2, Kanti);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    int speedDownRight = 10;
    int speedUpLeft = 0 - speedDownRight;

    while(1){
        switch(joypad()){
            case J_LEFT:
                scroll_sprite(0,-speedUpLeft,0);
                break;
            case J_RIGHT:
                scroll_sprite(0,speedDownRight,0);
                break;
            case J_UP:
                scroll_sprite(0,0,speedUpLeft);
                break;
            case J_DOWN:
                scroll_sprite(0,0,speedDownRight);
                break;
            }
            delay(100);
    }
    return 0;
}