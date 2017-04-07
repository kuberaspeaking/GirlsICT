#ifndef ROUTINES_DEF_H
#define	ROUTINES_DEF_H
#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum colors_names {
    off = 0,	
    White,	
    Red,		
    Lime,	
    Blue,	
    Yellow,	
    Cyan, 	
    Magenta,
    Silver,	
    Gray,	
    Maroon,	
    Olive,	
    Green,	
    Purple,	
    Teal,	
    Navy,   
    all_colors_num
}colors_names_t;

typedef enum RGB_brightness_level{
    Highest=1,
    high,
    low,
    lowest,
    level_num
}RGB_brightness_level_t;

/*
 * to define routine available actions 
 */
typedef enum routine_action {
    color_off = 0,
    color_on,
    color_flash,
    color_one_time,
    loop_brigtness
}routine_action_t;

/*
 * store the RGB values
 */
typedef struct strRGB{
    uint16_t Red;
    uint16_t Green;
    uint16_t Blue; 
}strRGB_t;
/*
 * Store a routine Item
 */
typedef struct routine_item {
   colors_names_t color;            // to store color RGB values
   RGB_brightness_level_t b_level;  // to store brightness level
   uint16_t action_duration_ms;     // to store action time (delay, flash ...etc.)
   routine_action_t action;         // to store the action type
   uint8_t num_of_repeats;          // to store how many times this action is repeated
}routine_item_t;

#ifdef	__cplusplus
}
#endif /* __cplusplus */
#endif	/* ROUTINES_DEF_H */
