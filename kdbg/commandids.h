// $Id$

// Copyright by Johannes Sixt
// This file is under GPL, the GNU General Public Licence

#ifndef COMMANDIDS_H
#define COMMANDIDS_H

#define ID_FILE_OPEN 1
#define ID_FILE_RELOAD 2
#define ID_FILE_SAVE 3
#define ID_FILE_SAVEAS 4
#define ID_FILE_SAVE_URL 5
#define ID_FILE_CLOSE 6
#define ID_FILE_EXECUTABLE 7
#define ID_FILE_QUIT 8
#define ID_FILE_COREFILE 9
#define ID_FILE_GLOBAL_OPTIONS 10

#define ID_PROGRAM_RUN 20
#define ID_PROGRAM_STEP 21
#define ID_PROGRAM_NEXT 22
#define ID_PROGRAM_FINISH 23
#define ID_PROGRAM_UNTIL 24
#define ID_PROGRAM_BREAK 25
#define ID_PROGRAM_ARGS 26
#define ID_PROGRAM_RUN_AGAIN 27
#define ID_PROGRAM_ATTACH 28
#define ID_PROGRAM_DETACH 29

#define ID_BRKPT_SET 30
#define ID_BRKPT_TEMP 31
#define ID_BRKPT_ENABLE 32
#define ID_BRKPT_LIST 35

#define ID_EDIT_COPY 50
#define ID_EDIT_PASTE 51
#define ID_EDIT_CUT 52
#define ID_EDIT_SEARCH 53
#define ID_EDIT_SEARCHAGAIN 54

#define ID_VIEW_TOOLBAR 60
#define ID_VIEW_STATUSBAR 61
#define ID_VIEW_FINDDLG 62

#define ID_HELP_ABOUT 100
#define ID_HELP_HELP  101

// 0x101..0x10f are window menu entries
#define ID_WINDOW_MORE 0x100
#define ID_WINDOW_INDEX_MASK 0xf

// statusbar ids
#define ID_STATUS_MSG 191
#define ID_STATUS_BUSY 192
#define ID_STATUS_ACTIVE 193
#define ID_STATUS_LINENO 194
#endif // COMMANDIDS_H
