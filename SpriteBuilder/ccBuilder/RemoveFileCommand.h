#import <Foundation/Foundation.h>
#import "FileCommandProtocol.h"


@interface RemoveFileCommand : NSObject <FileCommandProtocol>

@property (nonatomic, copy, readonly) NSString *filePath;

- (instancetype)initWithFilePath:(NSString *)filePath;

@end