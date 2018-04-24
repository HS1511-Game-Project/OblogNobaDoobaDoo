
// Created by Harris Borman, Djimon Jayasundera, and Zachary Chengy
// This program aims to test the game and see if it is valid.

#include <stdio.h>
#include <stdlib.h>
#include "Game.h"

int main(/* Add argv stuff here */) {
  
  // If you want to create a new board, use the corropsonding test number
  
  // TEST 1 // getWhoseTurn and makeAction - Djimon
  printf("Testing getWhoseTurn and makeAction.");
  Game newBoard;
  playerID = getWhoseTurn(newBoard);
  makeAction(newBoard, NEXT_TURN); // MUST BE DEFINED IN GAME.H TO BE A NUMBER FOR THE FUNCTION
  assert(playerID != getWhoseTurn(newBoard)); // Check that it is now a different person's turn.
  
  // TEST 2 //  isLegalAction, board coordinates - Zac
  printf("Testing isLegalAction and board coordinates.");
  Game newBoard;
  // Supposed to be false ( out of the board )
  assert(isLegalAction(newBoard,path "llll") == 0);
  assert(isLegalAction(newBoard,path "rrrr") == 0);
  
  assert(isLegalAction(newBoard,path "lrlrlrlrlr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrlrlrl") == 1);
  
  assert(isLegalAction(newBoard,path "llrlrrrr") == 1);
  assert(isLegalAction(newBoard,path "rrlrllll") == 1);
  
  assert(isLegalAction(newBoard,path "lllrrr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrlllrr") == 1);
  assert(isLegalAction(newBoard,path "llrlrlrrrl") == 1);
  assert(isLegalAction(newBoard,path "rllrrlrllr") == 1);
  assert(isLegalAction(newBoard,path "rrllrrlrll") == 1);
  assert(isLegalAction(newBoard,path "lrlrlrrl") == 1);
  assert(isLegalAction(newBoard,path "rrrrllll") == 1);
  assert(isLegalAction(newBoard,path "rrrrlllrll") == 1);
  assert(isLegalAction(newBoard,path "rrlrrllllr") == 1);
  assert(isLegalAction(newBoard,path "rlrrlrrlll") == 1);
  assert(isLegalAction(newBoard,path "rlllrrrrll") == 1);
  assert(isLegalAction(newBoard,path "rlrlllrr") == 1);
  assert(isLegalAction(newBoard,path "rllrrlrl") == 1);
  assert(isLegalAction(newBoard,path "rllrrllrrl") == 1);
  assert(isLegalAction(newBoard,path "lrllrrrl") == 1);
  assert(isLegalAction(newBoard,path "rrlllrrllr") == 1);
  assert(isLegalAction(newBoard,path "lrrrlrlrll") == 1);
  assert(isLegalAction(newBoard,path "lrlrrlrllr") == 1);
  assert(isLegalAction(newBoard,path "rrrlrllrll") == 1);
  assert(isLegalAction(newBoard,path "lrllrrlr") == 1);
  assert(isLegalAction(newBoard,path "rrlllrrlrl") == 1);
  assert(isLegalAction(newBoard,path "rlllrr") == 1);
  assert(isLegalAction(newBoard,path "lrrlrlrllr") == 1);
  assert(isLegalAction(newBoard,path "rllrrrllrl") == 1);
  assert(isLegalAction(newBoard,path "rlrllr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrllr") == 1);
  assert(isLegalAction(newBoard,path "rrllrrll") == 1);
  assert(isLegalAction(newBoard,path "rlrrlllrrl") == 1);
  assert(isLegalAction(newBoard,path "rlllrrlrlr") == 1);
  assert(isLegalAction(newBoard,path "lrrrrrllll") == 1);
  assert(isLegalAction(newBoard,path "rlllrlrr") == 1);
  assert(isLegalAction(newBoard,path "rrlrrllrll") == 1);
  assert(isLegalAction(newBoard,path "llrrrllrrl") == 1);
  assert(isLegalAction(newBoard,path "rlrrlrll") == 1);
  assert(isLegalAction(newBoard,path "llllrlrrrr") == 1);
  assert(isLegalAction(newBoard,path "rllrrllr") == 1);
  assert(isLegalAction(newBoard,path "rlllrllrrr") == 1);
  assert(isLegalAction(newBoard,path "lrrl") == 1);
  assert(isLegalAction(newBoard,path "rlrrlllr") == 1);
  assert(isLegalAction(newBoard,path "rrrrllrlll") == 1);
  assert(isLegalAction(newBoard,path "rlllrlrlrr") == 1);
  assert(isLegalAction(newBoard,path "rrrllrlrll") == 1);
  assert(isLegalAction(newBoard,path "rrlllrllrr") == 1);
  assert(isLegalAction(newBoard,path "lrrlrrllrl") == 1);
  assert(isLegalAction(newBoard,path "rllllrrlrr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrrrlll") == 1);
  assert(isLegalAction(newBoard,path "lllrrrrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrrrlllr") == 1);
  assert(isLegalAction(newBoard,path "rrllrlrllr") == 1);
  assert(isLegalAction(newBoard"rlrrrllllr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrlrrll") == 1);
  assert(isLegalAction(newBoard,path "rrllrllr") == 1);
  assert(isLegalAction(newBoard,path "rlrrllrl") == 1);
  assert(isLegalAction(newBoard,path "lrrrrllllr") == 1);
  assert(isLegalAction(newBoard,path "rlllrlrrlr") == 1);
  assert(isLegalAction(newBoard,path "rrllrlrlrl") == 1);
  assert(isLegalAction(newBoard,path "rrrllllrlr") == 1);
  assert(isLegalAction(newBoard,path "llrlrlrr") == 1);
  assert(isLegalAction(newBoard,path "rrrlll") == 1);
  assert(isLegalAction(newBoard,path "llrrrllrlr") == 1);
  assert(isLegalAction(newBoard,path "rrlllrrrll") == 1);
  assert(isLegalAction(newBoard,path "rlllllrrrr") == 1);
  assert(isLegalAction(newBoard,path "lrrlrllrlr") == 1);
  assert(isLegalAction(newBoard,path "lrrlrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrlrlllrrr") == 1);
  assert(isLegalAction(newBoard,path "rlrlllrrlr") == 1);
  assert(isLegalAction(newBoard,path "lrrrllllrr") == 1);
  assert(isLegalAction(newBoard,path "llrr") == 1);
  assert(isLegalAction(newBoard,path "lrlllrrlrr") == 1);
  assert(isLegalAction(newBoard,path "llrrlrrl") == 1);
  assert(isLegalAction(newBoard,path "lrlrllrrrl") == 1);
  assert(isLegalAction(newBoard,path "llrrllrlrr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrrllrl") == 1);
  assert(isLegalAction(newBoard,path "rrrlllrl") == 1);
  assert(isLegalAction(newBoard,path "lrrrllrl") == 1);
  assert(isLegalAction(newBoard,path "lrlrrrlllr") == 1);
  assert(isLegalAction(newBoard,path "rllrlrlrlr") == 1);
  assert(isLegalAction(newBoard,path "rlrllrrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrlllrrr") == 1);
  assert(isLegalAction(newBoard,path "lllrrlrr") == 1);
  assert(isLegalAction(newBoard,path "llrllrrr") == 1);
  assert(isLegalAction(newBoard,path "llrrlrllrr") == 1);
  assert(isLegalAction(newBoard,path "lrrrlllrrl") == 1);
  assert(isLegalAction(newBoard,path "rlllrrlrrl") == 1);
  assert(isLegalAction(newBoard,path "rllrlrrllr") == 1);
  assert(isLegalAction(newBoard,path "lrlrlrrlrl") == 1);
  assert(isLegalAction(newBoard,path "rrrrllllrl") == 1);
  assert(isLegalAction(newBoard,path "lrllrlrrrl") == 1);
  assert(isLegalAction(newBoard,path "llrlrrrllr") == 1);
  assert(isLegalAction(newBoard,path "lrrlllrr") == 1);
  assert(isLegalAction(newBoard,path "lrrlllrrlr") == 1);
  assert(isLegalAction(newBoard,path "rrrllrlllr") == 1);
  assert(isLegalAction(newBoard,path "llrrrrlllr") == 1);
  assert(isLegalAction(newBoard,path "llrlrrrl") == 1);
  assert(isLegalAction(newBoard,path "lrrlllrlrr") == 1);
  assert(isLegalAction(newBoard,path "rrlrlrrlll") == 1);
  assert(isLegalAction(newBoard,path "lrrlrrll") == 1);
  assert(isLegalAction(newBoard,path "llrrlrrlrl") == 1);
  assert(isLegalAction(newBoard,path "llrllrrrlr") == 1);
  assert(isLegalAction(newBoard,path "rrllrrllrl") == 1);
  assert(isLegalAction(newBoard,path "rrlrrlrlll") == 1);
  assert(isLegalAction(newBoard,path "llrllrrlrr") == 1);
  assert(isLegalAction(newBoard,path "rllrrlrrll") == 1);
  assert(isLegalAction(newBoard,path "rlllrrrllr") == 1);
  assert(isLegalAction(newBoard,path "lllrrrlrrl") == 1);
  assert(isLegalAction(newBoard,path "rlrrrllrll") == 1);
  assert(isLegalAction(newBoard,path "llrlllrrrr") == 1);
  assert(isLegalAction(newBoard,path "rrllrlrrll") == 1);
  assert(isLegalAction(newBoard,path "rllrlr") == 1);
  assert(isLegalAction(newBoard,path "rrrlllrllr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrllrrl") == 1);
  assert(isLegalAction(newBoard,path "rllrrrlrll") == 1);
  assert(isLegalAction(newBoard,path "llrlrrrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrrrrllrll") == 1);
  assert(isLegalAction(newBoard,path "llrrlrrrll") == 1);
  assert(isLegalAction(newBoard,path "rlrlrllr") == 1);
  assert(isLegalAction(newBoard,path "lrrllrlr") == 1);
  assert(isLegalAction(newBoard,path "lllrrlrrlr") == 1);
  assert(isLegalAction(newBoard,path "lrrlrrlllr") == 1);
  assert(isLegalAction(newBoard,path "lrlrlr") == 1);
  assert(isLegalAction(newBoard,path "lllrrlrrrl") == 1);
  assert(isLegalAction(newBoard,path "rrlrlllrrl") == 1);
  assert(isLegalAction(newBoard,path "rrlrlrllrl") == 1);
  assert(isLegalAction(newBoard,path "llrllrlrrr") == 1);
  assert(isLegalAction(newBoard,path "rllrrlrlrl") == 1);
  assert(isLegalAction(newBoard,path "rlrrrrllll") == 1);
  assert(isLegalAction(newBoard,path "lrlrlrrrll") == 1);
  assert(isLegalAction(newBoard,path "lllrlrrr") == 1);
  assert(isLegalAction(newBoard,path "lrrllllrrr") == 1);
  assert(isLegalAction(newBoard,path "lrlrlrlrlr") == 1);
  assert(isLegalAction(newBoard,path "lrlrllrlrr") == 1);
  assert(isLegalAction(newBoard,path "lrllrrlrlr") == 1);
  assert(isLegalAction(newBoard,path "rrllrllrlr") == 1);
  assert(isLegalAction(newBoard,path "rrlrlllr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrrlrll") == 1);
  assert(isLegalAction(newBoard,path "lrlrlrllrr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrllrrrlrl") == 1);
  assert(isLegalAction(newBoard3,"llrlrlrrlr") == 1);
  assert(isLegalAction(newBoard3,"llrrlrlrrl") == 1);
  assert(isLegalAction(newBoard,path "rlrlrllrrl") == 1);
  assert(isLegalAction(newBoard,path "llrlrrlrlr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrllrlr") == 1);
  assert(isLegalAction(newBoard,path "lrrrlrllrl") == 1);
  assert(isLegalAction(newBoard,path "lrlrrrlrll") == 1);
  assert(isLegalAction(newBoard,path "rlrrlllrlr") == 1);
  assert(isLegalAction(newBoard,path "rlrllrlr") == 1);
  assert(isLegalAction(newBoard,path "llrrrlrllr") == 1);
  assert(isLegalAction(newBoard,path "rlllrrrlrl") == 1);
  assert(isLegalAction(newBoard,path "rlrlllrrrl") == 1);
  assert(isLegalAction(newBoard,path "lrlllrrrrl") == 1);
  assert(isLegalAction(newBoard,path "rrlllrlrrl") == 1);
  assert(isLegalAction(newBoard,path "rrrllrll") == 1);
  assert(isLegalAction(newBoard,path "llrlrrrrll") == 1);
  assert(isLegalAction(newBoard,path "lllrlrrlrr") == 1);
  assert(isLegalAction(newBoard,path "rllrllrrrl") == 1);
  assert(isLegalAction(newBoard,path "llrrllrrrl") == 1);
  assert(isLegalAction(newBoard,path "lr") == 1);
  assert(isLegalAction(newBoard,path "lrrllr") == 1);
  assert(isLegalAction(newBoard,path "lrrlrllr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrrll") == 1);
  assert(isLegalAction(newBoard,path "lrrrlrll") == 1);
  assert(isLegalAction(newBoard,path "rllrrrlllr") == 1);
  assert(isLegalAction(newBoard,path "rrrlrlllrl") == 1);
  assert(isLegalAction(newBoard,path "rrrlllrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrrllrrl") == 1);
  assert(isLegalAction(newBoard,path "rlllrrrl") == 1);
  assert(isLegalAction(newBoard,path "lrlrlrlrrl") == 1);
  assert(isLegalAction(newBoard,path "rrllrlrl") == 1);
  assert(isLegalAction(newBoard,path "rlrllrllrr") == 1);
  assert(isLegalAction(newBoard,path "rllrlrlr") == 1);
  assert(isLegalAction(newBoard,path "rllllrrrrl") == 1);
  assert(isLegalAction(newBoard,path "rrlrllrrll") == 1);
  assert(isLegalAction(newBoard,path "llrlrlrlrr") == 1);
  assert(isLegalAction(newBoard,path "llllrrrrlr") == 1);
  assert(isLegalAction(newBoard,path "rllrllrr") == 1);
  assert(isLegalAction(newBoard,path "lrrllrrllr") == 1);
  assert(isLegalAction(newBoard,path "llllrrlrrr") == 1);
  assert(isLegalAction(newBoard,path "rrll") == 1);
  assert(isLegalAction(newBoard,path "lrlrllrrlr") == 1);
  assert(isLegalAction(newBoard,path "rlllrlrrrl") == 1);
  assert(isLegalAction(newBoard,path "rrrrlllllr") == 1);
  assert(isLegalAction(newBoard,path "lrrrllrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrrrll") == 1);
  assert(isLegalAction(newBoard,path "lrlllrrrlr") == 1);
  assert(isLegalAction(newBoard,path "rllr") == 1);
  assert(isLegalAction(newBoard,path "rrlrlllrlr") == 1);
  assert(isLegalAction(newBoard,path "rrlllrlr") == 1);
  assert(isLegalAction(newBoard,path "lllrrrlrlr") == 1);
  assert(isLegalAction(newBoard,path "lrrllrllrr") == 1);
  assert(isLegalAction(newBoard,path "llrrrlrrll") == 1);
  assert(isLegalAction(newBoard,path "rllrllrrlr") == 1);
  assert(isLegalAction(newBoard,path "lllrrllrrr") == 1);
  assert(isLegalAction(newBoard,path "rrlrllrlrl") == 1);
  assert(isLegalAction(newBoard,path "llrrlrrllr") == 1);
  assert(isLegalAction(newBoard,path "lrrlrlrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrllrlrlrr") == 1);
  assert(isLegalAction(newBoard,path "rrrlrlll") == 1);
  assert(isLegalAction(newBoard,path "lllrrrlr") == 1);
  assert(isLegalAction(newBoard,path "lrrllrlrrl") == 1);
  assert(isLegalAction(newBoard,path "lrrlrlllrr") == 1);
  assert(isLegalAction(newBoard,path "rrrlllllrr") == 1);
  assert(isLegalAction(newBoard,path "lrrlrrlrll") == 1);
  assert(isLegalAction(newBoard,path "rlrrllllrr") == 1);
  assert(isLegalAction(newBoard,path "rlrrllrrll") == 1);
  assert(isLegalAction(newBoard,path "rlrrllrlrl") == 1);
  assert(isLegalAction(newBoard,path "rrllllrrlr") == 1);
  assert(isLegalAction(newBoard,path "llrrlrlrlr") == 1);
  assert(isLegalAction(newBoard,path "rrllrlllrr") == 1);
  assert(isLegalAction(newBoard,path "rrrrrlllll") == 1);
  assert(isLegalAction(newBoard,path "rlrlrrrlll") == 1);
  assert(isLegalAction(newBoard,path "lllrrlrlrr") == 1);
  assert(isLegalAction(newBoard,path "llrrrrll") == 1);
  assert(isLegalAction(newBoard,path "lrlrlrrllr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrl") == 1);
  assert(isLegalAction(newBoard,path "lllrrrrllr") == 1);
  assert(isLegalAction(newBoard,path "llrrllrr") == 1);
  assert(isLegalAction(newBoard,path "rrlrllllrr") == 1);
  assert(isLegalAction(newBoard,path "lrlrllrr") == 1);
  assert(isLegalAction(newBoard,path "lrrrllrllr") == 1);
  assert(isLegalAction(newBoard,path "rlrllrrl") == 1);
  assert(isLegalAction(newBoard,path "rrrlrllllr") == 1);
  assert(isLegalAction(newBoard,path "rllrlrrl") == 1);
  assert(isLegalAction(newBoard,path "rrrllllrrl") == 1);
  assert(isLegalAction(newBoard,path "rlrllllrrr") == 1);
  assert(isLegalAction(newBoard,path "rrllllrr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrllrlr") == 1);
  assert(isLegalAction(newBoard,path "rrlrll") == 1);
  assert(isLegalAction(newBoard,path "lrrrrlllrl") == 1);
  assert(isLegalAction(newBoard,path "llrlrllrrr") == 1);
  assert(isLegalAction(newBoard,path "rlrrlrlrll") == 1);
  assert(isLegalAction(newBoard,path "lllrlrlrrr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrlrrll") == 1);
  assert(isLegalAction(newBoard,path "llrrlrlr") == 1);
  assert(isLegalAction(newBoard,path "rlrrrlllrl") == 1);
  assert(isLegalAction(newBoard,path "llrrrlrl") == 1);
  assert(isLegalAction(newBoard,path "rlrrlrllrl") == 1);
  assert(isLegalAction(newBoard,path "llrrrlllrr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrlrllr") == 1);
  assert(isLegalAction(newBoard,path "rrlllr") == 1);
  assert(isLegalAction(newBoard,path "rrlrlrlrll") == 1);
  assert(isLegalAction(newBoard,path "lrllrrrrll") == 1);
  assert(isLegalAction(newBoard,path "llllrrrr") == 1);
  assert(isLegalAction(newBoard,path "rrlrrlll") == 1);
  assert(isLegalAction(newBoard,path "rrlllrlrlr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrrlllr") == 1);
  assert(isLegalAction(newBoard,path "rrrlllrrll") == 1);
  assert(isLegalAction(newBoard,path "rllrrllrlr") == 1);
  assert(isLegalAction(newBoard,path "rlrrllrllr") == 1);
  assert(isLegalAction(newBoard,path "llrllrrrrl") == 1);
  assert(isLegalAction(newBoard,path "rllllrrrlr") == 1);
  assert(isLegalAction(newBoard,path "rrrllrrlll") == 1);
  assert(isLegalAction(newBoard,path "lrlrlrlr") == 1);
  assert(isLegalAction(newBoard,path "llrrrrrlll") == 1);
  assert(isLegalAction(newBoard,path "llrrrrlrll") == 1);
  assert(isLegalAction(newBoard3,"rrrllrllrl") == 1);
  assert(isLegalAction(newBoard,path "lrlr") == 1);
  assert(isLegalAction(newBoard,path "rllrllrlrr") == 1);
  assert(isLegalAction(newBoard,path "rlrllrlrlr") == 1);
  assert(isLegalAction(newBoard,path "llrrllrrlr") == 1);
  assert(isLegalAction(newBoard,path "lllrllrrrr") == 1);
  assert(isLegalAction(newBoard,path "lrllrlrr") == 1);
  assert(isLegalAction(newBoard,path "rrlrllrl") == 1);
  assert(isLegalAction(newBoard,path "llllrrrlrr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrrllrl") == 1);
  assert(isLegalAction(newBoard,path "rlllrrllrr") == 1);
  assert(isLegalAction(newBoard,path "rllrlrrrll") == 1);
  assert(isLegalAction(newBoard,path "rlrl") == 1);
  assert(isLegalAction(newBoard,path "rrllrrrlll") == 1);
  assert(isLegalAction(newBoard,path "lrllrr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrlrlrl") == 1);
  assert(isLegalAction(newBoard,path "rrlrlrlllr") == 1);
  assert(isLegalAction(newBoard,path "rllrrlllrr") == 1);
  assert(isLegalAction(newBoard,path "rrllllrrrl") == 1);
  assert(isLegalAction(newBoard,path "lrllrrlrrl") == 1);
  assert(isLegalAction(newBoard,path "lrllrlrrlr") == 1);
  assert(isLegalAction(newBoard,path "lrrllrrrll") == 1);
  assert(isLegalAction(newBoard,path "rllrrl") == 1);
  assert(isLegalAction(newBoard,path "llrrrlrlrl") == 1);
  assert(isLegalAction(newBoard,path "llrrlr") == 1);
  assert(isLegalAction(newBoard,path "lrlrrlrl") == 1);
  assert(isLegalAction(newBoard,path "rrllrllrrl") == 1);
  assert(isLegalAction(newBoard,path "llrlrrlrrl") == 1);
  assert(isLegalAction(newBoard,path "rl") == 1);
  assert(isLegalAction(newBoard,path "rlrllrlrrl") == 1);
  assert(isLegalAction(newBoard,path "lrrllrlrlr") == 1);
  assert(isLegalAction(newBoard,path "lllrrrrrll") == 1);
  assert(isLegalAction(newBoard,path "rllrrrrlll") == 1);
  assert(isLegalAction(newBoard,path "llrlrrlr") == 1);
  assert(isLegalAction(newBoard,path "rrllllrlrr") == 1);
  assert(isLegalAction(newBoard,path "lrlllrlrrr") == 1);
  assert(isLegalAction(newBoard,path "rlrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrrrrlll") == 1);
  assert(isLegalAction(newBoard,path "rlrrlrlllr") == 1);
  assert(isLegalAction(newBoard,path "lrrrrlrlll") == 1);
  assert(isLegalAction(newBoard,path "llllrrrrrl") == 1);
  assert(isLegalAction(newBoard,path "rllrlrlrrl") == 1);
  assert(isLegalAction(newBoard,path "lrrrlrlllr") == 1);
  assert(isLegalAction(newBoard,path "lrrrlrrlll") == 1);
  assert(isLegalAction(newBoard,path "lrrlrlrrll") == 1);
  assert(isLegalAction(newBoard,path "llrlrrllrr") == 1);
  assert(isLegalAction(newBoard,path "llrrlllrrr") == 1);
  assert(isLegalAction(newBoard,path "rlrrrlrlll") == 1);
  assert(isLegalAction(newBoard,path "rlrlrlrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrlrrrll") == 1);
  assert(isLegalAction(newBoard,path "rrlrlrll") == 1);
  assert(isLegalAction(newBoard,path "rlrlllrlrr") == 1);
  assert(isLegalAction(newBoard,path "lrllrrrllr") == 1);
  assert(isLegalAction(newBoard,path "rrrrlrllll") == 1);
  assert(isLegalAction(newBoard,path "lllllrrrrr") == 1);
  assert(isLegalAction(newBoard,path "rllrlllrrr") == 1);
  assert(isLegalAction(newBoard,path "rllllrlrrr") == 1);
  assert(isLegalAction(newBoard,path "rrlrllrllr") == 1);
  assert(isLegalAction(newBoard,path "rlrllrrrll") == 1);
  assert(isLegalAction(newBoard,path "lrrlrl") == 1);
  assert(isLegalAction(newBoard,path "lrlrrlllrr") == 1);
  assert(isLegalAction(newBoard,path "rrlllllrrr") == 1);
  assert(isLegalAction(newBoard,path "lrllrrllrr") == 1);
  assert(isLegalAction(newBoard,path "rllllrrr") == 1);
  assert(isLegalAction(newBoard,path "llrrrrllrl") == 1);
  assert(isLegalAction(newBoard,path "lllrrrrl") == 1);
  assert(isLegalAction(newBoard,path "rrllrl") == 1);
  assert(isLegalAction(newBoard,path "llrrrllr") == 1);
  assert(isLegalAction(newBoard,path "rllrrrll") == 1);
  assert(isLegalAction(newBoard,path "lrrlrllrrl") == 1);
  assert(isLegalAction(newBoard,path "llrrrl") == 1);
  assert(isLegalAction(newBoard,path "rrlllrrl") == 1);
  assert(isLegalAction(newBoard,path "llrlrr") == 1);
  assert(isLegalAction(newBoard,path "rrllrrlllr") == 1);
  assert(isLegalAction(newBoard,path "lrllrllrrr") == 1);
  assert(isLegalAction(newBoard,path "rllrlrrlrl") == 1);
  assert(isLegalAction(newBoard,path "rllrlrllrr") == 1);
  assert(isLegalAction(newBoard,path "rlrllrrllr") == 1);
  assert(isLegalAction(newBoard,path "lrrllrrlrl") == 1);
  assert(isLegalAction(newBoard,path "rrlrrlllrl") == 1);
  assert(isLegalAction(newBoard,path "rrlrrrllll") == 1);
  assert(isLegalAction(newBoard,path "lrrlrrrlll") == 1);
  assert(isLegalAction(newBoard,path "lrrlllrrrl") == 1);
  assert(isLegalAction(newBoard,path "lllrlrrrrl") == 1);
  assert(isLegalAction(newBoard,path "lrrrlllrlr") == 1);
  assert(isLegalAction(newBoard,path "lllrrrllrr") == 1);
  assert(isLegalAction(newBoard,path "lrrrllrrll") == 1);
  assert(isLegalAction(newBoard,path "lrllllrrrr") == 1);
  assert(isLegalAction(newBoard,path "lllrlrrrlr") == 1);
  assert(isLegalAction(newBoard,path "rlllrrlr") == 1);
  assert(isLegalAction(newBoard,path "rrrlrrllll") == 1);
  assert(isLegalAction(newBoard,path "rlrrll") == 1);
  
  
  
  assert(isLegalAction(newBoard,path "lllrrrllll") == 0);
  assert(isLegalAction(newBoard,path "lllrrllllr") == 0);
  assert(isLegalAction(newBoard,path "lrlrrlllll") == 0);
  assert(isLegalAction(newBoard,path "llrlrrllll") == 0);
  assert(isLegalAction(newBoard,path "rlllllllrr") == 0);
  assert(isLegalAction(newBoard,path "llllrrlrll") == 0);
  assert(isLegalAction(newBoard,path "llllrlllrr") == 0);
  assert(isLegalAction(newBoard,path "rlrllllllr") == 0);
  assert(isLegalAction(newBoard,path "rlllllrrll") == 0);
  assert(isLegalAction(newBoard,path "rlllrllrll") == 0);
  assert(isLegalAction(newBoard,path "rlllrlllrl") == 0);
  assert(isLegalAction(newBoard,path "llllrlrlrl") == 0);
  assert(isLegalAction(newBoard,path "llrlrlllrl") == 0);
  assert(isLegalAction(newBoard,path "llrlllrllr") == 0);
  assert(isLegalAction(newBoard,path "rllrlrllll") == 0);
  assert(isLegalAction(newBoard,path "rllllrlllr") == 0);
  assert(isLegalAction(newBoard,path "rllrlllrll") == 0);
  assert(isLegalAction(newBoard,path "lrrlllllrl") == 0);
  assert(isLegalAction(newBoard,path "lllllrllrr") == 0);
  assert(isLegalAction(newBoard,path "lrlrlrllll") == 0);
  assert(isLegalAction(newBoard,path "lrrllrllll") == 0);
  assert(isLegalAction(newBoard,path "lrlllrllrl") == 0);
  assert(isLegalAction(newBoard,path "lrlllrlllr") == 0);
  assert(isLegalAction(newBoard,path "llrrlllllr") == 0);
  assert(isLegalAction(newBoard,path "llrrrlllll") == 0);
  assert(isLegalAction(newBoard,path "lllrlllrlr") == 0);
  assert(isLegalAction(newBoard,path "lllrrllrll") == 0);
  assert(isLegalAction(newBoard,path "lllrlrrlll") == 0);
  assert(isLegalAction(newBoard,path "lrlrlllllr") == 0);
  assert(isLegalAction(newBoard,path "rllrlllllr") == 0);
  assert(isLegalAction(newBoard,path "llrllllrlr") == 0);
  assert(isLegalAction(newBoard,path "rlllllrlrl") == 0);
  assert(isLegalAction(newBoard,path "lllrlrlrll") == 0);
  assert(isLegalAction(newBoard,path "lllllrrlrl") == 0);
  assert(isLegalAction(newBoard,path "rlllrllllr") == 0);
  assert(isLegalAction(newBoard,path "llllllrlrr") == 0);
  assert(isLegalAction(newBoard,path "lrllrrllll") == 0);
  assert(isLegalAction(newBoard,path "lrrrllllll") == 0);
  assert(isLegalAction(newBoard,path "rllllllrlr") == 0);
  assert(isLegalAction(newBoard,path "lllllrrllr") == 0);
  assert(isLegalAction(newBoard,path "rrllllllrl") == 0);
  assert(isLegalAction(newBoard,path "llrrlrllll") == 0);
  assert(isLegalAction(newBoard,path "lrrllllrll") == 0);
  assert(isLegalAction(newBoard,path "llllrlrrll") == 0);
  assert(isLegalAction(newBoard,path "lrllrlllrl") == 0);
  assert(isLegalAction(newBoard,path "lllllrlrrl") == 0);
  assert(isLegalAction(newBoard,path "llrlllllrr") == 0);
  assert(isLegalAction(newBoard,path "lllllllrrr") == 0);
  assert(isLegalAction(newBoard,path "rlrlllllrl") == 0);
  assert(isLegalAction(newBoard,path "lllrrlllrl") == 0);
  assert(isLegalAction(newBoard,path "llrllllrrl") == 0);
  assert(isLegalAction(newBoard,path "rllllrlrll") == 0);
  assert(isLegalAction(newBoard,path "lrllllrllr") == 0);
  assert(isLegalAction(newBoard,path "rrlllllllr") == 0);
  assert(isLegalAction(newBoard,path "lrlllllrrl") == 0);
  assert(isLegalAction(newBoard,path "rrllllrlll") == 0);
  assert(isLegalAction(newBoard,path "rllllllrrl") == 0);
  assert(isLegalAction(newBoard,path "rlllrlrlll") == 0);
  assert(isLegalAction(newBoard,path "llllrrrlll") == 0);
  assert(isLegalAction(newBoard,path "lrllrlrlll") == 0);
  assert(isLegalAction(newBoard,path "rllrrlllll") == 0);
  assert(isLegalAction(newBoard,path "llllrrllrl") == 0);
  assert(isLegalAction(newBoard,path "llrllrrlll") == 0);
  assert(isLegalAction(newBoard,path "rrlllrllll") == 0);
  assert(isLegalAction(newBoard,path "llrllrlllr") == 0);
  assert(isLegalAction(newBoard,path "lrllrllrll") == 0);
  assert(isLegalAction(newBoard,path "lrllllllrr") == 0);
  assert(isLegalAction(newBoard,path "lllrlrlllr") == 0);
  assert(isLegalAction(newBoard,path "lrllrllllr") == 0);
  assert(isLegalAction(newBoard,path "lllrlllrrl") == 0);
  assert(isLegalAction(newBoard,path "rrlrllllll") == 0);
  assert(isLegalAction(newBoard,path "llrllrlrll") == 0);
  assert(isLegalAction(newBoard,path "lrlllrrlll") == 0);
  assert(isLegalAction(newBoard,path "llrlllrrll") == 0);
  assert(isLegalAction(newBoard,path "llrrllrlll") == 0);
  assert(isLegalAction(newBoard,path "rlllrrllll") == 0);
  assert(isLegalAction(newBoard,path "llllrlrllr") == 0);
  assert(isLegalAction(newBoard,path "rlrllllrll") == 0);
  assert(isLegalAction(newBoard,path "llrrlllrll") == 0);
  assert(isLegalAction(newBoard,path "llrrllllrl") == 0);
  assert(isLegalAction(newBoard,path "llrlrllllr") == 0);
  assert(isLegalAction(newBoard,path "lllrllllrr") == 0);
  assert(isLegalAction(newBoard,path "llrllrllrl") == 0);
  assert(isLegalAction(newBoard,path "lrlrllllrl") == 0);
  assert(isLegalAction(newBoard,path "rlrlllrlll") == 0);
  assert(isLegalAction(newBoard,path "lllllrlrlr") == 0);
  assert(isLegalAction(newBoard,path "llllrllrrl") == 0);
  assert(isLegalAction(newBoard,path "lrlrlllrll") == 0);
  assert(isLegalAction(newBoard,path "rllrllrlll") == 0);
  assert(isLegalAction(newBoard,path "lllrllrrll") == 0);
  assert(isLegalAction(newBoard,path "lllrrlrlll") == 0);
  assert(isLegalAction(newBoard,path "lrllllrlrl") == 0);
  assert(isLegalAction(newBoard,path "lllllrrrll") == 0);
  assert(isLegalAction(newBoard,path "rlrlrlllll") == 0);
  assert(isLegalAction(newBoard,path "rrlllllrll") == 0);
  assert(isLegalAction(newBoard,path "rllllrrlll") == 0);
  assert(isLegalAction(newBoard,path "lllrllrlrl") == 0);
  assert(isLegalAction(newBoard,path "rrrlllllll") == 0);
  assert(isLegalAction(newBoard,path "llllrllrlr") == 0);
  assert(isLegalAction(newBoard,path "lllrlrllrl") == 0);
  assert(isLegalAction(newBoard,path "llrlllrlrl") == 0);
  assert(isLegalAction(newBoard,path "lrlrllrlll") == 0);
  assert(isLegalAction(newBoard,path "lrrllllllr") == 0);
  assert(isLegalAction(newBoard,path "llrlrllrll") == 0);
  assert(isLegalAction(newBoard,path "rllrllllrl") == 0);
  assert(isLegalAction(newBoard,path "llllrrlllr") == 0);
  assert(isLegalAction(newBoard,path "rlrllrllll") == 0);
  assert(isLegalAction(newBoard,path "lrrlrlllll") == 0);
  assert(isLegalAction(newBoard,path "lrllllrrll") == 0);
  assert(isLegalAction(newBoard,path "rrllrlllll") == 0);
  assert(isLegalAction(newBoard,path "lllrllrllr") == 0);
  assert(isLegalAction(newBoard,path "lrrlllrlll") == 0);
  assert(isLegalAction(newBoard,path "lrlllllrlr") == 0);
  assert(isLegalAction(newBoard,path "llllllrrrl") == 0);
  assert(isLegalAction(newBoard,path "lrlllrlrll") == 0);
  assert(isLegalAction(newBoard,path "llrlrlrlll") == 0);
  assert(isLegalAction(newBoard,path "rlllllrllr") == 0);
  assert(isLegalAction(newBoard,path "rllllrllrl") == 0);
  assert(isLegalAction(newBoard,path "rlrrllllll") == 0);
  assert(isLegalAction(newBoard,path "llllllrrlr") == 0);
  
  assert(isLegalAction(newBoard,path "rlrrrlll") == 1);
  assert(isLegalAction(newBoard,path "rrrllllr") == 1);
  assert(isLegalAction(newBoard,path "rrrlrlrlll") == 1);
  printf("Testing Passed!")
  //HOLY SHIT. Do u know how long it took me to change every single newBoard3 into a newBoard.
  
  // DONE
  printf("All Tests Passed!\nYou Are AWESOME!!!");

}