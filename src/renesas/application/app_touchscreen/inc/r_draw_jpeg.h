/*******************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only
* intended for use with Renesas products. No other uses are authorized. This
* software is owned by Renesas Electronics Corporation and is protected under
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT
* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
* AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR
* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE
* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software
* and to discontinue the availability of this software. By using this software,
* you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2017 Renesas Electronics Corporation. All rights reserved.
*******************************************************************************/
/******************************************************************************
* File Name    : r_draw_rectangle.h
* Description  : Setting Screen for Touch Screen Application
******************************************************************************/
#ifndef DRAWRECTANGLE_H
#define DRAWRECTANGLE_H

/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/
#include    "r_typedefs.h"

/******************************************************************************
Macro definitions
******************************************************************************/
/* screen size */
#define GRAPHICS_LAYER_WIDTH    (480u)
#define GRAPHICS_LAYER_HEIGHT   (272u)


/******************************************************************************
 Functions Prototypes
 ******************************************************************************/
/**
 * @brief Draw arrow on screen
 * @param in_PointX
 * @param in_PointY
 */
void R_TOUCH_draw_JPEG_cursor( int32_t  in_PointX,  int32_t  in_PointY );

/**
 * @brief Initialize screen for touch screen application
 */
void R_TOUCH_init_screen(void);

/**
 * @brief Un-initialize screen for touch screen application
 */
void R_TOUCH_uninit_screen(void);

#endif  /* IMG_CONFIG_H */