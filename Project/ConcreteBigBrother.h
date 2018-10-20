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
        int a=0;
    }
    virtual void visit(RightEighth* rightEighth)
    {
        int a=0;
    }
    virtual void visit(LeftPeelOff* leftPeelOff)
    {
        int a=0;
    }
    virtual void visit(RightPeelOff* rightPeelOff)
    {
        int a=0;
    }
    virtual void visit(LeftPeelOn* leftPeelOn)
    {
        int a=0;
    }
    virtual void visit(RightPeelOn* rightPeelOn)
    {
        int a=0;
    }
    virtual void visit(Straight* straight)
    {
        int a=0;
    }
private:

};
#endif //PROJECT_CONCRETEBIGBROTHER_H
