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
	constexpr const static uint8_t TitleHeight = 32;

	const unsigned char Title[] PROGMEM =
	{
		TitleWidth, TitleHeight,
		0x0, 0x0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x0, 0x0, 0x0, 0x0, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xF9, 0xF1, 0xF1, 0xF9, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x1, 0x1D, 0x1D, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x1D, 0x1D, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xF1, 0xE1, 0xC1, 0x81, 0xFD, 0xFD, 0xFD, 0xFD, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x9D, 0x9D, 0x9D, 0x9D, 0x9D, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x9D, 0x9D, 0x9D, 0xBD, 0xBD, 0xBD, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x1, 0xF1, 0xF1, 0xF1, 0xF1, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x9D, 0x9D, 0x9D, 0x9D, 0x9D, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x9D, 0x9D, 0x9D, 0x9D, 0x9D, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x1D, 0x1D, 0xFD, 0xF9, 0xF1, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x9D, 0x9D, 0x9D, 0x9D, 0x9D, 0x1, 0xFD, 0xFD, 0xFD, 0xFD, 0x9D, 0x9D, 0xFD, 0xF9, 0xF1, 0x0, 0x0, 0x0, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x0, 0x70, 0x70, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x70, 0x70, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x1, 0x3, 0x7, 0xF, 0x1F, 0x7F, 0x7F, 0x7F, 0x7F, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x73, 0x73, 0x73, 0x73, 0x73, 0x0, 0x7B, 0x7B, 0x7B, 0x73, 0x73, 0x73, 0x7F, 0x7F, 0x7F, 0x7F, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x7C, 0x3F, 0x1F, 0x1F, 0x3F, 0x7C, 0x7F, 0x7F, 0x7F, 0x7F, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x73, 0x73, 0x73, 0x73, 0x73, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x73, 0x73, 0x73, 0x73, 0x73, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x7, 0x7, 0x7, 0x3, 0x1, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x73, 0x73, 0x73, 0x73, 0x73, 0x0, 0x7F, 0x7F, 0x7F, 0x7F, 0x3, 0x7F, 0x7F, 0x7F, 0x7C, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0x0, 0x0
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
