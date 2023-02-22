#pragma once

#include <string>

template <typename T>
T DefaultValue = T{ 0 };

template <>
std::string DefaultValue<std::string> = "default";

template <>
bool DefaultValue<bool> = false;
