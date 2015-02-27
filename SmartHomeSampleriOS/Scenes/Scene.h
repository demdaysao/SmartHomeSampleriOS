//
//  Scene.h
//  SmartHomeSampleriOS
//
//  Created by Ibrahim Adnan on 2/19/15.
//  Copyright (c) 2015 Ibrahim Adnan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ConnectSDK/ConnectSDK.h>
#import <HueSDK_iOS/HueSDK.h>
#import "SceneInfo.h"

@class WeMoControlDevice;

typedef enum {
    Stopped,
    Running,
    Paused
} SceneState;


@interface Scene : NSObject<ConnectableDeviceDelegate>

@property(nonatomic) SceneState currentState;
@property(nonatomic,strong) SceneInfo *sceneInfo;

@property(nonatomic,strong) ConnectableDevice *conectableDevice;
@property(nonatomic,strong) PHBridgeResourcesCache *hueBridge;
@property (nonatomic, strong) WeMoControlDevice *wemoSwitch;

@property(nonatomic,strong) NSDictionary *configuration;
@property(nonatomic,strong) UIImage *currentImage;

-(instancetype)initWithConfiguration:(NSDictionary *)configuration andSceneInfo:(SceneInfo *)sceneInfo;
- (void)changeSceneState:(SceneState)state success:(SuccessBlock)success failure:(FailureBlock)failure;
-(void)configureScene;

@end
