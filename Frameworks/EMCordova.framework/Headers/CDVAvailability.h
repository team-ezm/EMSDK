/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

#import "CDVAvailabilityDeprecated.h"

#define IsAtLeastiOSVersion(X) ([[[UIDevice currentDevice] systemVersion] compare:X options:NSNumericSearch] != NSOrderedAscending)


// Enable this to log all exec() calls.
#define CDV_ENABLE_EXEC_LOGGING 0
#if CDV_ENABLE_EXEC_LOGGING
    #define CDV_EXEC_LOG NSLog
#else
    #define CDV_EXEC_LOG(...) do { \
} while (NO)
#endif


#define YDM_LOG_LEVEL (YDMLogLevelAll)



typedef NS_ENUM(NSUInteger, YDMLogOrigin) {
    YDMLogOriginNative = 0,
    YDMLogOriginCordovaJs,
    YDMLogOriginUserJs,
};

// 和cordova.js里的数值对应
typedef NS_ENUM(NSInteger, YDMLogFlag) {
    YDMLogFlagLog        = 1 << 0,
    YDMLogFlagError      = 1 << 1,
    YDMLogFlagWarning    = 1 << 2,
    YDMLogFlagInfo       = 1 << 3,
    YDMLogFlagDebug      = 1 << 4
};

/**
 *  Use Log levels to filter logs.
 */
typedef NS_ENUM(NSUInteger, YDMLogLevel){
    /**
     *  No logs
     */
    YDMLogLevelOff       = 0,
    
    /**
     *  Error only
     */
    YDMLogLevelError     = YDMLogFlagError,
    
    /**
     *  Error and warning
     */
    YDMLogLevelWarning   = YDMLogLevelError | YDMLogFlagWarning,
    
    /**
     *  Error, warning and info
     */
    YDMLogLevelInfo      = YDMLogLevelWarning | YDMLogFlagInfo,
    
    /**
     *  Log, warning info
     */
    YDMLogLevelLog       = YDMLogFlagLog | YDMLogLevelInfo,
    
    /**
     *  Error, warning, info and debug logs
     */
    YDMLogLevelDebug     = YDMLogLevelLog | YDMLogFlagDebug,
    
    /**
     *  All
     */
    YDMLogLevelAll       = NSUIntegerMax
};

