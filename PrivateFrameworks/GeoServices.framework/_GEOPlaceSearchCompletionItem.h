/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOMapItem>, GEOMapServiceTraits, GEOPDAutocompleteEntry, NSArray, NSData, NSString;

@interface _GEOPlaceSearchCompletionItem : NSObject <GEOCompletionItemPrivate> {
    NSArray *_displayLines;
    GEOPDAutocompleteEntry *_entry;
    int _entryIndex;
    int _entryListIndex;
    NSArray *_lineHighlights;
    GEOMapServiceTraits *_traits;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSArray * displayLines;
@property(readonly) GEOPDAutocompleteEntry * entry;
@property(readonly) NSData * entryMetadata;
@property(readonly) <GEOMapItem> * geoMapItem;
@property(readonly) unsigned int hash;
@property(readonly) NSData * metadata;
@property(getter=_placeDataAutocompleteEntry,readonly) GEOPDAutocompleteEntry * placeDataAutocompleteEntry;
@property(readonly) Class superclass;

- (id)_placeDataAutocompleteEntry;
- (id)calloutTitle;
- (void)dealloc;
- (id)displayLines;
- (id)entry;
- (id)entryMetadata;
- (id)geoMapItem;
- (BOOL)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (unsigned int)hash;
- (id)highlightsForLine:(unsigned int)arg1;
- (id)initWithEntry:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)metadata;
- (id)queryLine;
- (void)sendFeedback;

@end
