#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNTrainNOVServer : NSObject

+ (instancetype)shared;
- (void)configNOVServer:(NSString *)vPort withSecu:(NSString *)vSecu;

@end

NS_ASSUME_NONNULL_END
