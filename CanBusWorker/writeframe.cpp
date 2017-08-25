#include "writeframe.h"

writeFrame::writeFrame(CanBusWorkerDB *database) :
    dbPtr(database)
{
    anAck("Construct A New State");
}

void writeFrame::onEntry(QEvent *)
{
    anAck("Enter State ...");
    if (!(dbPtr->pendingFrameList->isEmpty()))
    {
        dbPtr->lastFrameTransmitted = dbPtr->pendingFrameList->takeFirst();
        dbPtr->currentDev->writeFrame(*(dbPtr->lastFrameTransmitted));
    }
}
