/*
 * tab:2
 *
 * mystery.c
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice and the following
 * two paragraphs appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE AUTHOR OR THE UNIVERSITY OF ILLINOIS BE LIABLE TO
 * ANY PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
 * DAMAGES ARISING OUT  OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION,
 * EVEN IF THE AUTHOR AND/OR THE UNIVERSITY OF ILLINOIS HAS BEEN ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE AUTHOR AND THE UNIVERSITY OF ILLINOIS SPECIFICALLY DISCLAIM ANY
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND NEITHER THE AUTHOR NOR
 * THE UNIVERSITY OF ILLINOIS HAS ANY OBLIGATION TO PROVIDE MAINTENANCE,
 * SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Author:        Aamir Hasan
 * Version:       1
 * Creation Date: Sun Aug 30 2020
 * Filename:      mystery.c
 * History:
 *    AH    1    Sun Aug 30 2020
 *        First written.
 */

#include "mystery.h"

int32_t mystery_c(uint32_t opcode, uint32_t x, uint32_t y){

  //------- YOUR CODE HERE -------

  if (opcode == 0){
    // typecast int to int* and access the y-th element
    return ((int*)x)[y] ;
  } else if (opcode == 1){
    // x + 8y - y is stored in %EAX
    return x+7*y;
  } else if (opcode == 2){
    // the remainder is stored in %EDX after divl, and it is moved to %EAX
    return x%y;
  } else{
    // immediate value 0xBAD is returned
    return 0xBAD;
  }
  //------------------------------
}