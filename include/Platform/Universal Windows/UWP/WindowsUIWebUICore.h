//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// WindowsUIWebUICore.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
#define OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_UI_WebUI_Core.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUWCWebUICommandBarItemInvokedEventArgs, WUWCWebUICommandBarIconButton, WUWCWebUICommandBarConfirmationButton, WUWCWebUICommandBarBitmapIcon, WUWCWebUICommandBarSymbolIcon, WUWCWebUICommandBarSizeChangedEventArgs, WUWCWebUICommandBar;
@protocol WUWCIWebUICommandBarItemInvokedEventArgs, WUWCIWebUICommandBarElement, WUWCIWebUICommandBarIcon, WUWCIWebUICommandBarIconButton, WUWCIWebUICommandBarConfirmationButton, WUWCIWebUICommandBarBitmapIcon, WUWCIWebUICommandBarBitmapIconFactory, WUWCIWebUICommandBarSymbolIcon, WUWCIWebUICommandBarSymbolIconFactory, WUWCIWebUICommandBarSizeChangedEventArgs, WUWCIWebUICommandBar, WUWCIWebUICommandBarStatics;

// Windows.UI.WebUI.Core.WebUICommandBarClosedDisplayMode
enum _WUWCWebUICommandBarClosedDisplayMode {
    WUWCWebUICommandBarClosedDisplayModeDefault = 0,
    WUWCWebUICommandBarClosedDisplayModeMinimal = 1,
    WUWCWebUICommandBarClosedDisplayModeCompact = 2,
};
typedef unsigned WUWCWebUICommandBarClosedDisplayMode;

#include "WindowsFoundation.h"
#include "WindowsUI.h"
// Windows.UI.WebUI.Core.MenuClosedEventHandler
#ifndef __WUWCMenuClosedEventHandler__DEFINED
#define __WUWCMenuClosedEventHandler__DEFINED
typedef void(^WUWCMenuClosedEventHandler)();
#endif // __WUWCMenuClosedEventHandler__DEFINED

// Windows.UI.WebUI.Core.MenuOpenedEventHandler
#ifndef __WUWCMenuOpenedEventHandler__DEFINED
#define __WUWCMenuOpenedEventHandler__DEFINED
typedef void(^WUWCMenuOpenedEventHandler)();
#endif // __WUWCMenuOpenedEventHandler__DEFINED

// Windows.UI.WebUI.Core.SizeChangedEventHandler
#ifndef __WUWCSizeChangedEventHandler__DEFINED
#define __WUWCSizeChangedEventHandler__DEFINED
typedef void(^WUWCSizeChangedEventHandler)(WUWCWebUICommandBarSizeChangedEventArgs* eventArgs);
#endif // __WUWCSizeChangedEventHandler__DEFINED


#import <Foundation/Foundation.h>

// Windows.UI.WebUI.Core.MenuOpenedEventHandler
#ifndef __WUWCMenuOpenedEventHandler__DEFINED
#define __WUWCMenuOpenedEventHandler__DEFINED
typedef void(^WUWCMenuOpenedEventHandler)();
#endif // __WUWCMenuOpenedEventHandler__DEFINED

// Windows.UI.WebUI.Core.MenuClosedEventHandler
#ifndef __WUWCMenuClosedEventHandler__DEFINED
#define __WUWCMenuClosedEventHandler__DEFINED
typedef void(^WUWCMenuClosedEventHandler)();
#endif // __WUWCMenuClosedEventHandler__DEFINED

// Windows.UI.WebUI.Core.SizeChangedEventHandler
#ifndef __WUWCSizeChangedEventHandler__DEFINED
#define __WUWCSizeChangedEventHandler__DEFINED
typedef void(^WUWCSizeChangedEventHandler)(WUWCWebUICommandBarSizeChangedEventArgs* eventArgs);
#endif // __WUWCSizeChangedEventHandler__DEFINED

// Windows.UI.WebUI.Core.IWebUICommandBarElement
#ifndef __WUWCIWebUICommandBarElement_DEFINED__
#define __WUWCIWebUICommandBarElement_DEFINED__

@protocol WUWCIWebUICommandBarElement
@end

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCIWebUICommandBarElement : RTObject <WUWCIWebUICommandBarElement>
@end

#endif // __WUWCIWebUICommandBarElement_DEFINED__

// Windows.UI.WebUI.Core.IWebUICommandBarIcon
#ifndef __WUWCIWebUICommandBarIcon_DEFINED__
#define __WUWCIWebUICommandBarIcon_DEFINED__

@protocol WUWCIWebUICommandBarIcon
@end

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCIWebUICommandBarIcon : RTObject <WUWCIWebUICommandBarIcon>
@end

#endif // __WUWCIWebUICommandBarIcon_DEFINED__

