#pragma once

namespace BaseCPP
{
	typedef enum class MouseCode : uint16_t
	{
		// From glfw3.h
		Button0                = 0,
		Button1                = 1,
		Button2                = 2,
		Button3                = 3,
		Button4                = 4,
		Button5                = 5,
		Button6                = 6,
		Button7                = 7,

		ButtonLast             = Button7,
		ButtonLeft             = Button0,
		ButtonRight            = Button1,
		ButtonMiddle           = Button2
	} Mouse;
	
	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}
}

#define BC_MOUSE_BUTTON_0      ::BaseCPP::Mouse::Button0
#define BC_MOUSE_BUTTON_1      ::BaseCPP::Mouse::Button1
#define BC_MOUSE_BUTTON_2      ::BaseCPP::Mouse::Button2
#define BC_MOUSE_BUTTON_3      ::BaseCPP::Mouse::Button3
#define BC_MOUSE_BUTTON_4      ::BaseCPP::Mouse::Button4
#define BC_MOUSE_BUTTON_5      ::BaseCPP::Mouse::Button5
#define BC_MOUSE_BUTTON_6      ::BaseCPP::Mouse::Button6
#define BC_MOUSE_BUTTON_7      ::BaseCPP::Mouse::Button7
#define BC_MOUSE_BUTTON_LAST   ::BaseCPP::Mouse::ButtonLast
#define BC_MOUSE_BUTTON_LEFT   ::BaseCPP::Mouse::ButtonLeft
#define BC_MOUSE_BUTTON_RIGHT  ::BaseCPP::Mouse::ButtonRight
#define BC_MOUSE_BUTTON_MIDDLE ::BaseCPP::Mouse::ButtonMiddle
