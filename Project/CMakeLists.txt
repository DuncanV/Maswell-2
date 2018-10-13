cmake_minimum_required(VERSION 3.10)
project(Project)

set(CMAKE_CXX_STANDARD 11)

add_executable(Project main.cpp CarFactory.h Car.cpp Car.h ElectricCar.cpp ElectricCar.h SportsCar.cpp SportsCar.h StandardCar.cpp StandardCar.h ElectricGokart.h StandardGoKart.h SportsGoKart.h ElectricRoadster.h SportsRoadster.h StandardRoadster.h ElectricFormulaOne.h SportsFormulaOne.h StandardFormulaOne.h GoKartFactory.h RoadsterFactory.h ForumlaOneFactory.h PimpMyRide.h FlameVinyl.h SkullVinyl.h Slick.h Nitro.h Spoiler.h RegistrationManager.h ConcreteRegistrationManager.cpp ConcreteRegistrationManager.h RaceTrackComponent.h RaceTrack.h Straight.h LeftEighth.h RightEighth.h LeftPeelOn.h LeftPeelOff.h RightPeelOn.h RightPeelOff.h PitStopDecorator.h StartDecorator.h FinishDecorator.h SandPitsDecorator.h RaceTrackComponent.cpp RaceTrack.cpp PimpMyTrack.h)