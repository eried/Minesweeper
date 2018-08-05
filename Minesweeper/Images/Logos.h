#pragma once

//
// Copyright (C) 2018 Pharap (@Pharap)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

namespace Images
{
	constexpr const static uint8_t TitleWidth = 128;
	constexpr const static uint8_t TitleHeight = 25;

	const unsigned char Title[] PROGMEM =
	{
		TitleWidth, TitleHeight,
		0x00, 0x00, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x9E, 0x1E, 0x1E, 0x9E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0x1E, 0x1E, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x9E, 0x1E, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x1E, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0xDE, 0x9E, 0x1E, 0x00, 0x00, 
		0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x3F, 0x7E, 0xFC, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x39, 0x39, 0x39, 0x39, 0x00, 0xBF, 0xBF, 0xBF, 0x3F, 0x39, 0x39, 0xF9, 0xFB, 0xFB, 0xFB, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x39, 0x39, 0x39, 0x39, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x39, 0x39, 0x39, 0x39, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0x71, 0x7F, 0x3F, 0x1F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x39, 0x39, 0x39, 0x39, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0xF9, 0xFF, 0xFF, 0xCF, 0x00, 0x00, 
		0x00, 0x00, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF0, 0xF0, 0xF0, 0xF1, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF3, 0xF1, 0xF1, 0xF3, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0xF0, 0xF7, 0xF7, 0xF7, 0xF7, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	};

	constexpr const static uint8_t PharapLogoWidth = 48;
	constexpr const static uint8_t PharapLogoHeight = 48;

	const unsigned char PharapLogo[] PROGMEM =
	{
		PharapLogoWidth, PharapLogoHeight,
		0x24, 0x4C, 0xFF, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0x7D, 0x7C, 0x3E, 0x3D, 0x3C, 0x3E, 0x3D, 0x3C, 0x3E, 0x3D, 0x7C, 0x7E, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFF, 0x24, 0x4C, 0x49, 0x92, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x8F, 0xE7, 0xF3, 0xF9, 0x7C, 0x7C, 0x7E, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x7E, 0x7C, 0x7C, 0xF9, 0xF3, 0xE7, 0x8F, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x49, 0x92, 0x92, 0x24, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1, 0x0, 0xFE, 0xFF, 0xFF, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xFF, 0xFF, 0xFF, 0xFF, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xFF, 0xFF, 0xFE, 0x0, 0x1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x92, 0x24, 0x24, 0x49, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xE1, 0xC7, 0x9F, 0x3E, 0x7C, 0xF8, 0xF8, 0xF8, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF8, 0xF8, 0xF8, 0x7C, 0x3E, 0x9F, 0xC7, 0xE1, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x24, 0x49, 0x49, 0x92, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0x0, 0x1, 0x7F, 0x7F, 0x3, 0x3, 0x7F, 0x7F, 0x3, 0x3, 0x7F, 0x7F, 0x1, 0x0, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x49, 0x92, 0x32, 0x24, 0xFF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7E, 0x3E, 0xBE, 0x7E, 0x3E, 0xBE, 0x7E, 0x3E, 0xBE, 0x7E, 0x3E, 0xBE, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0xFF, 0x32, 0x24
	};

	constexpr const static uint8_t ArrowWidth = 8;
	constexpr const static uint8_t ArrowHeight = 8;

	uint8_t const Arrows[] PROGMEM =
	{
		// Dimensions
		ArrowWidth, ArrowHeight,

		// Frame 0
		0x00, 0x08, 0x0C, 0x7E, 0x7E, 0x0C, 0x08, 0x00,
		// Frame 1 - ArrowDown
		0x00, 0x10, 0x30, 0x7E, 0x7E, 0x30, 0x10, 0x00,
	};

}
