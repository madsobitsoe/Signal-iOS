//
//  iOSVersions.h
//  Signal
//
//  Created by Frederic Jacobs on 03/08/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <Availability.h>

#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(major, minor) \
    ([[NSProcessInfo processInfo] isOperatingSystemAtLeastVersion:(NSOperatingSystemVersion){.majorVersion = major, .minorVersion = minor, .patchVersion = 0}])

