/*
    Copyright (c) 2007 Cyrus Daboo. All rights reserved.
    
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/


// Header for CSimpleTitleTable class

#ifndef __CSIMPLETITLETABLE__MULBERRY__
#define __CSIMPLETITLETABLE__MULBERRY__

#include "CTitleTable.h"

// Classes
class CSimpleTitleTable : public CTitleTable
{
public:
					CSimpleTitleTable();
	virtual 		~CSimpleTitleTable();

	void LoadTitles(const char* rsrcid, UINT count, bool clear_existing = false);
	void AddTitle(const cdstring& title);
	void ChangeTitle(TableIndexT col, const cdstring& title);

protected:
	// message handlers
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

	DECLARE_MESSAGE_MAP()
};

#endif