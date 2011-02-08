/*
 * P4.Net *
Copyright (c) 2007-2010 Shawn Hladky

Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
and associated documentation files (the "Software"), to deal in the Software without 
restriction, including without limitation the rights to use, copy, modify, merge, publish, 
distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the 
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or 
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
 */


#pragma once

#include "StdAfx.h"
#include "Error_m.h"
#include <vcclr.h>


using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

namespace p4dn {

    public ref class DiffEngine {

    public:
		DiffEngine();
		array<System::String^>^ RunDiff (IO::FileInfo^ f1, IO::FileInfo^ f2);
		//property System::String^ Flags
		//{
		//	System::String^ get()
		//	{
		//		return _flags;
		//	}
		//	set(System::String^ value)
		//	{
		//		_flags = value;
		//	}
		//};

	private:
		System::String^ _flags;
		System::Text::Encoding^ _encoding;
	};
}
