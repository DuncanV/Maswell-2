/**
 *  @file ConcreteBigBrother.h
 *  @class ConcreteBigBrother
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete visitor class in visitor pattern
 */

#ifndef PROJECT_CONCRETEBIGBROTHER_H
#define PROJECT_CONCRETEBIGBROTHER_H

#include "BigBrother.h"

class ConcreteBigBrother: public BigBrother{
public:
    /**
    * virtual visit that visits Left Eighth object
    * @param leftEighth
    */
    virtual void visit(LeftEighth* leftEighth)
    {
        leftEighth->addTime();
    }
    /**
    * virtual visit that visits rightEighth object
    * @param rightEighth
    */
    virtual void visit(RightEighth* rightEighth)
    {
        rightEighth->addTime();
    }
    /**
    * virtual visit that visits leftPeelOff object
    * @param leftPeelOff
    */
    virtual void visit(LeftPeelOff* leftPeelOff)
    {
        leftPeelOff->addTime();
    }
    /**
    * virtual visit that visits rightPeelOff object
    * @param rightPeelOff
    */
    virtual void visit(RightPeelOff* rightPeelOff)
    {
        rightPeelOff->addTime();
    }
    /**
    * virtual visit that visits leftPeelOn object
    * @param leftPeelOn
    */
    virtual void visit(LeftPeelOn* leftPeelOn)
    {
        leftPeelOn->addTime();
    }
    /**
    * virtual visit that visits rightPeelOn object
    * @param rightPeelOn
    */
    virtual void visit(RightPeelOn* rightPeelOn)
    {
        rightPeelOn->addTime();
    }
    /**
    * virtual visit that visits straight object
    * @param straight
    */
    virtual void visit(Straight* straight)
    {
        straight->addTime();
    }
private:

};
#endif //PROJECT_CONCRETEBIGBROTHER_H
