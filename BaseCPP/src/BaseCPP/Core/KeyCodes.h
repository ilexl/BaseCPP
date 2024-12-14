#pragma once

namespace BaseCPP
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space               = 32,
		Apostrophe          = 39, /* ' */
		Comma               = 44, /* , */
		Minus               = 45, /* - */
		Period              = 46, /* . */
		Slash               = 47, /* / */

		D0                  = 48, /* 0 */
		D1                  = 49, /* 1 */
		D2                  = 50, /* 2 */
		D3                  = 51, /* 3 */
		D4                  = 52, /* 4 */
		D5                  = 53, /* 5 */
		D6                  = 54, /* 6 */
		D7                  = 55, /* 7 */
		D8                  = 56, /* 8 */
		D9                  = 57, /* 9 */

		Semicolon           = 59, /* ; */
		Equal               = 61, /* = */

		A                   = 65,
		B                   = 66,
		C                   = 67,
		D                   = 68,
		E                   = 69,
		F                   = 70,
		G                   = 71,
		H                   = 72,
		I                   = 73,
		J                   = 74,
		K                   = 75,
		L                   = 76,
		M                   = 77,
		N                   = 78,
		O                   = 79,
		P                   = 80,
		Q                   = 81,
		R                   = 82,
		S                   = 83,
		T                   = 84,
		U                   = 85,
		V                   = 86,
		W                   = 87,
		X                   = 88,
		Y                   = 89,
		Z                   = 90,

		LeftBracket         = 91,  /* [ */
		Backslash           = 92,  /* \ */
		RightBracket        = 93,  /* ] */
		GraveAccent         = 96,  /* ` */

		World1              = 161, /* non-US #1 */
		World2              = 162, /* non-US #2 */

		/* Function keys */
		Escape              = 256,
		Enter               = 257,
		Tab                 = 258,
		Backspace           = 259,
		Insert              = 260,
		Delete              = 261,
		Right               = 262,
		Left                = 263,
		Down                = 264,
		Up                  = 265,
		PageUp              = 266,
		PageDown            = 267,
		Home                = 268,
		End                 = 269,
		CapsLock            = 280,
		ScrollLock          = 281,
		NumLock             = 282,
		PrintScreen         = 283,
		Pause               = 284,
		F1                  = 290,
		F2                  = 291,
		F3                  = 292,
		F4                  = 293,
		F5                  = 294,
		F6                  = 295,
		F7                  = 296,
		F8                  = 297,
		F9                  = 298,
		F10                 = 299,
		F11                 = 300,
		F12                 = 301,
		F13                 = 302,
		F14                 = 303,
		F15                 = 304,
		F16                 = 305,
		F17                 = 306,
		F18                 = 307,
		F19                 = 308,
		F20                 = 309,
		F21                 = 310,
		F22                 = 311,
		F23                 = 312,
		F24                 = 313,
		F25                 = 314,

		/* Keypad */
		KP0                 = 320,
		KP1                 = 321,
		KP2                 = 322,
		KP3                 = 323,
		KP4                 = 324,
		KP5                 = 325,
		KP6                 = 326,
		KP7                 = 327,
		KP8                 = 328,
		KP9                 = 329,
		KPDecimal           = 330,
		KPDivide            = 331,
		KPMultiply          = 332,
		KPSubtract          = 333,
		KPAdd               = 334,
		KPEnter             = 335,
		KPEqual             = 336,

		LeftShift           = 340,
		LeftControl         = 341,
		LeftAlt             = 342,
		LeftSuper           = 343,
		RightShift          = 344,
		RightControl        = 345,
		RightAlt            = 346,
		RightSuper          = 347,
		Menu                = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define BC_KEY_SPACE           ::BaseCPP::Key::Space
