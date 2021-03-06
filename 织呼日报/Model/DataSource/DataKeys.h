//
//  DataKeys.h
//  织呼日报
//
//  Created by csy on 17/2/16.
//  Copyright © 2017年 xyq. All rights reserved.
//

#import <Foundation/Foundation.h>
/*缓存图片*/
static NSString *const DATAKEY_CACHEDIMAGES = @"CachedImages";
static NSString *const DATAKEY_CACHEDIMAGES_URL = @"url";
static NSString *const DATAKEY_CACHEDIMAGES_FILENAME = @"fileName";

/*起始图片*/
static NSString *const DATAKEY_STARTIMAGE = @"StartImage";
static NSString *const DATAKEY_STARTIMAGE_AUTHOR = @"StartImageAuthor";
static NSString *const DATAKEY_STARTIMAGE_URL = @"StartImageUrl";

/*首页数据*/
static NSString *const DATAKEY_STORIES = @"StoryData";
static NSString *const DATAKEY_STORIES_SIGNATURE = @"signature";
static NSString *const DATAKEY_STORIES_DATE = @"date";
static NSString *const DATAKEY_STORIES_STORIES = @"stories";
static NSString *const DATAKEY_STORIES_TOPSTORIES = @"top_stories";

@interface DataKeys : NSObject

@end
