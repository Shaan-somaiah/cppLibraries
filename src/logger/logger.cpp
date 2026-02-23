#include "cppLibraries/logger.h"
#include <string>
#include <iostream>

namespace cppLibraries {
    Logger::Logger() = default;

    Logger::Logger(const std::string& filePath) : logFile(filePath){
        logToFile = true;
        if(!logFile){
            std::cout << "Unable to open log file!";
        }
    }

    Logger::~Logger(){
        if(logFile.is_open()){
            logFile.close();    
        }
    }

    void Logger::LogInfo(const std::string& message) {
        if(logToFile){
            logFile << "[INFO] " << message << "\n";
        }
        std::cout << "[INFO] " << message << "\n";
    }

    void Logger::LogWarning(const std::string& message) {
        if(logToFile){
            logFile << "[WARN] " << message << "\n";
        }
        std::cout << "[WARN] " << message << "\n";
    }

    void Logger::LogError(const std::string& message) {
        if(logToFile){
            logFile << "[ERRO] " << message << "\n";
        }
        std::cout << "[ERRO] " << message << "\n";
    }
} // namespace cppLibraries