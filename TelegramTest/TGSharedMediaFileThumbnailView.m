#import "TGSharedMediaFileThumbnailView.h"

@interface TGSharedMediaFileThumbnailView ()
{
    TGSharedMediaFileThumbnailViewStyle _style;
    NSArray *_colors;
}

@end

@implementation TGSharedMediaFileThumbnailView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self != nil)
    {
        self.backgroundColor = [NSColor clearColor];
    }
    return self;
}

- (void)setStyle:(TGSharedMediaFileThumbnailViewStyle)style colors:(NSArray *)colors
{
    _style = style;
    _colors = colors;
    [self setNeedsDisplay:YES];
}

- (void)setFrame:(CGRect)frame
{
    if (!CGSizeEqualToSize(self.frame.size, frame.size))
        [self setNeedsDisplay:YES];
    [super setFrame:frame];
}

- (void)drawRect:(CGRect)__unused rect
{
    [super drawRect:rect];
    
    CGContextRef context = [[NSGraphicsContext currentContext] graphicsPort];
    
    CGSize size = self.frame.size;
    
    if (_style == TGSharedMediaFileThumbnailViewStyleRounded)
    {
        CGFloat radius = 1.0f;
        CGFloat cornerSize = 11.0f;
        
        if (_colors.count >= 2)
        {
            CGContextSetFillColorWithColor(context, [(NSColor *)_colors[0] CGColor]);
            CGContextBeginPath(context);
            CGContextMoveToPoint(context, 0.0f, radius);
            CGContextAddArcToPoint(context, 0.0f, 0.0f, radius, 0.0f, radius);
            CGContextAddLineToPoint(context, size.width - cornerSize, 0.0f);
            CGContextAddLineToPoint(context, size.width - cornerSize + cornerSize / 4.0f, cornerSize - cornerSize / 4.0f);
            CGContextAddLineToPoint(context, size.width, cornerSize);
            CGContextAddLineToPoint(context, size.width, size.height - radius);
            CGContextAddArcToPoint(context, size.width, size.height, size.width - radius, size.height, radius);
            CGContextAddLineToPoint(context, radius, size.height);
            CGContextAddArcToPoint(context, 0.0f, size.height, 0.0f, size.height - radius, radius);
            CGContextClosePath(context);
            CGContextFillPath(context);

            CGContextSetFillColorWithColor(context, [(NSColor *)_colors[1] CGColor]);
            CGContextBeginPath(context);
            CGContextMoveToPoint(context, size.width - cornerSize, 0.0f);
            CGContextAddLineToPoint(context, size.width, cornerSize);
            CGContextAddLineToPoint(context, size.width - cornerSize + radius, cornerSize);
            CGContextAddArcToPoint(context, size.width - cornerSize, cornerSize, size.width - cornerSize, cornerSize - radius, radius);
            CGContextClosePath(context);
            CGContextFillPath(context);
        }
    }
    else if (_style == TGSharedMediaFileThumbnailViewStylePlain)
    {
        CGFloat radius = 0.0f;
        CGFloat cornerSize = 18.0f;
        
        if (_colors.count >= 2)
        {
            CGContextSetFillColorWithColor(context, [(NSColor *)_colors[0] CGColor]);
            CGContextBeginPath(context);
            CGContextMoveToPoint(context, 0.0f, radius);
            if (radius > FLT_EPSILON)
                CGContextAddArcToPoint(context, 0.0f, 0.0f, radius, 0.0f, radius);
            CGContextAddLineToPoint(context, size.width - cornerSize, 0.0f);
            CGContextAddLineToPoint(context, size.width - cornerSize + cornerSize / 4.0f, cornerSize - cornerSize / 4.0f);
            CGContextAddLineToPoint(context, size.width, cornerSize);
            CGContextAddLineToPoint(context, size.width, size.height - radius);
            if (radius > FLT_EPSILON)
                CGContextAddArcToPoint(context, size.width, size.height, size.width - radius, size.height, radius);
            CGContextAddLineToPoint(context, radius, size.height);
            if (radius > FLT_EPSILON)
                CGContextAddArcToPoint(context, 0.0f, size.height, 0.0f, size.height - radius, radius);
            CGContextClosePath(context);
            CGContextFillPath(context);
            
            CGContextSetFillColorWithColor(context, [(NSColor *)_colors[1] CGColor]);
            CGContextBeginPath(context);
            CGContextMoveToPoint(context, size.width - cornerSize, 0.0f);
            CGContextAddLineToPoint(context, size.width, cornerSize);
            CGContextAddLineToPoint(context, size.width - cornerSize + radius, cornerSize);
            if (radius > FLT_EPSILON)
                CGContextAddArcToPoint(context, size.width - cornerSize, cornerSize, size.width - cornerSize, cornerSize - radius, radius);
            CGContextClosePath(context);
            CGContextFillPath(context);
        }
    }
}

-(BOOL)isFlipped {
    return YES;
}

@end
