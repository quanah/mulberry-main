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

#ifndef H_CNewComponentPanel
#define H_CNewComponentPanel
#pragma once

#include "CTabPanel.h"

#include "CICalendarVEvent.h"
#include "CICalendarVToDo.h"

// ===========================================================================
//	CNewComponentPanel

class CNewComponentPanel : public CTabPanel
{
public:
	enum
	{
		eDurationPeriod_Days = 1,
		eDurationPeriod_Weeks
	};

					CNewComponentPanel(UINT nIDTemplate) :
						CTabPanel(nIDTemplate) { mReadOnly = false; }
	virtual			~CNewComponentPanel() {}

	virtual void	SetEvent(const iCal::CICalendarVEvent& vevent) {}
	virtual void	GetEvent(iCal::CICalendarVEvent& vevent) {}

	virtual void	SetToDo(const iCal::CICalendarVToDo& vtodo) {}
	virtual void	GetToDo(iCal::CICalendarVToDo& vtodo) {}

	virtual void	SetReadOnly(bool read_only) = 0;

	virtual void	SetContent(void* data) {}						// Set data
	virtual bool	UpdateContent(void* data) { return true; }		// Force update of data

protected:
	bool			mReadOnly;
};

typedef std::vector<CNewComponentPanel*> CNewComponentPanelList;

#endif