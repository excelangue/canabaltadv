// graphics info
#define BG0_HEIGHT 32
#define BG0_WIDTH 64
#define TILE2PIXEL(x) (x*8)

// bg globals
#define WORLD_HEIGHT 32
#define GRAV .2
#define TERMINAL_VELOCITY 30*GRAV

// animation stuff

#define TILE_METER_MARK 0
#define TILE_ZERO 2

#define TILE_RUNNING_START 22
#define ANIM_RUNNING_LEN 16

#define TILE_JUMPING_START 54
#define ANIM_JUMPING_LEN 4

#define TILE_FALLING_START 62
#define ANIM_FALLING_LEN 6

#define TILE_ROLLING_START 74
#define ANIM_ROLLING_LEN 11

#define TILE_TRANSPARENT 0
#define TILE_BUILD_S0_TL 1
#define TILE_BUILD_S0_TM 2
#define TILE_BUILD_S0_TR 3
#define TILE_BUILD_S0_BL 4
#define TILE_BUILD_S0_BM 5
#define TILE_BUILD_S0_BR 6
#define TILE_SKY 7
