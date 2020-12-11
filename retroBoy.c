#include <gb/gb.h>
#include <stdio.h>

int main( int argc, const char* argv[]) {
    printf("hello world :) \n");
    UINT8 currentSpriteIdx = 0;
    set_sprite_data(0, 2, Kanti);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while(1){
        if(currentSpriteIdx == 0){
            currentSpriteIdx = 1;
        } else {
            currentSpriteIdx = 0;
        }
        set_sprite_tile(0, currentSpriteIdx);
        delay(500)
    }
    return 0;
}