#include <cppLibraries/logger.h>

int main() {
    cppLibraries::Logger logger("/tmp/logTest");
    logger.LogError("Error");
    logger.LogWarning("Warning");
    logger.LogInfo("Info");
}
