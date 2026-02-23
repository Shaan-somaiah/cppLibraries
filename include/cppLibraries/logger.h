#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>

namespace cppLibraries {
    class Logger{

        private:
            std::ofstream logFile;
            // only log to file if filepath is passed while constructing LOGGER object
            bool logToFile{false}; 

        public:
            Logger();
            Logger(const std::string& filePath);
            ~Logger();

            void LogInfo(const std::string& message);
            void LogWarning(const std::string& message);
            void LogError(const std::string& message);
    };
} // namespace cppLibraries

#endif //LOGGER_H
