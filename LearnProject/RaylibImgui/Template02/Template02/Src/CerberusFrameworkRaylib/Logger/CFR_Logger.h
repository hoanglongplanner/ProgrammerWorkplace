#pragma once

#include <string>
#include <iostream>

class CFR_Logger {
public:
	static void Log_Trace(std::string arg_text);
	static void Log_Debug(std::string arg_text);
	static void Log_Info(std::string arg_text);
	static void Log_Warning(std::string arg_text);
	static void Log_Caution(std::string arg_text);
	static void Log_Error(std::string arg_text);
	static void Log_Fatal(std::string arg_text);
};

