#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AViewModel.h"
#import "VerifyAVC.h"
#import "AModel.h"

FOUNDATION_EXPORT double VerifyAVersionNumber;
FOUNDATION_EXPORT const unsigned char VerifyAVersionString[];

