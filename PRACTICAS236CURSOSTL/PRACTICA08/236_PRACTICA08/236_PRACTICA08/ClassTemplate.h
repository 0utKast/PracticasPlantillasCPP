#pragma once

template <typename T>
class ClassTemplate {
public:
	ClassTemplate(T value) : m_value(value) {}

	T getValue() const;

private:
	T m_value;
};