#pragma once
#include "stdafx.h"
#include "..\Blam\Shared\SharedDefinitions.h"
#include "..\Blam\Maths\Maths.h"
namespace Blam
{
	namespace EngineDefinitions
	{
		namespace Objects
		{
			//0xC4
			struct ObjectPlacementData //To Do
			{
				Blam::SharedDefinitions::DatumIndex DatumIndex;//0
				DWORD unk_0;//0x4
				WORD unk_10;//0x8;
				BYTE unk_11;//0xA
				BYTE unk_12;//0xB
				DWORD unk_13;//0xC
				DWORD unk_14;//0x10
				BYTE unk_15;//0x14
				BYTE unk_16;//0x15
				WORD unk_17;//0x16
				DWORD unk_18;//0x18
				Blam::Maths::RealPoint3D Placement;//0x1C
				Blam::Maths::RealVector3D Orientation;//0x28
				Blam::Maths::RealVector3D Up;//0x34
				Blam::Maths::RealPoint3D TranslationalVelocity;//0x40
				Blam::Maths::RealVector3D AngularVelocity;//0x4C
				FLOAT Scale;//0x58
				DWORD unk_2[5];//0x5C
				WORD unk_3;//0x70
				WORD unk_4;//0x72
				DWORD unk_5[0xF];//0x74
				WORD unk_20;//0xB0
				WORD unk_21;//0xB2
				WORD unk_6;//0xB4
				WORD unk_7;//0xB6
				BYTE unk_19;//0xB8
				BYTE unk_22;//0xB9
				WORD unk_23;//0xBA
				CHAR unk_24;//0xBC
				BYTE unk_25[3];//0xBD
				DWORD unk_26;//0xC0
				DWORD unk_9;//0xC4				
			};
		}
	}
}
