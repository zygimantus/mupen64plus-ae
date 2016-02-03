/*
* Glide64 - Glide video plugin for Nintendo 64 emulators.
* Copyright (c) 2002  Dave2001
* Copyright (c) 2003-2009  Sergey 'Gonetz' Lipski
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

//****************************************************************
//
// Glide64 - Glide Plugin for Nintendo 64 emulators
// Project started on December 29th, 2001
//
// Authors:
// Dave2001, original author, founded the project in 2001, left it in 2002
// Gugaman, joined the project in 2002, left it in 2002
// Sergey 'Gonetz' Lipski, joined the project in 2002, main author since fall of 2002
// Hiroshi 'KoolSmoky' Morii, joined the project in 2007
//
//****************************************************************
//
// To modify Glide64:
// * Write your name and (optional)email, commented by your work, so I know who did it, and so that you can find which parts you modified when it comes time to send it to me.
// * Do NOT send me the whole project or file that you modified.  Take out your modified code sections, and tell me where to put them.  If people sent the whole thing, I would have many different versions, but no idea how to combine them all.
//
//****************************************************************

void calc_light (VERTEX *v);
void calc_linear (VERTEX *v);
void calc_sphere (VERTEX *v);

#define CopyMatrix(m0, m1, size) memcpy(m0, m1, size)

void math_init(void);

typedef void (*GLIDE64MULMATRIX)(float m1[4][4],float m2[4][4],float r[4][4]); 
extern GLIDE64MULMATRIX glide64MulMatrices;

typedef void (*GLIDE64TRANSFORMVECTOR)(float *src,float *dst,float mat[4][4]); 
extern GLIDE64TRANSFORMVECTOR glide64InverseTransformVector;

typedef float (*GLIDE64DOTPRODUCT)(register float *v1, register float *v2);
extern GLIDE64DOTPRODUCT glide64DotProduct;

typedef void (*GLIDE64NORMALIZEVECTOR)(float *v);
extern GLIDE64NORMALIZEVECTOR glide64NormalizeVector;

#ifndef MulMatrices
#define MulMatrices glide64MulMatrices
#endif

#ifndef InverseTransformVector
#define InverseTransformVector glide64InverseTransformVector
#endif

#ifndef DotProduct
#define DotProduct glide64DotProduct
#endif

#ifndef NormalizeVector
#define NormalizeVector glide64NormalizeVector
#endif
