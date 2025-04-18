#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#pragma once
#define PHASE_INITIAL_IMAGE 1
#define PHASE_HOME_PAGE 2
#define PHASE_STAGE_1 3
#define PHASE_STAGE_2 4
#define PHASE_STAGE_3 5
#define PHASE_STAGE_4 6
#define PHASE_STAGE_5 7
#define PHASE_STAGE_6 8
#define PHASE_STAGE_7 9

#define JUMP_NORMAL 0
#define JUMP_PLAY 1
#define JUMP_END 2
#define JUMP_PAUSE 3
#define JUMP_INFO 4


#define NO_MOVE 0
#define MOVE_BY_DROP 1
#define MOVE_BY_SWITCH 2

#define NO_COLOR 0
#define BLUE_OBJECT 1
#define BROWN_OBJECT 2
#define GREEN_OBJECT 3
#define PINK_OBJECT 4
#define ORANGE_OBJECT 5
#define WHITE_OBJECT 6
#define YELLOW_OBJECT 7

#define NORMAL_OBJECT 1
#define STRIPE_OBJECT 2
#define STRIPE_LEFT_RIGHT_OBJECT 3
#define STRIPE_RIGHT_LEFT_OBJECT 4
#define FLOWER_OBJECT 5
#define STARFLOWER_OBJECT 6
#define TRIANGLEFLOWER_OBJECT 7
#define RAINBOWBALL_OBJECT 8
#define FLOWER_COMBINED_OBJECT 9
#define FLOWER_STRIPE_OBJECT 10
#define STRIPE_COMBINED_OBJECT 11

//31-50 for obstacle use
#define ONE_LAYER_COOKIE_OBJECT 31
#define TWO_LAYER_COOKIE_OBJECT 32

#define REACH_IMAGE GA_RESOURCE_DIR"/Image/GameObject/reach.png"

#define EMPTY_OBJECT GA_RESOURCE_DIR"/Image/GameObject/emptyObject.png"

#define COOKIE_ONE_IMAGE GA_RESOURCE_DIR"/Image/GameObject/cookie2.png"
#define COOKIE_TWO_IMAGE GA_RESOURCE_DIR"/Image/GameObject/cookie1.png"

#define BLUE_NORMAL_OBJECT GA_RESOURCE_DIR"/Image/GameObject/blueNormal.png"
#define BROWN_NORMAL_OBJECT GA_RESOURCE_DIR"/Image/GameObject/brownNormal.png"
#define GREEN_NORMAL_OBJECT GA_RESOURCE_DIR"/Image/GameObject/greenNormal.png" 
#define PINK_NORMAL_OBJECT GA_RESOURCE_DIR"/Image/GameObject/pinkNormal.png"
#define ORANGE_NORMAL_OBJECT GA_RESOURCE_DIR"/Image/GameObject/orangeNormal.png"
#define WHITE_NORMAL_OBJECT GA_RESOURCE_DIR"/Image/GameObject/whiteNormal.png"
#define YELLOW_NORMAL_OBJECT GA_RESOURCE_DIR"/Image/GameObject/yellowNormal.png"

#define BLUE_STRIPE_OBJECT GA_RESOURCE_DIR"/Image/GameObject/blueLine.png"
#define BROWN_STRIPE_OBJECT GA_RESOURCE_DIR"/Image/GameObject/brownLine.png"
#define GREEN_STRIPE_OBJECT GA_RESOURCE_DIR"/Image/GameObject/greenLine.png"
#define PINK_STRIPE_OBJECT GA_RESOURCE_DIR"/Image/GameObject/pinkLine.png"
#define ORANGE_STRIPE_OBJECT GA_RESOURCE_DIR"/Image/GameObject/orangeLine.png"
#define WHITE_STRIPE_OBJECT GA_RESOURCE_DIR"/Image/GameObject/whiteLine.png"
#define YELLOW_STRIPE_OBJECT GA_RESOURCE_DIR"/Image/GameObject/yellowLine.png"

#define BLUE_STRIPE_LEFT_RIGHT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/blueLineLeftRight.png"
#define BROWN_STRIPE_LEFT_RIGHT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/brownLineLeftRight.png"
#define GREEN_STRIPE_LEFT_RIGHT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/greenLineLeftRight.png"
#define PINK_STRIPE_LEFT_RIGHT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/pinkLineLeftRight.png"
#define ORANGE_STRIPE_LEFT_RIGHT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/orangeLineLeftRight.png"
#define WHITE_STRIPE_LEFT_RIGHT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/whiteLineLeftRight.png"
#define YELLOW_STRIPE_LEFT_RIGHT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/yellowLineLeftRight.png"

#define BLUE_STRIPE_RIGHT_LEFT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/blueLineRightLeft.png"
#define BROWN_STRIPE_RIGHT_LEFT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/brownLineRightLeft.png"
#define GREEN_STRIPE_RIGHT_LEFT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/greenLineRightLeft.png"
#define PINK_STRIPE_RIGHT_LEFT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/pinkLineRightLeft.png"
#define ORANGE_STRIPE_RIGHT_LEFT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/orangeLineRightLeft.png"
#define WHITE_STRIPE_RIGHT_LEFT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/whiteLineRightLeft.png"
#define YELLOW_STRIPE_RIGHT_LEFT_OBJECT GA_RESOURCE_DIR"/Image/GameObject/yellowLineRightLeft.png"

