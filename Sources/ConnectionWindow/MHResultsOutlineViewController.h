//
//  MHResultsOutlineViewController.h
//  MongoHub
//
//  Created by Syd on 10-4-26.
//  Copyright 2010 MusicPeace.ORG. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MHResultsOutlineViewController : NSObject
{
    IBOutlet NSOutlineView      *_outlineView;
    NSMutableArray              *_results;
    BOOL                        _checkingSelection;
}

@property (nonatomic, retain, readonly) NSOutlineView *outlineView;
@property (nonatomic, retain, readwrite) NSArray *results;
@property (nonatomic, assign, readonly) NSArray *selectedDocuments;

- (id)rootForItem:(id)item;

@end
