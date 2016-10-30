﻿/* ***************************************************************************
* dropdown.h -- contextual menu for displaying options of target
*
* Copyright (C) 2016 by Liu Chao <lc-soft@live.cn>
*
* This file is part of the LC-Finder project, and may only be used, modified,
* and distributed under the terms of the GPLv2.
*
* By continuing to use, modify, or distribute this file you indicate that you
* have read the license and understand and accept it fully.
*
* The LC-Finder project is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GPL v2 for more details.
*
* You should have received a copy of the GPLv2 along with this file. It is
* usually in the LICENSE.TXT file, If not, see <http://www.gnu.org/licenses/>.
* ****************************************************************************/

/* ****************************************************************************
* dropdown.h -- 上下文菜单，用于显示目标的选项列表
*
* 版权所有 (C) 2016 归属于 刘超 <lc-soft@live.cn>
*
* 这个文件是 LC-Finder 项目的一部分，并且只可以根据GPLv2许可协议来使用、更改和
* 发布。
*
* 继续使用、修改或发布本文件，表明您已经阅读并完全理解和接受这个许可协议。
*
* LC-Finder 项目是基于使用目的而加以散布的，但不负任何担保责任，甚至没有适销
* 性或特定用途的隐含担保，详情请参照GPLv2许可协议。
*
* 您应已收到附随于本文件的GPLv2许可协议的副本，它通常在 LICENSE 文件中，如果
* 没有，请查看：<http://www.gnu.org/licenses/>.
* ****************************************************************************/

#ifndef LCFINDER_DROPDOWN_H
#define LCFINDER_DROPDOWN_H

void Dropdown_Show( LCUI_Widget w );

void Dropdown_Hide( LCUI_Widget w );

/** 切换下拉菜单的显示状态 */
void Dropdown_Toggle( LCUI_Widget w );

/** 为下来菜单设置头部文本 */
void Dropdown_SetHeader( LCUI_Widget w, const char *header );
void Dropdown_SetHeaderW( LCUI_Widget w, const wchar_t *header );

/** 为下拉菜单添加菜单项 */
LCUI_Widget Dropdwon_AddItem( LCUI_Widget w, void *data, const char *text );
LCUI_Widget Dropdwon_AddItemW( LCUI_Widget w, void *data, const wchar_t *text );

/** 为下拉菜单绑定目标 */
void Dropdown_BindTarget( LCUI_Widget w, LCUI_Widget target );

/** 为下拉菜单项设置数据 */
void DropdownItem_SetData( LCUI_Widget w, void *data );

/** 为下拉菜单项设置文本内容 */
void DropdownItem_SetText( LCUI_Widget w, const char *text );
void DropdownItem_SetTextW( LCUI_Widget w, const wchar_t *text );

/** 添加下拉菜单部件 */
void LCUIWidget_AddDropdown( void );

#endif
