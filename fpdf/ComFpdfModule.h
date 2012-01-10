/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */

//#import "/Users/Kaze1/Library/Application Support/Titanium/mobilesdk/osx/1.7.5/iphone/include/TiCore/TiCore.h"
#import "TiModule.h"
//#import "/Users/Kaze1/Library/Application Support/Titanium/mobilesdk/osx/1.7.5/iphone/include/TiModule.h"
//#import "TiModule.h"
#import "TiCore/TiCore.h"
//#import <FastPdfKit/FastPdfKit.h>
//#import </Users/Kaze1/tmp/fastpdf/FastPdfKit.embeddedframework/FastPdfKit.framework/Versions/A/Headers/FastPdfKit.h>
#import "SimpleViewController.h"


@interface ComFpdfModule : TiModule 
{
   SimpleViewController* c;
}

-(id) openPDF:(id)args;
@end

