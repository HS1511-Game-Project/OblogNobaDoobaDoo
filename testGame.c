// Created by [insert names here]
// This program aims to test the game and see if it is valid.

#include <stdio.h>
#include <stdlib.h>
#include "Game.h"

#define BOARD_SIZE 100
#define CAMPUS 1
#define BACHELOR_OF_MONEY 1

int main(/* Add argv stuff here */) {
  
  // If you want to create a new board, use the corropsonding test number
  
  // TEST 1 // buildCampus, getTileInfo
  char * newBoard[BOARD_SIZE] = setBoardUp();
  newBoard = buildCampus("lr");
  assert(getTileInfo("lr", newBoard) == CAMPUS);
  // TEST 2 // getPlayerInfo, addStudent
  int playerToTest = 1;
  int initialNumberOfStudents = getPlayerInfo(playerToTest).bMS; // bMS stands for Bachelor of Money Students
  addStudent(BACHELOR_OF_MONEY, playerToTest, getAllPlayersInfo());
  int newNumberOfStudents = getPlayerInfo(playerToTest).bMS;
  assert(newNumberOfStudents == initialNumberOfStudents + 1);
  
  // TEST 3 //  isLegalAction - Zac
  char * newBoard3[BOARD_SIZE] = setBoardUp();
  // Supposed to be false ( out of the board )
  assert(isLegalAction(newBoard3,"llll") == 0);
  assert(isLegalAction(newBoard3,"rrrr") == 0);
  
  assert(isLegalAction(newBoard3,"lrlrlrlrlr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrlrlrl") == 1);
  
  assert(isLegalAction(newBoard3,"llrlrrrr") == 1);
  assert(isLegalAction(newBoard3,"rrlrllll") == 1);
  
    assert(isLegalAction(newBoard3,"lllrrr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrlllrr") == 1);
  assert(isLegalAction(newBoard3,"llrlrlrrrl") == 1);
  assert(isLegalAction(newBoard3,"rllrrlrllr") == 1);
  assert(isLegalAction(newBoard3,"rrllrrlrll") == 1);
  assert(isLegalAction(newBoard3,"lrlrlrrl") == 1);
  assert(isLegalAction(newBoard3,"rrrrllll") == 1);
  assert(isLegalAction(newBoard3,"rrrrlllrll") == 1);
  assert(isLegalAction(newBoard3,"rrlrrllllr") == 1);
  assert(isLegalAction(newBoard3,"rlrrlrrlll") == 1);
  assert(isLegalAction(newBoard3,"rlllrrrrll") == 1);
  assert(isLegalAction(newBoard3,"rlrlllrr") == 1);
  assert(isLegalAction(newBoard3,"rllrrlrl") == 1);
  assert(isLegalAction(newBoard3,"rllrrllrrl") == 1);
  assert(isLegalAction(newBoard3,"lrllrrrl") == 1);
  assert(isLegalAction(newBoard3,"rrlllrrllr") == 1);
  assert(isLegalAction(newBoard3,"lrrrlrlrll") == 1);
  assert(isLegalAction(newBoard3,"lrlrrlrllr") == 1);
  assert(isLegalAction(newBoard3,"rrrlrllrll") == 1);
  assert(isLegalAction(newBoard3,"lrllrrlr") == 1);
  assert(isLegalAction(newBoard3,"rrlllrrlrl") == 1);
  assert(isLegalAction(newBoard3,"rlllrr") == 1);
  assert(isLegalAction(newBoard3,"lrrlrlrllr") == 1);
  assert(isLegalAction(newBoard3,"rllrrrllrl") == 1);
  assert(isLegalAction(newBoard3,"rlrllr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrllr") == 1);
  assert(isLegalAction(newBoard3,"rrllrrll") == 1);
  assert(isLegalAction(newBoard3,"rlrrlllrrl") == 1);
  assert(isLegalAction(newBoard3,"rlllrrlrlr") == 1);
  assert(isLegalAction(newBoard3,"lrrrrrllll") == 1);
  assert(isLegalAction(newBoard3,"rlllrlrr") == 1);
  assert(isLegalAction(newBoard3,"rrlrrllrll") == 1);
  assert(isLegalAction(newBoard3,"llrrrllrrl") == 1);
  assert(isLegalAction(newBoard3,"rlrrlrll") == 1);
  assert(isLegalAction(newBoard3,"llllrlrrrr") == 1);
  assert(isLegalAction(newBoard3,"rllrrllr") == 1);
  assert(isLegalAction(newBoard3,"rlllrllrrr") == 1);
  assert(isLegalAction(newBoard3,"lrrl") == 1);
  assert(isLegalAction(newBoard3,"rlrrlllr") == 1);
  assert(isLegalAction(newBoard3,"rrrrllrlll") == 1);
  assert(isLegalAction(newBoard3,"rlllrlrlrr") == 1);
  assert(isLegalAction(newBoard3,"rrrllrlrll") == 1);
  assert(isLegalAction(newBoard3,"rrlllrllrr") == 1);
  assert(isLegalAction(newBoard3,"lrrlrrllrl") == 1);
  assert(isLegalAction(newBoard3,"rllllrrlrr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrrrlll") == 1);
  assert(isLegalAction(newBoard3,"lllrrrrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrrrlllr") == 1);
  assert(isLegalAction(newBoard3,"rrllrlrllr") == 1);
  assert(isLegalAction(newBoard3,"rlrrrllllr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrlrrll") == 1);
  assert(isLegalAction(newBoard3,"rrllrllr") == 1);
  assert(isLegalAction(newBoard3,"rlrrllrl") == 1);
  assert(isLegalAction(newBoard3,"lrrrrllllr") == 1);
  assert(isLegalAction(newBoard3,"rlllrlrrlr") == 1);
  assert(isLegalAction(newBoard3,"rrllrlrlrl") == 1);
  assert(isLegalAction(newBoard3,"rrrllllrlr") == 1);
  assert(isLegalAction(newBoard3,"llrlrlrr") == 1);
  assert(isLegalAction(newBoard3,"rrrlll") == 1);
  assert(isLegalAction(newBoard3,"llrrrllrlr") == 1);
  assert(isLegalAction(newBoard3,"rrlllrrrll") == 1);
  assert(isLegalAction(newBoard3,"rlllllrrrr") == 1);
  assert(isLegalAction(newBoard3,"lrrlrllrlr") == 1);
  assert(isLegalAction(newBoard3,"lrrlrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrlrlllrrr") == 1);
  assert(isLegalAction(newBoard3,"rlrlllrrlr") == 1);
  assert(isLegalAction(newBoard3,"lrrrllllrr") == 1);
  assert(isLegalAction(newBoard3,"llrr") == 1);
  assert(isLegalAction(newBoard3,"lrlllrrlrr") == 1);
  assert(isLegalAction(newBoard3,"llrrlrrl") == 1);
  assert(isLegalAction(newBoard3,"lrlrllrrrl") == 1);
  assert(isLegalAction(newBoard3,"llrrllrlrr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrrllrl") == 1);
  assert(isLegalAction(newBoard3,"rrrlllrl") == 1);
  assert(isLegalAction(newBoard3,"lrrrllrl") == 1);
  assert(isLegalAction(newBoard3,"lrlrrrlllr") == 1);
  assert(isLegalAction(newBoard3,"rllrlrlrlr") == 1);
  assert(isLegalAction(newBoard3,"rlrllrrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrlllrrr") == 1);
  assert(isLegalAction(newBoard3,"lllrrlrr") == 1);
  assert(isLegalAction(newBoard3,"llrllrrr") == 1);
  assert(isLegalAction(newBoard3,"llrrlrllrr") == 1);
  assert(isLegalAction(newBoard3,"lrrrlllrrl") == 1);
  assert(isLegalAction(newBoard3,"rlllrrlrrl") == 1);
  assert(isLegalAction(newBoard3,"rllrlrrllr") == 1);
  assert(isLegalAction(newBoard3,"lrlrlrrlrl") == 1);
  assert(isLegalAction(newBoard3,"rrrrllllrl") == 1);
  assert(isLegalAction(newBoard3,"lrllrlrrrl") == 1);
  assert(isLegalAction(newBoard3,"llrlrrrllr") == 1);
  assert(isLegalAction(newBoard3,"lrrlllrr") == 1);
  assert(isLegalAction(newBoard3,"lrrlllrrlr") == 1);
  assert(isLegalAction(newBoard3,"rrrllrlllr") == 1);
  assert(isLegalAction(newBoard3,"llrrrrlllr") == 1);
  assert(isLegalAction(newBoard3,"llrlrrrl") == 1);
  assert(isLegalAction(newBoard3,"lrrlllrlrr") == 1);
  assert(isLegalAction(newBoard3,"rrlrlrrlll") == 1);
  assert(isLegalAction(newBoard3,"lrrlrrll") == 1);
  assert(isLegalAction(newBoard3,"llrrlrrlrl") == 1);
  assert(isLegalAction(newBoard3,"llrllrrrlr") == 1);
  assert(isLegalAction(newBoard3,"rrllrrllrl") == 1);
  assert(isLegalAction(newBoard3,"rrlrrlrlll") == 1);
  assert(isLegalAction(newBoard3,"llrllrrlrr") == 1);
  assert(isLegalAction(newBoard3,"rllrrlrrll") == 1);
  assert(isLegalAction(newBoard3,"rlllrrrllr") == 1);
  assert(isLegalAction(newBoard3,"lllrrrlrrl") == 1);
  assert(isLegalAction(newBoard3,"rlrrrllrll") == 1);
  assert(isLegalAction(newBoard3,"llrlllrrrr") == 1);
  assert(isLegalAction(newBoard3,"rrllrlrrll") == 1);
  assert(isLegalAction(newBoard3,"rllrlr") == 1);
  assert(isLegalAction(newBoard3,"rrrlllrllr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrllrrl") == 1);
  assert(isLegalAction(newBoard3,"rllrrrlrll") == 1);
  assert(isLegalAction(newBoard3,"llrlrrrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrrrrllrll") == 1);
  assert(isLegalAction(newBoard3,"llrrlrrrll") == 1);
  assert(isLegalAction(newBoard3,"rlrlrllr") == 1);
  assert(isLegalAction(newBoard3,"lrrllrlr") == 1);
  assert(isLegalAction(newBoard3,"lllrrlrrlr") == 1);
  assert(isLegalAction(newBoard3,"lrrlrrlllr") == 1);
  assert(isLegalAction(newBoard3,"lrlrlr") == 1);
  assert(isLegalAction(newBoard3,"lllrrlrrrl") == 1);
  assert(isLegalAction(newBoard3,"rrlrlllrrl") == 1);
  assert(isLegalAction(newBoard3,"rrlrlrllrl") == 1);
  assert(isLegalAction(newBoard3,"llrllrlrrr") == 1);
  assert(isLegalAction(newBoard3,"rllrrlrlrl") == 1);
  assert(isLegalAction(newBoard3,"rlrrrrllll") == 1);
  assert(isLegalAction(newBoard3,"lrlrlrrrll") == 1);
  assert(isLegalAction(newBoard3,"lllrlrrr") == 1);
  assert(isLegalAction(newBoard3,"lrrllllrrr") == 1);
  assert(isLegalAction(newBoard3,"lrlrlrlrlr") == 1);
  assert(isLegalAction(newBoard3,"lrlrllrlrr") == 1);
  assert(isLegalAction(newBoard3,"lrllrrlrlr") == 1);
  assert(isLegalAction(newBoard3,"rrllrllrlr") == 1);
  assert(isLegalAction(newBoard3,"rrlrlllr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrrlrll") == 1);
  assert(isLegalAction(newBoard3,"lrlrlrllrr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrllrrrlrl") == 1);
  assert(isLegalAction(newBoard3,"llrlrlrrlr") == 1);
  assert(isLegalAction(newBoard3,"llrrlrlrrl") == 1);
  assert(isLegalAction(newBoard3,"rlrlrllrrl") == 1);
  assert(isLegalAction(newBoard3,"llrlrrlrlr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrllrlr") == 1);
  assert(isLegalAction(newBoard3,"lrrrlrllrl") == 1);
  assert(isLegalAction(newBoard3,"lrlrrrlrll") == 1);
  assert(isLegalAction(newBoard3,"rlrrlllrlr") == 1);
  assert(isLegalAction(newBoard3,"rlrllrlr") == 1);
  assert(isLegalAction(newBoard3,"llrrrlrllr") == 1);
  assert(isLegalAction(newBoard3,"rlllrrrlrl") == 1);
  assert(isLegalAction(newBoard3,"rlrlllrrrl") == 1);
  assert(isLegalAction(newBoard3,"lrlllrrrrl") == 1);
  assert(isLegalAction(newBoard3,"rrlllrlrrl") == 1);
  assert(isLegalAction(newBoard3,"rrrllrll") == 1);
  assert(isLegalAction(newBoard3,"llrlrrrrll") == 1);
  assert(isLegalAction(newBoard3,"lllrlrrlrr") == 1);
  assert(isLegalAction(newBoard3,"rllrllrrrl") == 1);
  assert(isLegalAction(newBoard3,"llrrllrrrl") == 1);
  assert(isLegalAction(newBoard3,"lr") == 1);
  assert(isLegalAction(newBoard3,"lrrllr") == 1);
  assert(isLegalAction(newBoard3,"lrrlrllr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrrll") == 1);
  assert(isLegalAction(newBoard3,"lrrrlrll") == 1);
  assert(isLegalAction(newBoard3,"rllrrrlllr") == 1);
  assert(isLegalAction(newBoard3,"rrrlrlllrl") == 1);
  assert(isLegalAction(newBoard3,"rrrlllrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrrllrrl") == 1);
  assert(isLegalAction(newBoard3,"rlllrrrl") == 1);
  assert(isLegalAction(newBoard3,"lrlrlrlrrl") == 1);
  assert(isLegalAction(newBoard3,"rrllrlrl") == 1);
  assert(isLegalAction(newBoard3,"rlrllrllrr") == 1);
  assert(isLegalAction(newBoard3,"rllrlrlr") == 1);
  assert(isLegalAction(newBoard3,"rllllrrrrl") == 1);
  assert(isLegalAction(newBoard3,"rrlrllrrll") == 1);
  assert(isLegalAction(newBoard3,"llrlrlrlrr") == 1);
  assert(isLegalAction(newBoard3,"llllrrrrlr") == 1);
  assert(isLegalAction(newBoard3,"rllrllrr") == 1);
  assert(isLegalAction(newBoard3,"lrrllrrllr") == 1);
  assert(isLegalAction(newBoard3,"llllrrlrrr") == 1);
  assert(isLegalAction(newBoard3,"rrll") == 1);
  assert(isLegalAction(newBoard3,"lrlrllrrlr") == 1);
  assert(isLegalAction(newBoard3,"rlllrlrrrl") == 1);
  assert(isLegalAction(newBoard3,"rrrrlllllr") == 1);
  assert(isLegalAction(newBoard3,"lrrrllrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrrrll") == 1);
  assert(isLegalAction(newBoard3,"lrlllrrrlr") == 1);
  assert(isLegalAction(newBoard3,"rllr") == 1);
  assert(isLegalAction(newBoard3,"rrlrlllrlr") == 1);
  assert(isLegalAction(newBoard3,"rrlllrlr") == 1);
  assert(isLegalAction(newBoard3,"lllrrrlrlr") == 1);
  assert(isLegalAction(newBoard3,"lrrllrllrr") == 1);
  assert(isLegalAction(newBoard3,"llrrrlrrll") == 1);
  assert(isLegalAction(newBoard3,"rllrllrrlr") == 1);
  assert(isLegalAction(newBoard3,"lllrrllrrr") == 1);
  assert(isLegalAction(newBoard3,"rrlrllrlrl") == 1);
  assert(isLegalAction(newBoard3,"llrrlrrllr") == 1);
  assert(isLegalAction(newBoard3,"lrrlrlrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrllrlrlrr") == 1);
  assert(isLegalAction(newBoard3,"rrrlrlll") == 1);
  assert(isLegalAction(newBoard3,"lllrrrlr") == 1);
  assert(isLegalAction(newBoard3,"lrrllrlrrl") == 1);
  assert(isLegalAction(newBoard3,"lrrlrlllrr") == 1);
  assert(isLegalAction(newBoard3,"rrrlllllrr") == 1);
  assert(isLegalAction(newBoard3,"lrrlrrlrll") == 1);
  assert(isLegalAction(newBoard3,"rlrrllllrr") == 1);
  assert(isLegalAction(newBoard3,"rlrrllrrll") == 1);
  assert(isLegalAction(newBoard3,"rlrrllrlrl") == 1);
  assert(isLegalAction(newBoard3,"rrllllrrlr") == 1);
  assert(isLegalAction(newBoard3,"llrrlrlrlr") == 1);
  assert(isLegalAction(newBoard3,"rrllrlllrr") == 1);
  assert(isLegalAction(newBoard3,"rrrrrlllll") == 1);
  assert(isLegalAction(newBoard3,"rlrlrrrlll") == 1);
  assert(isLegalAction(newBoard3,"lllrrlrlrr") == 1);
  assert(isLegalAction(newBoard3,"llrrrrll") == 1);
  assert(isLegalAction(newBoard3,"lrlrlrrllr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrl") == 1);
  assert(isLegalAction(newBoard3,"lllrrrrllr") == 1);
  assert(isLegalAction(newBoard3,"llrrllrr") == 1);
  assert(isLegalAction(newBoard3,"rrlrllllrr") == 1);
  assert(isLegalAction(newBoard3,"lrlrllrr") == 1);
  assert(isLegalAction(newBoard3,"lrrrllrllr") == 1);
  assert(isLegalAction(newBoard3,"rlrllrrl") == 1);
  assert(isLegalAction(newBoard3,"rrrlrllllr") == 1);
  assert(isLegalAction(newBoard3,"rllrlrrl") == 1);
  assert(isLegalAction(newBoard3,"rrrllllrrl") == 1);
  assert(isLegalAction(newBoard3,"rlrllllrrr") == 1);
  assert(isLegalAction(newBoard3,"rrllllrr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrllrlr") == 1);
  assert(isLegalAction(newBoard3,"rrlrll") == 1);
  assert(isLegalAction(newBoard3,"lrrrrlllrl") == 1);
  assert(isLegalAction(newBoard3,"llrlrllrrr") == 1);
  assert(isLegalAction(newBoard3,"rlrrlrlrll") == 1);
  assert(isLegalAction(newBoard3,"lllrlrlrrr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrlrrll") == 1);
  assert(isLegalAction(newBoard3,"llrrlrlr") == 1);
  assert(isLegalAction(newBoard3,"rlrrrlllrl") == 1);
  assert(isLegalAction(newBoard3,"llrrrlrl") == 1);
  assert(isLegalAction(newBoard3,"rlrrlrllrl") == 1);
  assert(isLegalAction(newBoard3,"llrrrlllrr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrlrllr") == 1);
  assert(isLegalAction(newBoard3,"rrlllr") == 1);
  assert(isLegalAction(newBoard3,"rrlrlrlrll") == 1);
  assert(isLegalAction(newBoard3,"lrllrrrrll") == 1);
  assert(isLegalAction(newBoard3,"llllrrrr") == 1);
  assert(isLegalAction(newBoard3,"rrlrrlll") == 1);
  assert(isLegalAction(newBoard3,"rrlllrlrlr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrrlllr") == 1);
  assert(isLegalAction(newBoard3,"rrrlllrrll") == 1);
  assert(isLegalAction(newBoard3,"rllrrllrlr") == 1);
  assert(isLegalAction(newBoard3,"rlrrllrllr") == 1);
  assert(isLegalAction(newBoard3,"llrllrrrrl") == 1);
  assert(isLegalAction(newBoard3,"rllllrrrlr") == 1);
  assert(isLegalAction(newBoard3,"rrrllrrlll") == 1);
  assert(isLegalAction(newBoard3,"lrlrlrlr") == 1);
  assert(isLegalAction(newBoard3,"llrrrrrlll") == 1);
  assert(isLegalAction(newBoard3,"llrrrrlrll") == 1);
  assert(isLegalAction(newBoard3,"rrrllrllrl") == 1);
  assert(isLegalAction(newBoard3,"lrlr") == 1);
  assert(isLegalAction(newBoard3,"rllrllrlrr") == 1);
  assert(isLegalAction(newBoard3,"rlrllrlrlr") == 1);
  assert(isLegalAction(newBoard3,"llrrllrrlr") == 1);
  assert(isLegalAction(newBoard3,"lllrllrrrr") == 1);
  assert(isLegalAction(newBoard3,"lrllrlrr") == 1);
  assert(isLegalAction(newBoard3,"rrlrllrl") == 1);
  assert(isLegalAction(newBoard3,"llllrrrlrr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrrllrl") == 1);
  assert(isLegalAction(newBoard3,"rlllrrllrr") == 1);
  assert(isLegalAction(newBoard3,"rllrlrrrll") == 1);
  assert(isLegalAction(newBoard3,"rlrl") == 1);
  assert(isLegalAction(newBoard3,"rrllrrrlll") == 1);
  assert(isLegalAction(newBoard3,"lrllrr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrlrlrl") == 1);
  assert(isLegalAction(newBoard3,"rrlrlrlllr") == 1);
  assert(isLegalAction(newBoard3,"rllrrlllrr") == 1);
  assert(isLegalAction(newBoard3,"rrllllrrrl") == 1);
  assert(isLegalAction(newBoard3,"lrllrrlrrl") == 1);
  assert(isLegalAction(newBoard3,"lrllrlrrlr") == 1);
  assert(isLegalAction(newBoard3,"lrrllrrrll") == 1);
  assert(isLegalAction(newBoard3,"rllrrl") == 1);
  assert(isLegalAction(newBoard3,"llrrrlrlrl") == 1);
  assert(isLegalAction(newBoard3,"llrrlr") == 1);
  assert(isLegalAction(newBoard3,"lrlrrlrl") == 1);
  assert(isLegalAction(newBoard3,"rrllrllrrl") == 1);
  assert(isLegalAction(newBoard3,"llrlrrlrrl") == 1);
  assert(isLegalAction(newBoard3,"rl") == 1);
  assert(isLegalAction(newBoard3,"rlrllrlrrl") == 1);
  assert(isLegalAction(newBoard3,"lrrllrlrlr") == 1);
  assert(isLegalAction(newBoard3,"lllrrrrrll") == 1);
  assert(isLegalAction(newBoard3,"rllrrrrlll") == 1);
  assert(isLegalAction(newBoard3,"llrlrrlr") == 1);
  assert(isLegalAction(newBoard3,"rrllllrlrr") == 1);
  assert(isLegalAction(newBoard3,"lrlllrlrrr") == 1);
  assert(isLegalAction(newBoard3,"rlrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrrrrlll") == 1);
  assert(isLegalAction(newBoard3,"rlrrlrlllr") == 1);
  assert(isLegalAction(newBoard3,"lrrrrlrlll") == 1);
  assert(isLegalAction(newBoard3,"llllrrrrrl") == 1);
  assert(isLegalAction(newBoard3,"rllrlrlrrl") == 1);
  assert(isLegalAction(newBoard3,"lrrrlrlllr") == 1);
  assert(isLegalAction(newBoard3,"lrrrlrrlll") == 1);
  assert(isLegalAction(newBoard3,"lrrlrlrrll") == 1);
  assert(isLegalAction(newBoard3,"llrlrrllrr") == 1);
  assert(isLegalAction(newBoard3,"llrrlllrrr") == 1);
  assert(isLegalAction(newBoard3,"rlrrrlrlll") == 1);
  assert(isLegalAction(newBoard3,"rlrlrlrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrlrrrll") == 1);
  assert(isLegalAction(newBoard3,"rrlrlrll") == 1);
  assert(isLegalAction(newBoard3,"rlrlllrlrr") == 1);
  assert(isLegalAction(newBoard3,"lrllrrrllr") == 1);
  assert(isLegalAction(newBoard3,"rrrrlrllll") == 1);
  assert(isLegalAction(newBoard3,"lllllrrrrr") == 1);
  assert(isLegalAction(newBoard3,"rllrlllrrr") == 1);
  assert(isLegalAction(newBoard3,"rllllrlrrr") == 1);
  assert(isLegalAction(newBoard3,"rrlrllrllr") == 1);
  assert(isLegalAction(newBoard3,"rlrllrrrll") == 1);
  assert(isLegalAction(newBoard3,"lrrlrl") == 1);
  assert(isLegalAction(newBoard3,"lrlrrlllrr") == 1);
  assert(isLegalAction(newBoard3,"rrlllllrrr") == 1);
  assert(isLegalAction(newBoard3,"lrllrrllrr") == 1);
  assert(isLegalAction(newBoard3,"rllllrrr") == 1);
  assert(isLegalAction(newBoard3,"llrrrrllrl") == 1);
  assert(isLegalAction(newBoard3,"lllrrrrl") == 1);
  assert(isLegalAction(newBoard3,"rrllrl") == 1);
  assert(isLegalAction(newBoard3,"llrrrllr") == 1);
  assert(isLegalAction(newBoard3,"rllrrrll") == 1);
  assert(isLegalAction(newBoard3,"lrrlrllrrl") == 1);
  assert(isLegalAction(newBoard3,"llrrrl") == 1);
  assert(isLegalAction(newBoard3,"rrlllrrl") == 1);
  assert(isLegalAction(newBoard3,"llrlrr") == 1);
  assert(isLegalAction(newBoard3,"rrllrrlllr") == 1);
  assert(isLegalAction(newBoard3,"lrllrllrrr") == 1);
  assert(isLegalAction(newBoard3,"rllrlrrlrl") == 1);
  assert(isLegalAction(newBoard3,"rllrlrllrr") == 1);
  assert(isLegalAction(newBoard3,"rlrllrrllr") == 1);
  assert(isLegalAction(newBoard3,"lrrllrrlrl") == 1);
  assert(isLegalAction(newBoard3,"rrlrrlllrl") == 1);
  assert(isLegalAction(newBoard3,"rrlrrrllll") == 1);
  assert(isLegalAction(newBoard3,"lrrlrrrlll") == 1);
  assert(isLegalAction(newBoard3,"lrrlllrrrl") == 1);
  assert(isLegalAction(newBoard3,"lllrlrrrrl") == 1);
  assert(isLegalAction(newBoard3,"lrrrlllrlr") == 1);
  assert(isLegalAction(newBoard3,"lllrrrllrr") == 1);
  assert(isLegalAction(newBoard3,"lrrrllrrll") == 1);
  assert(isLegalAction(newBoard3,"lrllllrrrr") == 1);
  assert(isLegalAction(newBoard3,"lllrlrrrlr") == 1);
  assert(isLegalAction(newBoard3,"rlllrrlr") == 1);
  assert(isLegalAction(newBoard3,"rrrlrrllll") == 1);
  assert(isLegalAction(newBoard3,"rlrrll") == 1);
  assert(isLegalAction(newBoard3,"rlrrrlll") == 1);
  assert(isLegalAction(newBoard3,"rrrllllr") == 1);
  assert(isLegalAction(newBoard3,"rrrlrlrlll") == 1);
  
  // Yeet
}
