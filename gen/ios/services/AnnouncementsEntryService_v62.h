@interface AnnouncementsEntryService_v62 : NSObject

- (NSDictionary *)addEntry:(NSNumber *)plid classNameId:(NSNumber *)classNameId classPK:(NSNumber *)classPK title:(NSString *)title content:(NSString *)content url:(NSString *)url type:(NSString *)type displayDateMonth:(NSNumber *)displayDateMonth displayDateDay:(NSNumber *)displayDateDay displayDateYear:(NSNumber *)displayDateYear displayDateHour:(NSNumber *)displayDateHour displayDateMinute:(NSNumber *)displayDateMinute displayImmediately:(BOOL)displayImmediately expirationDateMonth:(NSNumber *)expirationDateMonth expirationDateDay:(NSNumber *)expirationDateDay expirationDateYear:(NSNumber *)expirationDateYear expirationDateHour:(NSNumber *)expirationDateHour expirationDateMinute:(NSNumber *)expirationDateMinute priority:(NSNumber *)priority alert:(BOOL)alert;
- (NSDictionary *)getEntry:(NSNumber *)entryId;
- (NSDictionary *)updateEntry:(NSNumber *)entryId title:(NSString *)title content:(NSString *)content url:(NSString *)url type:(NSString *)type displayDateMonth:(NSNumber *)displayDateMonth displayDateDay:(NSNumber *)displayDateDay displayDateYear:(NSNumber *)displayDateYear displayDateHour:(NSNumber *)displayDateHour displayDateMinute:(NSNumber *)displayDateMinute expirationDateMonth:(NSNumber *)expirationDateMonth expirationDateDay:(NSNumber *)expirationDateDay expirationDateYear:(NSNumber *)expirationDateYear expirationDateHour:(NSNumber *)expirationDateHour expirationDateMinute:(NSNumber *)expirationDateMinute priority:(NSNumber *)priority;
- (void)deleteEntry:(NSNumber *)entryId;

@end