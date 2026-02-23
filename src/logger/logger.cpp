#include "cppLibraries/logger.h"
#include <string>
#include <iostream>

LOGGER::LOGGER() = default;

LOGGER::LOGGER(const std::string& filePath) : logFile(filePath){
    logToFile = true;
    if(!logFile){
        std::cout << "Unable to open log file!";
    }
}

LOGGER::~LOGGER(){
    if(logFile.is_open()){
        logFile.close();    
    }
}

void LOGGER::LogInfo(const std::string& message) {
    if(logToFile){
        logFile << "[INFO] " << message << "\n";
    }
    std::cout << "[INFO] " << message << "\n";
}

void LOGGER::LogWarning(const std::string& message) {
    if(logToFile){
        logFile << "[WARN] " << message << "\n";
    }
    std::cout << "[WARN] " << message << "\n";
}

void LOGGER::LogError(const std::string& message) {
    if(logToFile){
        logFile << "[ERRO] " << message << "\n";
    }
    std::cout << "[ERRO] " << message << "\n";
}

