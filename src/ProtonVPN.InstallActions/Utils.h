#pragma once

#include <msi.h>
#include <string>

void SetMsiHandle(MSIHANDLE msiHandle);
void LogMessage(const std::wstring& message, int result);
void LogMessage(std::wstring message);
std::wstring GetProperty(std::wstring name);
