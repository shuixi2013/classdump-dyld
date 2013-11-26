/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@protocol ListViewSearchResultCellAccessoryDelegate;
@class UILabel, UIImageView, SearchResult, MKStarRatingAndLabelView, UIButton, , NSString;

@interface ListViewSearchResultCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _addressLabel;
	UIImageView* _icon;
	SearchResult* _searchResult;
	MKStarRatingAndLabelView* _ratingView;
	UILabel* _numReviewsLabel;
	UIButton* _infoButton;
	<ListViewSearchResultCellAccessoryDelegate>* _delegate;

}

@property (nonatomic,retain) SearchResult * searchResult; 
@property (assign,nonatomic) <ListViewSearchResultCellAccessoryDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,@dynamic,retain) NSString * nameText; 
@property (nonatomic,@dynamic,retain) NSString * addressText; 
+(id)reuseIdentifier;
-(void)setSearchResult:(id)arg1 ;
-(void)pressedInfo:(id)arg1 ;
-(void)setAddressText:(id)arg1 ;
-(void)updateLabelsForRating:(id)arg1 ;
-(id)addressText;
-(void)setNameText:(id)arg1 ;
-(id)nameText;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)infoButton;
-(id)searchResult;
@end