#define BLUE_FLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/blueFlower.png"
#define BROWN_FLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/brownFlower.png"
#define GREEN_FLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/greenFlower.png"
#define PINK_FLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/pinkFlower.png"
#define ORANGE_FLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/orangeFlower.png"
#define WHITE_FLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/whiteFlower.png"
#define YELLOW_FLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/yellowFlower.png"

#define BLUE_STARFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/blueStarFlower.png"
#define BROWN_STARFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/brownStarFlower.png"
#define GREEN_STARFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/greenStarFlower.png"
#define PINK_STARFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/pinkStarFlower.png"
#define ORANGE_STARFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/orangeStarFlower.png"
#define WHITE_STARFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/whiteStarFlower.png"
#define YELLOW_STARFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/yellowStarFlower.png"

#define BLUE_TRIANGLEFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/blueTriangleFlower.png"
#define BROWN_TRIANGLEFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/brownTriangleFlower.png"
#define GREEN_TRIANGLEFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/greenTriangleFlower.png"
#define PINK_TRIANGLEFLOWER_OBJECT  GA_RESOURCE_DIR"/Image/GameObject/pinkTriangleFlower.png"
#define ORANGE_TRIANGLEFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/orangeTriangleFlower.png"
#define WHITE_TRIANGLEFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/whiteTriangleFlower.png"
#define YELLOW_TRIANGLEFLOWER_OBJECT GA_RESOURCE_DIR"/Image/GameObject/yellowTriangleFlower.png"

#define RAINBOWBALL_OBJECT_LINK GA_RESOURCE_DIR"/Image/GameObject/rainbowBall.png"
#define LEVEL_ONE_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelOne.png"
#define LEVEL_TWO_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelTwo.png"
#define LEVEL_THREE_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelThree.png"
#define LEVEL_FOUR_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelFour.png"
#define LEVEL_FIVE_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelFive.png"
#define LEVEL_SIX_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelSix.png"
#define LEVEL_SEVEN_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelSeven.png"
#define LEVEL_EIGHT_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelEight.png"
#define LEVEL_NINE_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelNine.png"
#define LEVEL_TEN_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelTen.png"
#define LEVEL_ELEVEN_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelEleven.png"
#define LEVEL_TWELVE_IMAGE GA_RESOURCE_DIR"/Image/GameObject/levelTwelve.png"

#define LEVEL_ONE_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearOne.png"
#define LEVEL_TWO_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearTwo.png"
#define LEVEL_THREE_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearThree.png"
#define LEVEL_FOUR_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearFour.png"
#define LEVEL_FIVE_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearFive.png"
#define LEVEL_SIX_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearSix.png"
#define LEVEL_SEVEN_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearSeven.png"
#define LEVEL_EIGHT_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearEight.png"
#define LEVEL_NINE_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearNine.png"
#define LEVEL_TEN_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearTen.png"
#define LEVEL_ELEVEN_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearEleven.png"
#define LEVEL_TWELVE_CLEAR GA_RESOURCE_DIR"/Image/GameObject/levelClearTwelve.png"

#define LEVEL_ONE_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentOne.png"
#define LEVEL_TWO_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentTwo.png"
#define LEVEL_THREE_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentThree.png"
#define LEVEL_FOUR_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentFour.png"
#define LEVEL_FIVE_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentFive.png"
#define LEVEL_SIX_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentSix.png"
#define LEVEL_SEVEN_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentSeven.png"
#define LEVEL_EIGHT_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentEight.png"
#define LEVEL_NINE_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentNine.png"
#define LEVEL_TEN_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentTen.png"
#define LEVEL_ELEVEN_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentEleven.png"
#define LEVEL_TWELVE_CURRENT GA_RESOURCE_DIR"/Image/GameObject/levelCurrentTwelve.png"




#include <glm/vec2.hpp> 
#include <stack>
#include <memory>
#include <string>
#include "ObjectInformation.hpp"

extern glm::vec2 stage_position[13];
extern glm::vec2 stage_goal_position[13];


extern glm::vec2 stage1_position[38];
extern int stage1_neibor[38][6];
extern Objectinformation stage1[38];

extern glm::vec2 stage2_position[46];
extern int stage2_neibor[46][6];
extern Objectinformation stage2[46];

extern glm::vec2 stage3_position[48];
extern int stage3_neibor[48][6];
extern Objectinformation stage3[48];

extern glm::vec2 stage4_position[65];
extern int stage4_neibor[65][6];
extern Objectinformation stage4[65];

extern glm::vec2 stage5_position[40];
extern int stage5_neibor[40][6];
extern Objectinformation stage5[40];

extern glm::vec2 stage6_position[73];
extern int stage6_neibor[73][6];
extern Objectinformation stage6[73];

extern glm::vec2 stage7_position[61];
extern int stage7_neibor[61][6];
extern Objectinformation stage7[61];

extern std::string ClearStageList[13];
extern std::string LevelStageList[13];
extern std::string CurrentStageList[13];

extern int is_click;
extern glm::vec2 point_position[13];
extern int stage_point_goal[13];
extern char stage_goal_type[13][30];
extern int stage_point_counter[13];
extern int stage_goal_counter[13];
extern int stage_moves[13];
extern bool ifClear[13];

void InitializeStage1();
void InitializeStage2();
void InitializeStage3();
void InitializeStage4();
void InitializeStage5();
void InitializeStage6();
void InitializeStage7();

enum GamePhase {
    PHASE_NORMAL,
    PHASE_PAUSE_FOR_DISAPPEAR,
    PHASE_DROPPING
};

extern GamePhase currentPhase;

#include <chrono>
extern std::chrono::steady_clock::time_point startTime;

#endif // GLOBAL_HPP
