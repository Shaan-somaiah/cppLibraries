#include <cppLibraries/logger.h>

int main() {
    LOGGER logger("/tmp/logTest");
    logger.LogError("Error");
    logger.LogWarning("Warning");
    logger.LogInfo("Info");
}
