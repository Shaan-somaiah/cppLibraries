#include "cppLibraries/logger.h"

int main()
{
    LOGGER logger("/tmp/logTest");
    logger.LogError("Error detected");
    logger.LogWarning("Warning detected");
    logger.LogInfo("Info detected");
}