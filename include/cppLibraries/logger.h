#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>

class LOGGER{

    private:
        std::ofstream logFile;
        // only log to file if filepath is passed while constructing LOGGER object
        bool logToFile{false}; 

    public:
        LOGGER();
        LOGGER(const std::string& filePath);
        ~LOGGER();

        void LogInfo(const std::string& message);
        void LogWarning(const std::string& message);
        void LogError(const std::string& message);
};


#endif //LOGGER_H 