// Windows.UI.WebUI.Core.WebUICommandBarItemInvokedEventArgs
#ifndef __WUWCWebUICommandBarItemInvokedEventArgs_DEFINED__
#define __WUWCWebUICommandBarItemInvokedEventArgs_DEFINED__

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCWebUICommandBarItemInvokedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) BOOL isPrimaryCommand;
@end

#endif // __WUWCWebUICommandBarItemInvokedEventArgs_DEFINED__

// Windows.UI.WebUI.Core.WebUICommandBarIconButton
#ifndef __WUWCWebUICommandBarIconButton_DEFINED__
#define __WUWCWebUICommandBarIconButton_DEFINED__

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCWebUICommandBarIconButton : RTObject <WUWCIWebUICommandBarElement>
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) NSString * label;
@property BOOL isToggleButton;
@property BOOL isChecked;
@property (retain) RTObject<WUWCIWebUICommandBarIcon>* icon;
@property BOOL enabled;
- (EventRegistrationToken)addItemInvokedEvent:(void(^)(WUWCWebUICommandBarIconButton*, WUWCWebUICommandBarItemInvokedEventArgs*))del;
- (void)removeItemInvokedEvent:(EventRegistrationToken)tok;
@end

#endif // __WUWCWebUICommandBarIconButton_DEFINED__

// Windows.UI.WebUI.Core.WebUICommandBarConfirmationButton
#ifndef __WUWCWebUICommandBarConfirmationButton_DEFINED__
#define __WUWCWebUICommandBarConfirmationButton_DEFINED__

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCWebUICommandBarConfirmationButton : RTObject <WUWCIWebUICommandBarElement>
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) NSString * text;
- (EventRegistrationToken)addItemInvokedEvent:(void(^)(WUWCWebUICommandBarConfirmationButton*, WUWCWebUICommandBarItemInvokedEventArgs*))del;
- (void)removeItemInvokedEvent:(EventRegistrationToken)tok;
@end

#endif // __WUWCWebUICommandBarConfirmationButton_DEFINED__

// Windows.UI.WebUI.Core.WebUICommandBarBitmapIcon
#ifndef __WUWCWebUICommandBarBitmapIcon_DEFINED__
#define __WUWCWebUICommandBarBitmapIcon_DEFINED__

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCWebUICommandBarBitmapIcon : RTObject <WUWCIWebUICommandBarIcon>
+ (WUWCWebUICommandBarBitmapIcon*)make:(WFUri*)uri ACTIVATOR;
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) WFUri* uri;
@end

#endif // __WUWCWebUICommandBarBitmapIcon_DEFINED__

// Windows.UI.WebUI.Core.WebUICommandBarSymbolIcon
#ifndef __WUWCWebUICommandBarSymbolIcon_DEFINED__
#define __WUWCWebUICommandBarSymbolIcon_DEFINED__

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCWebUICommandBarSymbolIcon : RTObject <WUWCIWebUICommandBarIcon>
+ (WUWCWebUICommandBarSymbolIcon*)make:(NSString *)symbol ACTIVATOR;
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) NSString * symbol;
@end

#endif // __WUWCWebUICommandBarSymbolIcon_DEFINED__

// Windows.UI.WebUI.Core.WebUICommandBarSizeChangedEventArgs
#ifndef __WUWCWebUICommandBarSizeChangedEventArgs_DEFINED__
#define __WUWCWebUICommandBarSizeChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCWebUICommandBarSizeChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WFSize* size;
@end

#endif // __WUWCWebUICommandBarSizeChangedEventArgs_DEFINED__

// Windows.UI.WebUI.Core.WebUICommandBar
#ifndef __WUWCWebUICommandBar_DEFINED__
#define __WUWCWebUICommandBar_DEFINED__

OBJCUWP_WINDOWS_UI_WEBUI_CORE_EXPORT
@interface WUWCWebUICommandBar : RTObject
+ (WUWCWebUICommandBar*)getForCurrentView;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property BOOL visible;
@property double opacity;
@property BOOL isOpen;
@property (retain) WUColor* foregroundColor;
@property WUWCWebUICommandBarClosedDisplayMode closedDisplayMode;
@property (retain) WUColor* backgroundColor;
@property (readonly) NSMutableArray<RTObservableCollection>* /* RTObject<WUWCIWebUICommandBarElement>* */ primaryCommands;
@property (readonly) NSMutableArray<RTObservableCollection>* /* RTObject<WUWCIWebUICommandBarElement>* */ secondaryCommands;
@property (readonly) WFSize* size;
- (EventRegistrationToken)addMenuClosedEvent:(WUWCMenuClosedEventHandler)del;
- (void)removeMenuClosedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addMenuOpenedEvent:(WUWCMenuOpenedEventHandler)del;
- (void)removeMenuOpenedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSizeChangedEvent:(WUWCSizeChangedEventHandler)del;
- (void)removeSizeChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WUWCWebUICommandBar_DEFINED__

