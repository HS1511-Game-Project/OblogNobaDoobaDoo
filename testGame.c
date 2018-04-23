
// Created by [insert names here]
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
  assert(isLegalAction(newBoard,"llll") == 0);
  assert(isLegalAction(newBoard,"rrrr") == 0);
  
  assert(isLegalAction(newBoard,"lrlrlrlrlr") == 1);
  assert(isLegalAction(newBoard,"rlrlrlrlrl") == 1);
  
  assert(isLegalAction(newBoard,"llrlrrrr") == 1);
  assert(isLegalAction(newBoard,"rrlrllll") == 1);
  
  assert(isLegalAction(newBoard,"lllrrr") == 1);
  assert(isLegalAction(newBoard,"rlrlrlllrr") == 1);
  assert(isLegalAction(newBoard,"llrlrlrrrl") == 1);
  assert(isLegalAction(newBoard,"rllrrlrllr") == 1);
  assert(isLegalAction(newBoard,"rrllrrlrll") == 1);
  assert(isLegalAction(newBoard,"lrlrlrrl") == 1);
  assert(isLegalAction(newBoard,"rrrrllll") == 1);
  assert(isLegalAction(newBoard,"rrrrlllrll") == 1);
  assert(isLegalAction(newBoard,"rrlrrllllr") == 1);
  assert(isLegalAction(newBoard,"rlrrlrrlll") == 1);
  assert(isLegalAction(newBoard,"rlllrrrrll") == 1);
  assert(isLegalAction(newBoard,"rlrlllrr") == 1);
  assert(isLegalAction(newBoard,"rllrrlrl") == 1);
  assert(isLegalAction(newBoard,"rllrrllrrl") == 1);
  assert(isLegalAction(newBoard,"lrllrrrl") == 1);
  assert(isLegalAction(newBoard,"rrlllrrllr") == 1);
  assert(isLegalAction(newBoard,"lrrrlrlrll") == 1);
  assert(isLegalAction(newBoard,"lrlrrlrllr") == 1);
  assert(isLegalAction(newBoard,"rrrlrllrll") == 1);
  assert(isLegalAction(newBoard,"lrllrrlr") == 1);
  assert(isLegalAction(newBoard,"rrlllrrlrl") == 1);
  assert(isLegalAction(newBoard,"rlllrr") == 1);
  assert(isLegalAction(newBoard,"lrrlrlrllr") == 1);
  assert(isLegalAction(newBoard,"rllrrrllrl") == 1);
  assert(isLegalAction(newBoard,"rlrllr") == 1);
  assert(isLegalAction(newBoard,"lrlrrllr") == 1);
  assert(isLegalAction(newBoard,"rrllrrll") == 1);
  assert(isLegalAction(newBoard,"rlrrlllrrl") == 1);
  assert(isLegalAction(newBoard,"rlllrrlrlr") == 1);
  assert(isLegalAction(newBoard,"lrrrrrllll") == 1);
  assert(isLegalAction(newBoard,"rlllrlrr") == 1);
  assert(isLegalAction(newBoard,"rrlrrllrll") == 1);
  assert(isLegalAction(newBoard,"llrrrllrrl") == 1);
  assert(isLegalAction(newBoard,"rlrrlrll") == 1);
  assert(isLegalAction(newBoard,"llllrlrrrr") == 1);
  assert(isLegalAction(newBoard,"rllrrllr") == 1);
  assert(isLegalAction(newBoard,"rlllrllrrr") == 1);
  assert(isLegalAction(newBoard,"lrrl") == 1);
  assert(isLegalAction(newBoard,"rlrrlllr") == 1);
  assert(isLegalAction(newBoard,"rrrrllrlll") == 1);
  assert(isLegalAction(newBoard,"rlllrlrlrr") == 1);
  assert(isLegalAction(newBoard,"rrrllrlrll") == 1);
  assert(isLegalAction(newBoard,"rrlllrllrr") == 1);
  assert(isLegalAction(newBoard,"lrrlrrllrl") == 1);
  assert(isLegalAction(newBoard,"rllllrrlrr") == 1);
  assert(isLegalAction(newBoard,"lrlrrrrlll") == 1);
  assert(isLegalAction(newBoard,"lllrrrrlrl") == 1);
  assert(isLegalAction(newBoard,"lrrrlllr") == 1);
  assert(isLegalAction(newBoard,"rrllrlrllr") == 1);
  assert(isLegalAction(newBoard"rlrrrllllr") == 1);
  assert(isLegalAction(newBoard,"lrlrrlrrll") == 1);
  assert(isLegalAction(newBoard,"rrllrllr") == 1);
  assert(isLegalAction(newBoard,"rlrrllrl") == 1);
  assert(isLegalAction(newBoard,"lrrrrllllr") == 1);
  assert(isLegalAction(newBoard,"rlllrlrrlr") == 1);
  assert(isLegalAction(newBoard,"rrllrlrlrl") == 1);
  assert(isLegalAction(newBoard,"rrrllllrlr") == 1);
  assert(isLegalAction(newBoard,"llrlrlrr") == 1);
  assert(isLegalAction(newBoard,"rrrlll") == 1);
  assert(isLegalAction(newBoard,"llrrrllrlr") == 1);
  assert(isLegalAction(newBoard,"rrlllrrrll") == 1);
  assert(isLegalAction(newBoard,"rlllllrrrr") == 1);
  assert(isLegalAction(newBoard,"lrrlrllrlr") == 1);
  assert(isLegalAction(newBoard,"lrrlrlrl") == 1);
  assert(isLegalAction(newBoard,"lrlrlllrrr") == 1);
  assert(isLegalAction(newBoard,"rlrlllrrlr") == 1);
  assert(isLegalAction(newBoard,"lrrrllllrr") == 1);
  assert(isLegalAction(newBoard,"llrr") == 1);
  assert(isLegalAction(newBoard,"lrlllrrlrr") == 1);
  assert(isLegalAction(newBoard,"llrrlrrl") == 1);
  assert(isLegalAction(newBoard,"lrlrllrrrl") == 1);
  assert(isLegalAction(newBoard,"llrrllrlrr") == 1);
  assert(isLegalAction(newBoard,"lrlrrrllrl") == 1);
  assert(isLegalAction(newBoard,"rrrlllrl") == 1);
  assert(isLegalAction(newBoard,"lrrrllrl") == 1);
  assert(isLegalAction(newBoard,"lrlrrrlllr") == 1);
  assert(isLegalAction(newBoard,"rllrlrlrlr") == 1);
  assert(isLegalAction(newBoard,"rlrllrrlrl") == 1);
  assert(isLegalAction(newBoard,"lrlllrrr") == 1);
  assert(isLegalAction(newBoard,"lllrrlrr") == 1);
  assert(isLegalAction(newBoard,"llrllrrr") == 1);
  assert(isLegalAction(newBoard,"llrrlrllrr") == 1);
  assert(isLegalAction(newBoard,"lrrrlllrrl") == 1);
  assert(isLegalAction(newBoard,"rlllrrlrrl") == 1);
  assert(isLegalAction(newBoard,"rllrlrrllr") == 1);
  assert(isLegalAction(newBoard,"lrlrlrrlrl") == 1);
  assert(isLegalAction(newBoard,"rrrrllllrl") == 1);
  assert(isLegalAction(newBoard,"lrllrlrrrl") == 1);
  assert(isLegalAction(newBoard,"llrlrrrllr") == 1);
  assert(isLegalAction(newBoard,"lrrlllrr") == 1);
  assert(isLegalAction(newBoard,"lrrlllrrlr") == 1);
  assert(isLegalAction(newBoard,"rrrllrlllr") == 1);
  assert(isLegalAction(newBoard,"llrrrrlllr") == 1);
  assert(isLegalAction(newBoard,"llrlrrrl") == 1);
  assert(isLegalAction(newBoard,"lrrlllrlrr") == 1);
  assert(isLegalAction(newBoard,"rrlrlrrlll") == 1);
  assert(isLegalAction(newBoard,"lrrlrrll") == 1);
  assert(isLegalAction(newBoard,"llrrlrrlrl") == 1);
  assert(isLegalAction(newBoard,"llrllrrrlr") == 1);
  assert(isLegalAction(newBoard,"rrllrrllrl") == 1);
  assert(isLegalAction(newBoard,"rrlrrlrlll") == 1);
  assert(isLegalAction(newBoard,"llrllrrlrr") == 1);
  assert(isLegalAction(newBoard,"rllrrlrrll") == 1);
  assert(isLegalAction(newBoard,"rlllrrrllr") == 1);
  assert(isLegalAction(newBoard,"lllrrrlrrl") == 1);
  assert(isLegalAction(newBoard,"rlrrrllrll") == 1);
  assert(isLegalAction(newBoard,"llrlllrrrr") == 1);
  assert(isLegalAction(newBoard,"rrllrlrrll") == 1);
  assert(isLegalAction(newBoard,"rllrlr") == 1);
  assert(isLegalAction(newBoard,"rrrlllrllr") == 1);
  assert(isLegalAction(newBoard,"lrlrrllrrl") == 1);
  assert(isLegalAction(newBoard,"rllrrrlrll") == 1);
  assert(isLegalAction(newBoard,"llrlrrrlrl") == 1);
  assert(isLegalAction(newBoard,"lrrrrllrll") == 1);
  assert(isLegalAction(newBoard,"llrrlrrrll") == 1);
  assert(isLegalAction(newBoard,"rlrlrllr") == 1);
  assert(isLegalAction(newBoard,"lrrllrlr") == 1);
  assert(isLegalAction(newBoard,"lllrrlrrlr") == 1);
  assert(isLegalAction(newBoard,"lrrlrrlllr") == 1);
  assert(isLegalAction(newBoard,"lrlrlr") == 1);
  assert(isLegalAction(newBoard,"lllrrlrrrl") == 1);
  assert(isLegalAction(newBoard,"rrlrlllrrl") == 1);
  assert(isLegalAction(newBoard,"rrlrlrllrl") == 1);
  assert(isLegalAction(newBoard,"llrllrlrrr") == 1);
  assert(isLegalAction(newBoard,"rllrrlrlrl") == 1);
  assert(isLegalAction(newBoard,"rlrrrrllll") == 1);
  assert(isLegalAction(newBoard,"lrlrlrrrll") == 1);
  assert(isLegalAction(newBoard,"lllrlrrr") == 1);
  assert(isLegalAction(newBoard,"lrrllllrrr") == 1);
  assert(isLegalAction(newBoard,"lrlrlrlrlr") == 1);
  assert(isLegalAction(newBoard,"lrlrllrlrr") == 1);
  assert(isLegalAction(newBoard,"lrllrrlrlr") == 1);
  assert(isLegalAction(newBoard,"rrllrllrlr") == 1);
  assert(isLegalAction(newBoard,"rrlrlllr") == 1);
  assert(isLegalAction(newBoard,"rlrlrrlrll") == 1);
  assert(isLegalAction(newBoard,"lrlrlrllrr") == 1);
  assert(isLegalAction(newBoard,"rlrlrlrl") == 1);
  assert(isLegalAction(newBoard,"lrllrrrlrl") == 1);
  assert(isLegalAction(newBoard3,"llrlrlrrlr") == 1);
  assert(isLegalAction(newBoard3,"llrrlrlrrl") == 1);
  assert(isLegalAction(newBoard,"rlrlrllrrl") == 1);
  assert(isLegalAction(newBoard,"llrlrrlrlr") == 1);
  assert(isLegalAction(newBoard,"rlrlrllrlr") == 1);
  assert(isLegalAction(newBoard,"lrrrlrllrl") == 1);
  assert(isLegalAction(newBoard,"lrlrrrlrll") == 1);
  assert(isLegalAction(newBoard,"rlrrlllrlr") == 1);
  assert(isLegalAction(newBoard,"rlrllrlr") == 1);
  assert(isLegalAction(newBoard,"llrrrlrllr") == 1);
  assert(isLegalAction(newBoard,"rlllrrrlrl") == 1);
  assert(isLegalAction(newBoard,"rlrlllrrrl") == 1);
  assert(isLegalAction(newBoard,"lrlllrrrrl") == 1);
  assert(isLegalAction(newBoard,"rrlllrlrrl") == 1);
  assert(isLegalAction(newBoard,"rrrllrll") == 1);
  assert(isLegalAction(newBoard,"llrlrrrrll") == 1);
  assert(isLegalAction(newBoard,"lllrlrrlrr") == 1);
  assert(isLegalAction(newBoard,"rllrllrrrl") == 1);
  assert(isLegalAction(newBoard,"llrrllrrrl") == 1);
  assert(isLegalAction(newBoard,"lr") == 1);
  assert(isLegalAction(newBoard,"lrrllr") == 1);
  assert(isLegalAction(newBoard,"lrrlrllr") == 1);
  assert(isLegalAction(newBoard,"rlrlrrll") == 1);
  assert(isLegalAction(newBoard,"lrrrlrll") == 1);
  assert(isLegalAction(newBoard,"rllrrrlllr") == 1);
  assert(isLegalAction(newBoard,"rrrlrlllrl") == 1);
  assert(isLegalAction(newBoard,"rrrlllrlrl") == 1);
  assert(isLegalAction(newBoard,"lrrllrrl") == 1);
  assert(isLegalAction(newBoard,"rlllrrrl") == 1);
  assert(isLegalAction(newBoard,"lrlrlrlrrl") == 1);
  assert(isLegalAction(newBoard,"rrllrlrl") == 1);
  assert(isLegalAction(newBoard,"rlrllrllrr") == 1);
  assert(isLegalAction(newBoard,"rllrlrlr") == 1);
  assert(isLegalAction(newBoard,"rllllrrrrl") == 1);
  assert(isLegalAction(newBoard,"rrlrllrrll") == 1);
  assert(isLegalAction(newBoard,"llrlrlrlrr") == 1);
  assert(isLegalAction(newBoard,"llllrrrrlr") == 1);
  assert(isLegalAction(newBoard,"rllrllrr") == 1);
  assert(isLegalAction(newBoard,"lrrllrrllr") == 1);
  assert(isLegalAction(newBoard,"llllrrlrrr") == 1);
  assert(isLegalAction(newBoard,"rrll") == 1);
  assert(isLegalAction(newBoard,"lrlrllrrlr") == 1);
  assert(isLegalAction(newBoard,"rlllrlrrrl") == 1);
  assert(isLegalAction(newBoard,"rrrrlllllr") == 1);
  assert(isLegalAction(newBoard,"lrrrllrlrl") == 1);
  assert(isLegalAction(newBoard,"lrrrll") == 1);
  assert(isLegalAction(newBoard,"lrlllrrrlr") == 1);
  assert(isLegalAction(newBoard,"rllr") == 1);
  assert(isLegalAction(newBoard,"rrlrlllrlr") == 1);
  assert(isLegalAction(newBoard,"rrlllrlr") == 1);
  assert(isLegalAction(newBoard,"lllrrrlrlr") == 1);
  assert(isLegalAction(newBoard,"lrrllrllrr") == 1);
  assert(isLegalAction(newBoard,"llrrrlrrll") == 1);
  assert(isLegalAction(newBoard,"rllrllrrlr") == 1);
  assert(isLegalAction(newBoard,"lllrrllrrr") == 1);
  assert(isLegalAction(newBoard,"rrlrllrlrl") == 1);
  assert(isLegalAction(newBoard,"llrrlrrllr") == 1);
  assert(isLegalAction(newBoard,"lrrlrlrlrl") == 1);
  assert(isLegalAction(newBoard,"lrllrlrlrr") == 1);
  assert(isLegalAction(newBoard,"rrrlrlll") == 1);
  assert(isLegalAction(newBoard,"lllrrrlr") == 1);
  assert(isLegalAction(newBoard,"lrrllrlrrl") == 1);
  assert(isLegalAction(newBoard,"lrrlrlllrr") == 1);
  assert(isLegalAction(newBoard,"rrrlllllrr") == 1);
  assert(isLegalAction(newBoard,"lrrlrrlrll") == 1);
  assert(isLegalAction(newBoard,"rlrrllllrr") == 1);
  assert(isLegalAction(newBoard,"rlrrllrrll") == 1);
  assert(isLegalAction(newBoard,"rlrrllrlrl") == 1);
  assert(isLegalAction(newBoard,"rrllllrrlr") == 1);
  assert(isLegalAction(newBoard,"llrrlrlrlr") == 1);
  assert(isLegalAction(newBoard,"rrllrlllrr") == 1);
  assert(isLegalAction(newBoard,"rrrrrlllll") == 1);
  assert(isLegalAction(newBoard,"rlrlrrrlll") == 1);
  assert(isLegalAction(newBoard,"lllrrlrlrr") == 1);
  assert(isLegalAction(newBoard,"llrrrrll") == 1);
  assert(isLegalAction(newBoard,"lrlrlrrllr") == 1);
  assert(isLegalAction(newBoard,"lrlrrl") == 1);
  assert(isLegalAction(newBoard,"lllrrrrllr") == 1);
  assert(isLegalAction(newBoard,"llrrllrr") == 1);
  assert(isLegalAction(newBoard,"rrlrllllrr") == 1);
  assert(isLegalAction(newBoard,"lrlrllrr") == 1);
  assert(isLegalAction(newBoard,"lrrrllrllr") == 1);
  assert(isLegalAction(newBoard,"rlrllrrl") == 1);
  assert(isLegalAction(newBoard,"rrrlrllllr") == 1);
  assert(isLegalAction(newBoard,"rllrlrrl") == 1);
  assert(isLegalAction(newBoard,"rrrllllrrl") == 1);
  assert(isLegalAction(newBoard,"rlrllllrrr") == 1);
  assert(isLegalAction(newBoard,"rrllllrr") == 1);
  assert(isLegalAction(newBoard,"lrlrrllrlr") == 1);
  assert(isLegalAction(newBoard,"rrlrll") == 1);
  assert(isLegalAction(newBoard,"lrrrrlllrl") == 1);
  assert(isLegalAction(newBoard,"llrlrllrrr") == 1);
  assert(isLegalAction(newBoard,"rlrrlrlrll") == 1);
  assert(isLegalAction(newBoard,"lllrlrlrrr") == 1);
  assert(isLegalAction(newBoard,"rlrlrlrrll") == 1);
  assert(isLegalAction(newBoard,"llrrlrlr") == 1);
  assert(isLegalAction(newBoard,"rlrrrlllrl") == 1);
  assert(isLegalAction(newBoard,"llrrrlrl") == 1);
  assert(isLegalAction(newBoard,"rlrrlrllrl") == 1);
  assert(isLegalAction(newBoard,"llrrrlllrr") == 1);
  assert(isLegalAction(newBoard,"rlrlrlrllr") == 1);
  assert(isLegalAction(newBoard,"rrlllr") == 1);
  assert(isLegalAction(newBoard,"rrlrlrlrll") == 1);
  assert(isLegalAction(newBoard,"lrllrrrrll") == 1);
  assert(isLegalAction(newBoard,"llllrrrr") == 1);
  assert(isLegalAction(newBoard,"rrlrrlll") == 1);
  assert(isLegalAction(newBoard,"rrlllrlrlr") == 1);
  assert(isLegalAction(newBoard,"rlrlrrlllr") == 1);
  assert(isLegalAction(newBoard,"rrrlllrrll") == 1);
  assert(isLegalAction(newBoard,"rllrrllrlr") == 1);
  assert(isLegalAction(newBoard,"rlrrllrllr") == 1);
  assert(isLegalAction(newBoard,"llrllrrrrl") == 1);
  assert(isLegalAction(newBoard,"rllllrrrlr") == 1);
  assert(isLegalAction(newBoard,"rrrllrrlll") == 1);
  assert(isLegalAction(newBoard,"lrlrlrlr") == 1);
  assert(isLegalAction(newBoard,"llrrrrrlll") == 1);
  assert(isLegalAction(newBoard,"llrrrrlrll") == 1);
  assert(isLegalAction(newBoard3,"rrrllrllrl") == 1);
  assert(isLegalAction(newBoard,"lrlr") == 1);
  assert(isLegalAction(newBoard,"rllrllrlrr") == 1);
  assert(isLegalAction(newBoard,"rlrllrlrlr") == 1);
  assert(isLegalAction(newBoard,"llrrllrrlr") == 1);
  assert(isLegalAction(newBoard,"lllrllrrrr") == 1);
  assert(isLegalAction(newBoard,"lrllrlrr") == 1);
  assert(isLegalAction(newBoard,"rrlrllrl") == 1);
  assert(isLegalAction(newBoard,"llllrrrlrr") == 1);
  assert(isLegalAction(newBoard,"rlrlrrllrl") == 1);
  assert(isLegalAction(newBoard,"rlllrrllrr") == 1);
  assert(isLegalAction(newBoard,"rllrlrrrll") == 1);
  assert(isLegalAction(newBoard,"rlrl") == 1);
  assert(isLegalAction(newBoard,"rrllrrrlll") == 1);
  assert(isLegalAction(newBoard,"lrllrr") == 1);
  assert(isLegalAction(newBoard,"lrlrrlrlrl") == 1);
  assert(isLegalAction(newBoard,"rrlrlrlllr") == 1);
  assert(isLegalAction(newBoard,"rllrrlllrr") == 1);
  assert(isLegalAction(newBoard,"rrllllrrrl") == 1);
  assert(isLegalAction(newBoard,"lrllrrlrrl") == 1);
  assert(isLegalAction(newBoard,"lrllrlrrlr") == 1);
  assert(isLegalAction(newBoard,"lrrllrrrll") == 1);
  assert(isLegalAction(newBoard,"rllrrl") == 1);
  assert(isLegalAction(newBoard,"llrrrlrlrl") == 1);
  assert(isLegalAction(newBoard,"llrrlr") == 1);
  assert(isLegalAction(newBoard,"lrlrrlrl") == 1);
  assert(isLegalAction(newBoard,"rrllrllrrl") == 1);
  assert(isLegalAction(newBoard,"llrlrrlrrl") == 1);
  assert(isLegalAction(newBoard,"rl") == 1);
  assert(isLegalAction(newBoard,"rlrllrlrrl") == 1);
  assert(isLegalAction(newBoard,"lrrllrlrlr") == 1);
  assert(isLegalAction(newBoard,"lllrrrrrll") == 1);
  assert(isLegalAction(newBoard,"rllrrrrlll") == 1);
  assert(isLegalAction(newBoard,"llrlrrlr") == 1);
  assert(isLegalAction(newBoard,"rrllllrlrr") == 1);
  assert(isLegalAction(newBoard,"lrlllrlrrr") == 1);
  assert(isLegalAction(newBoard,"rlrlrl") == 1);
  assert(isLegalAction(newBoard,"lrrrrlll") == 1);
  assert(isLegalAction(newBoard,"rlrrlrlllr") == 1);
  assert(isLegalAction(newBoard,"lrrrrlrlll") == 1);
  assert(isLegalAction(newBoard,"llllrrrrrl") == 1);
  assert(isLegalAction(newBoard,"rllrlrlrrl") == 1);
  assert(isLegalAction(newBoard,"lrrrlrlllr") == 1);
  assert(isLegalAction(newBoard,"lrrrlrrlll") == 1);
  assert(isLegalAction(newBoard,"lrrlrlrrll") == 1);
  assert(isLegalAction(newBoard,"llrlrrllrr") == 1);
  assert(isLegalAction(newBoard,"llrrlllrrr") == 1);
  assert(isLegalAction(newBoard,"rlrrrlrlll") == 1);
  assert(isLegalAction(newBoard,"rlrlrlrlrl") == 1);
  assert(isLegalAction(newBoard,"lrlrrrll") == 1);
  assert(isLegalAction(newBoard,"rrlrlrll") == 1);
  assert(isLegalAction(newBoard,"rlrlllrlrr") == 1);
  assert(isLegalAction(newBoard,"lrllrrrllr") == 1);
  assert(isLegalAction(newBoard,"rrrrlrllll") == 1);
  assert(isLegalAction(newBoard,"lllllrrrrr") == 1);
  assert(isLegalAction(newBoard,"rllrlllrrr") == 1);
  assert(isLegalAction(newBoard,"rllllrlrrr") == 1);
  assert(isLegalAction(newBoard,"rrlrllrllr") == 1);
  assert(isLegalAction(newBoard,"rlrllrrrll") == 1);
  assert(isLegalAction(newBoard,"lrrlrl") == 1);
  assert(isLegalAction(newBoard,"lrlrrlllrr") == 1);
  assert(isLegalAction(newBoard,"rrlllllrrr") == 1);
  assert(isLegalAction(newBoard,"lrllrrllrr") == 1);
  assert(isLegalAction(newBoard,"rllllrrr") == 1);
  assert(isLegalAction(newBoard,"llrrrrllrl") == 1);
  assert(isLegalAction(newBoard,"lllrrrrl") == 1);
  assert(isLegalAction(newBoard,"rrllrl") == 1);
  assert(isLegalAction(newBoard,"llrrrllr") == 1);
  assert(isLegalAction(newBoard,"rllrrrll") == 1);
  assert(isLegalAction(newBoard,"lrrlrllrrl") == 1);
  assert(isLegalAction(newBoard,"llrrrl") == 1);
  assert(isLegalAction(newBoard,"rrlllrrl") == 1);
  assert(isLegalAction(newBoard,"llrlrr") == 1);
  assert(isLegalAction(newBoard,"rrllrrlllr") == 1);
  assert(isLegalAction(newBoard,"lrllrllrrr") == 1);
  assert(isLegalAction(newBoard,"rllrlrrlrl") == 1);
  assert(isLegalAction(newBoard,"rllrlrllrr") == 1);
  assert(isLegalAction(newBoard,"rlrllrrllr") == 1);
  assert(isLegalAction(newBoard,"lrrllrrlrl") == 1);
  assert(isLegalAction(newBoard,"rrlrrlllrl") == 1);
  assert(isLegalAction(newBoard,"rrlrrrllll") == 1);
  assert(isLegalAction(newBoard,"lrrlrrrlll") == 1);
  assert(isLegalAction(newBoard,"lrrlllrrrl") == 1);
  assert(isLegalAction(newBoard,"lllrlrrrrl") == 1);
  assert(isLegalAction(newBoard,"lrrrlllrlr") == 1);
  assert(isLegalAction(newBoard,"lllrrrllrr") == 1);
  assert(isLegalAction(newBoard,"lrrrllrrll") == 1);
  assert(isLegalAction(newBoard,"lrllllrrrr") == 1);
  assert(isLegalAction(newBoard,"lllrlrrrlr") == 1);
  assert(isLegalAction(newBoard,"rlllrrlr") == 1);
  assert(isLegalAction(newBoard,"rrrlrrllll") == 1);
  assert(isLegalAction(newBoard,"rlrrll") == 1);
  
  
  
  assert(isLegalAction(newBoard,"lllrrrllll") == 0);
  assert(isLegalAction(newBoard,"lllrrllllr") == 0);
  assert(isLegalAction(newBoard,"lrlrrlllll") == 0);
  assert(isLegalAction(newBoard,"llrlrrllll") == 0);
  assert(isLegalAction(newBoard,"rlllllllrr") == 0);
  assert(isLegalAction(newBoard,"llllrrlrll") == 0);
  assert(isLegalAction(newBoard,"llllrlllrr") == 0);
  assert(isLegalAction(newBoard,"rlrllllllr") == 0);
  assert(isLegalAction(newBoard,"rlllllrrll") == 0);
  assert(isLegalAction(newBoard,"rlllrllrll") == 0);
  assert(isLegalAction(newBoard,"rlllrlllrl") == 0);
  assert(isLegalAction(newBoard,"llllrlrlrl") == 0);
  assert(isLegalAction(newBoard,"llrlrlllrl") == 0);
  assert(isLegalAction(newBoard,"llrlllrllr") == 0);
  assert(isLegalAction(newBoard,"rllrlrllll") == 0);
  assert(isLegalAction(newBoard,"rllllrlllr") == 0);
  assert(isLegalAction(newBoard,"rllrlllrll") == 0);
  assert(isLegalAction(newBoard,"lrrlllllrl") == 0);
  assert(isLegalAction(newBoard,"lllllrllrr") == 0);
  assert(isLegalAction(newBoard,"lrlrlrllll") == 0);
  assert(isLegalAction(newBoard,"lrrllrllll") == 0);
  assert(isLegalAction(newBoard,"lrlllrllrl") == 0);
  assert(isLegalAction(newBoard,"lrlllrlllr") == 0);
  assert(isLegalAction(newBoard,"llrrlllllr") == 0);
  assert(isLegalAction(newBoard,"llrrrlllll") == 0);
  assert(isLegalAction(newBoard,"lllrlllrlr") == 0);
  assert(isLegalAction(newBoard,"lllrrllrll") == 0);
  assert(isLegalAction(newBoard,"lllrlrrlll") == 0);
  assert(isLegalAction(newBoard,"lrlrlllllr") == 0);
  assert(isLegalAction(newBoard,"rllrlllllr") == 0);
  assert(isLegalAction(newBoard,"llrllllrlr") == 0);
  assert(isLegalAction(newBoard,"rlllllrlrl") == 0);
  assert(isLegalAction(newBoard,"lllrlrlrll") == 0);
  assert(isLegalAction(newBoard,"lllllrrlrl") == 0);
  assert(isLegalAction(newBoard,"rlllrllllr") == 0);
  assert(isLegalAction(newBoard,"llllllrlrr") == 0);
  assert(isLegalAction(newBoard,"lrllrrllll") == 0);
  assert(isLegalAction(newBoard,"lrrrllllll") == 0);
  assert(isLegalAction(newBoard,"rllllllrlr") == 0);
  assert(isLegalAction(newBoard,"lllllrrllr") == 0);
  assert(isLegalAction(newBoard,"rrllllllrl") == 0);
  assert(isLegalAction(newBoard,"llrrlrllll") == 0);
  assert(isLegalAction(newBoard,"lrrllllrll") == 0);
  assert(isLegalAction(newBoard,"llllrlrrll") == 0);
  assert(isLegalAction(newBoard,"lrllrlllrl") == 0);
  assert(isLegalAction(newBoard,"lllllrlrrl") == 0);
  assert(isLegalAction(newBoard,"llrlllllrr") == 0);
  assert(isLegalAction(newBoard,"lllllllrrr") == 0);
  assert(isLegalAction(newBoard,"rlrlllllrl") == 0);
  assert(isLegalAction(newBoard,"lllrrlllrl") == 0);
  assert(isLegalAction(newBoard,"llrllllrrl") == 0);
  assert(isLegalAction(newBoard,"rllllrlrll") == 0);
  assert(isLegalAction(newBoard,"lrllllrllr") == 0);
  assert(isLegalAction(newBoard,"rrlllllllr") == 0);
  assert(isLegalAction(newBoard,"lrlllllrrl") == 0);
  assert(isLegalAction(newBoard,"rrllllrlll") == 0);
  assert(isLegalAction(newBoard,"rllllllrrl") == 0);
  assert(isLegalAction(newBoard,"rlllrlrlll") == 0);
  assert(isLegalAction(newBoard,"llllrrrlll") == 0);
  assert(isLegalAction(newBoard,"lrllrlrlll") == 0);
  assert(isLegalAction(newBoard,"rllrrlllll") == 0);
  assert(isLegalAction(newBoard,"llllrrllrl") == 0);
  assert(isLegalAction(newBoard,"llrllrrlll") == 0);
  assert(isLegalAction(newBoard,"rrlllrllll") == 0);
  assert(isLegalAction(newBoard,"llrllrlllr") == 0);
  assert(isLegalAction(newBoard,"lrllrllrll") == 0);
  assert(isLegalAction(newBoard,"lrllllllrr") == 0);
  assert(isLegalAction(newBoard,"lllrlrlllr") == 0);
  assert(isLegalAction(newBoard,"lrllrllllr") == 0);
  assert(isLegalAction(newBoard,"lllrlllrrl") == 0);
  assert(isLegalAction(newBoard,"rrlrllllll") == 0);
  assert(isLegalAction(newBoard,"llrllrlrll") == 0);
  assert(isLegalAction(newBoard,"lrlllrrlll") == 0);
  assert(isLegalAction(newBoard,"llrlllrrll") == 0);
  assert(isLegalAction(newBoard,"llrrllrlll") == 0);
  assert(isLegalAction(newBoard,"rlllrrllll") == 0);
  assert(isLegalAction(newBoard,"llllrlrllr") == 0);
  assert(isLegalAction(newBoard,"rlrllllrll") == 0);
  assert(isLegalAction(newBoard,"llrrlllrll") == 0);
  assert(isLegalAction(newBoard,"llrrllllrl") == 0);
  assert(isLegalAction(newBoard,"llrlrllllr") == 0);
  assert(isLegalAction(newBoard,"lllrllllrr") == 0);
  assert(isLegalAction(newBoard,"llrllrllrl") == 0);
  assert(isLegalAction(newBoard,"lrlrllllrl") == 0);
  assert(isLegalAction(newBoard,"rlrlllrlll") == 0);
  assert(isLegalAction(newBoard,"lllllrlrlr") == 0);
  assert(isLegalAction(newBoard,"llllrllrrl") == 0);
  assert(isLegalAction(newBoard,"lrlrlllrll") == 0);
  assert(isLegalAction(newBoard,"rllrllrlll") == 0);
  assert(isLegalAction(newBoard,"lllrllrrll") == 0);
  assert(isLegalAction(newBoard,"lllrrlrlll") == 0);
  assert(isLegalAction(newBoard,"lrllllrlrl") == 0);
  assert(isLegalAction(newBoard,"lllllrrrll") == 0);
  assert(isLegalAction(newBoard,"rlrlrlllll") == 0);
  assert(isLegalAction(newBoard,"rrlllllrll") == 0);
  assert(isLegalAction(newBoard,"rllllrrlll") == 0);
  assert(isLegalAction(newBoard,"lllrllrlrl") == 0);
  assert(isLegalAction(newBoard,"rrrlllllll") == 0);
  assert(isLegalAction(newBoard,"llllrllrlr") == 0);
  assert(isLegalAction(newBoard,"lllrlrllrl") == 0);
  assert(isLegalAction(newBoard,"llrlllrlrl") == 0);
  assert(isLegalAction(newBoard,"lrlrllrlll") == 0);
  assert(isLegalAction(newBoard,"lrrllllllr") == 0);
  assert(isLegalAction(newBoard,"llrlrllrll") == 0);
  assert(isLegalAction(newBoard,"rllrllllrl") == 0);
  assert(isLegalAction(newBoard,"llllrrlllr") == 0);
  assert(isLegalAction(newBoard,"rlrllrllll") == 0);
  assert(isLegalAction(newBoard,"lrrlrlllll") == 0);
  assert(isLegalAction(newBoard,"lrllllrrll") == 0);
  assert(isLegalAction(newBoard,"rrllrlllll") == 0);
  assert(isLegalAction(newBoard,"lllrllrllr") == 0);
  assert(isLegalAction(newBoard,"lrrlllrlll") == 0);
  assert(isLegalAction(newBoard,"lrlllllrlr") == 0);
  assert(isLegalAction(newBoard,"llllllrrrl") == 0);
  assert(isLegalAction(newBoard,"lrlllrlrll") == 0);
  assert(isLegalAction(newBoard,"llrlrlrlll") == 0);
  assert(isLegalAction(newBoard,"rlllllrllr") == 0);
  assert(isLegalAction(newBoard,"rllllrllrl") == 0);
  assert(isLegalAction(newBoard,"rlrrllllll") == 0);
  assert(isLegalAction(newBoard,"llllllrrlr") == 0);
  
  assert(isLegalAction(newBoard,"rlrrrlll") == 1);
  assert(isLegalAction(newBoard,"rrrllllr") == 1);
  assert(isLegalAction(newBoard,"rrrlrlrlll") == 1);
  printf("Testing Passed!")
  //HOLY SHIT. Do u know how long it took me to change every single newBoard3 into a newBoard.
  
  // DONE
  printf("All Tests Passed!\nYou Are AWESOME!!!");

}