#define BC_KEY_APOSTROPHE      ::BaseCPP::Key::Apostrophe    /* ' */
#define BC_KEY_COMMA           ::BaseCPP::Key::Comma         /* , */
#define BC_KEY_MINUS           ::BaseCPP::Key::Minus         /* - */
#define BC_KEY_PERIOD          ::BaseCPP::Key::Period        /* . */
#define BC_KEY_SLASH           ::BaseCPP::Key::Slash         /* / */
#define BC_KEY_0               ::BaseCPP::Key::D0
#define BC_KEY_1               ::BaseCPP::Key::D1
#define BC_KEY_2               ::BaseCPP::Key::D2
#define BC_KEY_3               ::BaseCPP::Key::D3
#define BC_KEY_4               ::BaseCPP::Key::D4
#define BC_KEY_5               ::BaseCPP::Key::D5
#define BC_KEY_6               ::BaseCPP::Key::D6
#define BC_KEY_7               ::BaseCPP::Key::D7
#define BC_KEY_8               ::BaseCPP::Key::D8
#define BC_KEY_9               ::BaseCPP::Key::D9
#define BC_KEY_SEMICOLON       ::BaseCPP::Key::Semicolon     /* ; */
#define BC_KEY_EQUAL           ::BaseCPP::Key::Equal         /* = */
#define BC_KEY_A               ::BaseCPP::Key::A
#define BC_KEY_B               ::BaseCPP::Key::B
#define BC_KEY_C               ::BaseCPP::Key::C
#define BC_KEY_D               ::BaseCPP::Key::D
#define BC_KEY_E               ::BaseCPP::Key::E
#define BC_KEY_F               ::BaseCPP::Key::F
#define BC_KEY_G               ::BaseCPP::Key::G
#define BC_KEY_H               ::BaseCPP::Key::H
#define BC_KEY_I               ::BaseCPP::Key::I
#define BC_KEY_J               ::BaseCPP::Key::J
#define BC_KEY_K               ::BaseCPP::Key::K
#define BC_KEY_L               ::BaseCPP::Key::L
#define BC_KEY_M               ::BaseCPP::Key::M
#define BC_KEY_N               ::BaseCPP::Key::N
#define BC_KEY_O               ::BaseCPP::Key::O
#define BC_KEY_P               ::BaseCPP::Key::P
#define BC_KEY_Q               ::BaseCPP::Key::Q
#define BC_KEY_R               ::BaseCPP::Key::R
#define BC_KEY_S               ::BaseCPP::Key::S
#define BC_KEY_T               ::BaseCPP::Key::T
#define BC_KEY_U               ::BaseCPP::Key::U
#define BC_KEY_V               ::BaseCPP::Key::V
#define BC_KEY_W               ::BaseCPP::Key::W
#define BC_KEY_X               ::BaseCPP::Key::X
#define BC_KEY_Y               ::BaseCPP::Key::Y
#define BC_KEY_Z               ::BaseCPP::Key::Z
#define BC_KEY_LEFT_BRACKET    ::BaseCPP::Key::LeftBracket   /* [ */
#define BC_KEY_BACKSLASH       ::BaseCPP::Key::Backslash     /* \ */
#define BC_KEY_RIGHT_BRACKET   ::BaseCPP::Key::RightBracket  /* ] */
#define BC_KEY_GRAVE_ACCENT    ::BaseCPP::Key::GraveAccent   /* ` */
#define BC_KEY_WORLD_1         ::BaseCPP::Key::World1        /* non-US #1 */
#define BC_KEY_WORLD_2         ::BaseCPP::Key::World2        /* non-US #2 */

