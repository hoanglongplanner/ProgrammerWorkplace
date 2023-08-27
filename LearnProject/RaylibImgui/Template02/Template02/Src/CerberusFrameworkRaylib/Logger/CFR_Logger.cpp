#include "CFR_Logger.h"

void CFR_Logger::Log_Trace(std::string arg_text) {
	std::cout << "CFR_LOG_TRACE: " + arg_text << std::endl;
}

void CFR_Logger::Log_Debug(std::string arg_text) {
	std::cout << "CFR_LOG_DEBUG: " + arg_text << std::endl;
}

void CFR_Logger::Log_Info(std::string arg_text) {
	std::cout << "CFR_LOG_INFO: " + arg_text << std::endl;
}

void CFR_Logger::Log_Warning(std::string arg_text) {
	std::cout << "CFR_LOG_WARNING: " + arg_text << std::endl;
}

void CFR_Logger::Log_Caution(std::string arg_text) {
	std::cout << "CFR_LOG_CAUTION: " + arg_text << std::endl;
}

void CFR_Logger::Log_Error(std::string arg_text) {
	std::cout << "CFR_LOG_ERROR: " + arg_text << std::endl;
}

void CFR_Logger::Log_Fatal(std::string arg_text) {
	std::cout << "CFR_LOG_FATAL: " + arg_text << std::endl;
}
