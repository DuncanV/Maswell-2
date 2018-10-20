//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_BIGBROTHER_H
#define PROJECT_BIGBROTHER_H

#include "LeftPeelOff.h"
#include "LeftPeelOn.h"
#include "RightPeelOn.h"
#include "RightPeelOff.h"
#include "RightEighth.h"
#include "LeftEighth.h"
#include "Straight.h"
class BigBrother
{
public:
    virtual void visit(LeftEighth* leftEighth)=0;
    virtual void visit(RightEighth* rightEighth)=0;
    virtual void visit(LeftPeelOff* leftPeelOff)=0;
    virtual void visit(RightPeelOff* rightPeelOff)=0;
    virtual void visit(LeftPeelOn* leftPeelOn)=0;
    virtual void visit(RightPeelOn* rightPeelOn)=0;
    virtual void visit(Straight* straight)=0;
private:
};
#endif //PROJECT_BIGBROTHER_H
