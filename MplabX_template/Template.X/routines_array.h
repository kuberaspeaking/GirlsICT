#ifndef ROUTINES_ARRAY_H
#define	ROUTINES_ARRAY_H
#include "routines_defs.h"
#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
/*
 * routine sizes
 */
#define MAX_ROUTINE_SIZE 10

static const routine_item_t mentor_bubble_routine[MAX_ROUTINE_SIZE] = {
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2} 
};
static const routine_item_t student_bubble_routine[MAX_ROUTINE_SIZE] = {
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2} 
};
static const routine_item_t treasure_bubble_routine[MAX_ROUTINE_SIZE] = {
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2} 
};
static const routine_item_t special_bubble_routine[MAX_ROUTINE_SIZE] = {
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2} 
};
static const routine_item_t paired_bubble_routine[MAX_ROUTINE_SIZE] = {
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2} 
};
static const routine_item_t error_routine[MAX_ROUTINE_SIZE] = {
{Red, Highest, 1000, color_on, 2}, 
{Red, Highest, 1000, color_on, 2}, 
{Red, Highest, 1000, end_routine, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2}, 
{Red, Highest, 1000, color_off, 2} 
};
#ifdef	__cplusplus
}
#endif /* __cplusplus */
#endif	/* ROUTINES_H */
