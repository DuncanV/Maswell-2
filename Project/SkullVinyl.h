/**
 *  @file SkullVinyl.h
 *  @class SkullVinyl
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_SKULLVINYL_H
#define PROJECT_SKULLVINYL_H
#include "PimpMyRide.h"

class SkullVinyl: public PimpMyRide
{
public:
    /**
     * constructor to set description
     */
    SkullVinyl():PimpMyRide()
    {
        setDescription("Skull Vinyls!\n");
    }
    /**
    * destructor to delete the vinyl
    */
    ~SkullVinyl(){};
};
#endif //PROJECT_SKULLVINYL_H
