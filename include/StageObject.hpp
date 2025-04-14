#pragma once

#include "GameCharacter.hpp"
#include "ObjectInformation.hpp"
#include "TaskText.hpp"
#include "Util/GameObject.hpp"
#include <vector>
#include <mutex>
#include <condition_variable>

class StageObject : public Util::GameObject {
public:
    StageObject(int size )
        : m_Size(size) {
        }

    const std::vector<std::shared_ptr<GameCharacter>>& GetStageObject() const {
        return m_Stage_Object;
    }

    std::shared_ptr<GameCharacter> GetStageObjectItem( int i ) {
        return m_Stage_Object.at(i);
    }

    void PushBackObject( std::shared_ptr<GameCharacter> obj ) {
        this->m_Stage_Object.push_back( obj );
    }

    void ClearAll() {
        this->m_Stage_Object.clear();
    }

    void Pop() {
        this->m_Stage_Object.pop_back();
    }

    bool ifEmpty() { return this->m_Stage_Object.empty(); }

    int GetStage() const {
        return m_Stage;
    }

    int GetSize() const {
        return m_Size;
    }

    std::shared_ptr<GameCharacter>  GetStageGoalObject() {
        return this->m_Stage_Goal_Object_Show;
    }

    void SetStage(int stage) {
        m_Stage = stage;
    }

    void SetStageGoalObject( std::shared_ptr<GameCharacter> Stage_Goal_Object ) {
        this->m_Stage_Goal_Object_Show = Stage_Goal_Object;
    }

    virtual ~StageObject() = default;

    void SetUp(int stage);
    void InitializeStageCharacter(int s);
    bool CheckAppearance(int s, int now_stage, bool ifShuffle);
    void CheckSpecialObject(int i);
    void MakeDisappear();
    void Dropping(int s, int now_stage, bool ifShuffle);
    void CheckObstaclesDisappear(bool ifShuffle);
    void MakeObstaclesDisappear(int position);
    void PointUpdate(int point);
    int GetPoint();
    void GoalUpdate(int i);
    void AppearAll();
    void DisAppearAll();
    void ClearAllClick();
    bool IsSameColor(int blockType1, int blockType2);
    void CheckClickSwitch(int check, int i, std::shared_ptr<TaskText> point);

protected:
    int m_Stage;
    int m_Size;
    std::vector<std::shared_ptr<GameCharacter>> m_Stage_Object;
    std::shared_ptr<GameCharacter> m_Stage_Goal_Object_Show;

    void RandomChangeObject(int current_pos);
    void ShuffleStageCharacter( int s );
    
    void MakeDisappearWithObject(int current_pos);
    void MakeDisappearWithStripe(int current_pos);
    void MakeDisappearWithRainbow(int current_pos);
    void MakeDisappearWithFlower(int current_pos);
    void MakeDisappearWithStarFlower(int current_pos);
    void MakeDisappearWithTriangleFlower(int current_pos);
    void MakeDisappearWithStripeInLeftRight(int current_pos);
    void MakeDisappearWithStripeInRightLeft(int current_pos);
    void MakeDisappearWithFlowerCombined(int current_pos);
    void MakeDisappearWithStripeFlower(int current_pos);
    void MakeDisappearWithStripeCombined(int current_pos);

    bool DisappearMethodOfOneLine(int current_pos, int* total_length);
    int DisappearMethodOfStripe(int current_pos, int* total_length, int priority);
    bool DisappearMethodOfFlower(int current_pos, int* total_length);
    bool DisappearMethodOfStarFlower(int current_pos, int* total_length);
    bool DisappearMethodOfTriangleFlower(int current_pos, int* total_length);
    bool DisappearMethodOfRainbowBall(int current_pos, int* total_length, int priority);
    void DisappearBySingleObject(int current_pos, int side, int length_left);

    std::pair<int, int> CheckShuffleDemands();
    bool CheckLineMaking();
    std::pair<int, int> CheckRainbowUsing();
    std::pair<int, int> CheckSpecialBlocksNeighbor();

    void Dropping_method(const int current_position);
    bool checkAppearanceOfObject(int i, int side, int length_left);
    bool checkSwitchedAllInfoWithZero(int i, int side, int length_left);
    int CheckNextAppearance(int i, int side, int length);
};
