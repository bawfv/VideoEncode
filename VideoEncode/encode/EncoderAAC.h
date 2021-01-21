//
//  EncoderAAC.h
//  VideoEncode
//
//  Created by devin on 2021/1/21.
//  Copyright © 2021 devin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
@interface EncoderAAC : NSObject
-(void)encodeSmapleBuffer:(CMSampleBufferRef)sampleBuffer;
@end
