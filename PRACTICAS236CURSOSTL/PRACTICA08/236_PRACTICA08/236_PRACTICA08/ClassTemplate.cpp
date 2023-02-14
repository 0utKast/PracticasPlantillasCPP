#include "ClassTemplate.h"

template <typename T>
T ClassTemplate<T>::getValue() const {
	return m_value;
}