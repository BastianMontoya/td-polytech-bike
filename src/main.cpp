#include "Road.h"
#include "Bike.h"

int main()
{
    Road road(20);
    //road.show();
    Bike bike;

    Road longRoad(40);
    bike.run(longRoad);
    return 0;
}
