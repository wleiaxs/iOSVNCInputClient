/*  
 Copyright 2013 V Wong <vwong122013 (at) gmail.com>
 Licensed under the Apache License, Version 2.0 (the "License"); you may not
 use this file except in compliance with the License. You may obtain a copy of
 the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 License for the specific language governing permissions and limitations under
 the License.
 */

/**
 ABSTRACT CLASS.  DO NOT INSTANTIATE DIRECTLY.  Ok to import.
 */

#import <Foundation/Foundation.h>
#import "ErrorHandlingMacros.h" //error handling for subclasses

@class RFBSocket, VersionMsg;

@interface RFBSecurity : NSObject
+ (uint8_t)type;
+ (NSString *)typeName;
- (BOOL)performAuthWithSocket:(RFBSocket *)socket ForVersion:(VersionMsg *)serverVersion Error:(NSError **)error;
- (id)init; 
@end