/* Function keys */
#define BC_KEY_ESCAPE          ::BaseCPP::Key::Escape
#define BC_KEY_ENTER           ::BaseCPP::Key::Enter
#define BC_KEY_TAB             ::BaseCPP::Key::Tab
#define BC_KEY_BACKSPACE       ::BaseCPP::Key::Backspace
#define BC_KEY_INSERT          ::BaseCPP::Key::Insert
#define BC_KEY_DELETE          ::BaseCPP::Key::Delete
#define BC_KEY_RIGHT           ::BaseCPP::Key::Right
#define BC_KEY_LEFT            ::BaseCPP::Key::Left
#define BC_KEY_DOWN            ::BaseCPP::Key::Down
#define BC_KEY_UP              ::BaseCPP::Key::Up
#define BC_KEY_PAGE_UP         ::BaseCPP::Key::PageUp
#define BC_KEY_PAGE_DOWN       ::BaseCPP::Key::PageDown
#define BC_KEY_HOME            ::BaseCPP::Key::Home
#define BC_KEY_END             ::BaseCPP::Key::End
#define BC_KEY_CAPS_LOCK       ::BaseCPP::Key::CapsLock
#define BC_KEY_SCROLL_LOCK     ::BaseCPP::Key::ScrollLock
#define BC_KEY_NUM_LOCK        ::BaseCPP::Key::NumLock
#define BC_KEY_PRINT_SCREEN    ::BaseCPP::Key::PrintScreen
#define BC_KEY_PAUSE           ::BaseCPP::Key::Pause
#define BC_KEY_F1              ::BaseCPP::Key::F1
#define BC_KEY_F2              ::BaseCPP::Key::F2
#define BC_KEY_F3              ::BaseCPP::Key::F3
#define BC_KEY_F4              ::BaseCPP::Key::F4
#define BC_KEY_F5              ::BaseCPP::Key::F5
#define BC_KEY_F6              ::BaseCPP::Key::F6
#define BC_KEY_F7              ::BaseCPP::Key::F7
#define BC_KEY_F8              ::BaseCPP::Key::F8
#define BC_KEY_F9              ::BaseCPP::Key::F9
#define BC_KEY_F10             ::BaseCPP::Key::F10
#define BC_KEY_F11             ::BaseCPP::Key::F11
#define BC_KEY_F12             ::BaseCPP::Key::F12
#define BC_KEY_F13             ::BaseCPP::Key::F13
#define BC_KEY_F14             ::BaseCPP::Key::F14
#define BC_KEY_F15             ::BaseCPP::Key::F15
#define BC_KEY_F16             ::BaseCPP::Key::F16
#define BC_KEY_F17             ::BaseCPP::Key::F17
#define BC_KEY_F18             ::BaseCPP::Key::F18
#define BC_KEY_F19             ::BaseCPP::Key::F19
#define BC_KEY_F20             ::BaseCPP::Key::F20
#define BC_KEY_F21             ::BaseCPP::Key::F21
#define BC_KEY_F22             ::BaseCPP::Key::F22
#define BC_KEY_F23             ::BaseCPP::Key::F23
#define BC_KEY_F24             ::BaseCPP::Key::F24
#define BC_KEY_F25             ::BaseCPP::Key::F25

/* Keypad */
#define BC_KEY_KP_0            ::BaseCPP::Key::KP0
#define BC_KEY_KP_1            ::BaseCPP::Key::KP1
#define BC_KEY_KP_2            ::BaseCPP::Key::KP2
#define BC_KEY_KP_3            ::BaseCPP::Key::KP3
#define BC_KEY_KP_4            ::BaseCPP::Key::KP4
#define BC_KEY_KP_5            ::BaseCPP::Key::KP5
#define BC_KEY_KP_6            ::BaseCPP::Key::KP6
#define BC_KEY_KP_7            ::BaseCPP::Key::KP7
#define BC_KEY_KP_8            ::BaseCPP::Key::KP8
#define BC_KEY_KP_9            ::BaseCPP::Key::KP9
#define BC_KEY_KP_DECIMAL      ::BaseCPP::Key::KPDecimal
#define BC_KEY_KP_DIVIDE       ::BaseCPP::Key::KPDivide
#define BC_KEY_KP_MULTIPLY     ::BaseCPP::Key::KPMultiply
#define BC_KEY_KP_SUBTRACT     ::BaseCPP::Key::KPSubtract
#define BC_KEY_KP_ADD          ::BaseCPP::Key::KPAdd
#define BC_KEY_KP_ENTER        ::BaseCPP::Key::KPEnter
#define BC_KEY_KP_EQUAL        ::BaseCPP::Key::KPEqual

#define BC_KEY_LEFT_SHIFT      ::BaseCPP::Key::LeftShift
#define BC_KEY_LEFT_CONTROL    ::BaseCPP::Key::LeftControl
#define BC_KEY_LEFT_ALT        ::BaseCPP::Key::LeftAlt
#define BC_KEY_LEFT_SUPER      ::BaseCPP::Key::LeftSuper
#define BC_KEY_RIGHT_SHIFT     ::BaseCPP::Key::RightShift
#define BC_KEY_RIGHT_CONTROL   ::BaseCPP::Key::RightControl
#define BC_KEY_RIGHT_ALT       ::BaseCPP::Key::RightAlt
#define BC_KEY_RIGHT_SUPER     ::BaseCPP::Key::RightSuper
#define BC_KEY_MENU            ::BaseCPP::Key::Menu
