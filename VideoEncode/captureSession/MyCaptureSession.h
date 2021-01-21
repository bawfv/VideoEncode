//
//  MyCaptureSession.h
//  VideoEncode
//
//  Created by devin on 2021/1/21.
//  Copyright © 2021 devin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

typedef NS_ENUM(NSUInteger,CaptureSessionPreset){
    CaptureSessionPreset640x480,
    CaptureSessionPresetiFrame960x540,
    CaptureSessionPreset1280x720,
};
@protocol MycaptureSessionDelegate <NSObject>

- (void)videoWithSampleBuffer:(CMSampleBufferRef)sampleBuffer;

- (void)audioWithSampleBuffer:(CMSampleBufferRef)sampleBuffer;


@end
@interface MyCaptureSession : NSObject
@property (nonatomic ,strong) id<MycaptureSessionDelegate>delegate;
@property (nonatomic ,strong) AVCaptureSession *session; //管理对象

- (instancetype)initCaptureWithSessionPreset:(CaptureSessionPreset)preset;

- (void)start;

- (void)stop;

@end
