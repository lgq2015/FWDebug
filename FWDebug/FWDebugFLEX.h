//
//  FWDebugFLEX.h
//  Example
//
//  Created by wuyong on 17/2/16.
//  Copyright © 2017年 ocphp.com. All rights reserved.
//

#import <UIKit/UIKit.h>

// DEBUG模式且导入FLEX
#ifdef DEBUG
#if __has_include(<FLEX/FLEX.h>)

/**
 * FLEX调试插件
 *
 * 备注：5秒内摇两次设备开关调试窗口
 */
@interface UIApplication (FWDebugFLEX)

@end

#endif
#endif
