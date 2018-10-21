//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_CONCRETEBIGBROTHER_H
#define PROJECT_CONCRETEBIGBROTHER_H

#include "BigBrother.h"

class ConcreteBigBrother: public BigBrother{
public:
    virtual void visit(LeftEighth* leftEighth)
    {
        leftEighth->addTime();
    }
    virtual void visit(RightEighth* rightEighth)
    {
        rightEighth->addTime();
    }
    virtual void visit(LeftPeelOff* leftPeelOff)
    {
        leftPeelOff->addTime();
    }
    virtual void visit(RightPeelOff* rightPeelOff)
    {
        rightPeelOff->addTime();
    }
    virtual void visit(LeftPeelOn* leftPeelOn)
    {
        leftPeelOn->addTime();
    }
    virtual void visit(RightPeelOn* rightPeelOn)
    {
        rightPeelOn->addTime();
    }
    virtual void visit(Straight* straight)
    {
        straight->addTime();
    }
private:

};
#endif //PROJECT_CONCRETEBIGBROTHER_H
