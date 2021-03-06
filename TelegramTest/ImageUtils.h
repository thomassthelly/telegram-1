//
//  ImageUtils.h
//  TelegramTest
//
//  Created by keepcoder on 26.10.13.
//  Copyright (c) 2013 keepcoder. All rights reserved.
//

#import <Foundation/Foundation.h>

#define CACHE_IMAGE(Name) NSImage* image_##Name ();


CACHE_IMAGE(actions)
CACHE_IMAGE(actionsActive)
CACHE_IMAGE(actionsHover)
CACHE_IMAGE(addContact)
CACHE_IMAGE(AddSharedContact)
CACHE_IMAGE(AddSharedContactHighlighted)
CACHE_IMAGE(AppIcon)
CACHE_IMAGE(AttachFile)
CACHE_IMAGE(AttachFileHighlighted)
CACHE_IMAGE(AttachHighlighted)
CACHE_IMAGE(AttachLocation)
CACHE_IMAGE(AttachLocationHighlighted)
CACHE_IMAGE(AttachPhotoVideo)
CACHE_IMAGE(AttachPhotoVideoHighlighted)
CACHE_IMAGE(AttachTakePhoto)
CACHE_IMAGE(AttachTakePhotoHighlighted)
CACHE_IMAGE(BottomAttach)
CACHE_IMAGE(boxBack)
CACHE_IMAGE(CancelDownload)
CACHE_IMAGE(chat)
CACHE_IMAGE(chatHighlighted)
CACHE_IMAGE(ChatMessageError)
CACHE_IMAGE(DialogSelectedSendError)
CACHE_IMAGE(checked)
CACHE_IMAGE(clear)
CACHE_IMAGE(clearActive)
CACHE_IMAGE(clearHover)
CACHE_IMAGE(ClosePopupDialog)
CACHE_IMAGE(compose)
CACHE_IMAGE(composeActive)
CACHE_IMAGE(composeHover)
CACHE_IMAGE(Download)
CACHE_IMAGE(emojiContainer1)
CACHE_IMAGE(emojiContainer1Highlighted)
CACHE_IMAGE(emojiContainer2)
CACHE_IMAGE(emojiContainer2Highlighted)
CACHE_IMAGE(emojiContainer3)
CACHE_IMAGE(emojiContainer3Highlighted)
CACHE_IMAGE(emojiContainer4)
CACHE_IMAGE(emojiContainer4Highlighted)
CACHE_IMAGE(emojiContainer5)
CACHE_IMAGE(emojiContainer5Highlighted)
CACHE_IMAGE(emojiContainer6)
CACHE_IMAGE(emojiContainer6Highlighted)
CACHE_IMAGE(emojiContainer7)
CACHE_IMAGE(emojiContainer7Highlighted)
CACHE_IMAGE(GIFPlay)
CACHE_IMAGE(group)
CACHE_IMAGE(HeaderDropdownArrow)
CACHE_IMAGE(iconCancelDownload)
CACHE_IMAGE(kick)
CACHE_IMAGE(logo)
CACHE_IMAGE(logoAbout)
CACHE_IMAGE(MessageFile)
CACHE_IMAGE(MessageFileCancel)
CACHE_IMAGE(MessageFileDownload)
CACHE_IMAGE(MessageMapPin)
CACHE_IMAGE(muted)
CACHE_IMAGE(mutedSld)
CACHE_IMAGE(noDialogs)
CACHE_IMAGE(noResults)
CACHE_IMAGE(searchIcon)
CACHE_IMAGE(secret)
CACHE_IMAGE(secretBlack)
CACHE_IMAGE(secretGray)
CACHE_IMAGE(secretHiglighted)
CACHE_IMAGE(select)
CACHE_IMAGE(selectPopup)
CACHE_IMAGE(smile)
CACHE_IMAGE(smileActive)
CACHE_IMAGE(smileHover)
CACHE_IMAGE(typingGIF)
CACHE_IMAGE(unchecked)
CACHE_IMAGE(uncheckedHover)
CACHE_IMAGE(UnpinPhoto)
CACHE_IMAGE(VideoPlay)
CACHE_IMAGE(VoiceMessageCancel)
CACHE_IMAGE(VoiceMessageDownload)
CACHE_IMAGE(ScrollDownArrow)
CACHE_IMAGE(VoiceMessagePause)
CACHE_IMAGE(VoiceMessagePlay)
CACHE_IMAGE(VoiceMessageUpload)
CACHE_IMAGE(VoiceMic)
CACHE_IMAGE(VoiceMicHighlighted)
CACHE_IMAGE(VoiceMicHighlighted2)
CACHE_IMAGE(HeaderDropdownArrow)
CACHE_IMAGE(BroadcastAvatarIcon)
CACHE_IMAGE(TelegramNotifications)
CACHE_IMAGE(newConversationBroadcast)
CACHE_IMAGE(PlayButtonBig)
CACHE_IMAGE(ArrowWhite)
CACHE_IMAGE(ArrowGrey)


CACHE_IMAGE(DownloadIconGrey)
CACHE_IMAGE(DownloadIconWhite)
CACHE_IMAGE(DownloadPauseIconGrey)
CACHE_IMAGE(DownloadPauseIconWhite)
CACHE_IMAGE(LoadCancelGrayIcon)
CACHE_IMAGE(DocumentThumbIcon)
CACHE_IMAGE(LoadCancelWhiteIcon)
CACHE_IMAGE(PlayIconWhite)

CACHE_IMAGE(MessageStateRead)
CACHE_IMAGE(MessageStateSent)

CACHE_IMAGE(ClockMin)
CACHE_IMAGE(ClockHour)
CACHE_IMAGE(ClockFrame)


CACHE_IMAGE(MessageActionForward)
CACHE_IMAGE(MessageActionForwardActive)
CACHE_IMAGE(MessageActionDelete)
CACHE_IMAGE(MessageActionDeleteActive)


CACHE_IMAGE(MessageStateReadWhite)
CACHE_IMAGE(MessageStateSentWhite)
CACHE_IMAGE(SendingClockWhite)
CACHE_IMAGE(SendingClockGray)

CACHE_IMAGE(ContactsAddContactActive)

CACHE_IMAGE(ContactsAddContact)

CACHE_IMAGE(UsernameCheck)

CACHE_IMAGE(VoicePlay)
CACHE_IMAGE(VoicePause)

CACHE_IMAGE(SecretPhotoFire)

CACHE_IMAGE(PhotoViewerLeft)
CACHE_IMAGE(PhotoViewerRight)
CACHE_IMAGE(PhotoViewerMore)
CACHE_IMAGE(PhotoViewerClose)

CACHE_IMAGE(ChangenumberAlertIcon);

CACHE_IMAGE(SharedMediaDocumentStatusDownload);

CACHE_IMAGE(NoFiles);
CACHE_IMAGE(SadAttach);

@interface ImageUtils : NSObject


NSImage *previewImageForDocument(NSString *path);


+ (NSImage*)roundCorners:(NSImage *)image size:(NSSize)size;
+ (NSImage *)imageResize:(NSImage*)anImage newSize:(NSSize)newSize;
+ (NSImage *)blurImage:(NSImage *)image blurRadius:(int)radius frameSize:(CGSize)size;



NSImage* strongResize(NSImage* image, int maxSize);
NSData* compressImage(NSData *data, float coef);
NSSize strongsize(NSSize from, float max);
NSSize convertSize(NSSize from, NSSize maxSize);
NSSize strongsizeWithMinMax(NSSize from, float min, float max);
NSSize strongsizeWithSizes(NSSize from, NSSize min, NSSize max);
NSImage *prettysize(NSImage *img);
NSImage *imageFromFile(NSString *filePath);
NSSize resizeToMaxCorner(NSSize from, float size);
NSImage *cropCenterWithSize(NSImage *image, NSSize cropSize);

NSImage *TGIdenticonImage(NSData *data, CGSize size);

NSImageView *imageViewWithImage(NSImage *image);


NSData *jpegNormalizedData(NSImage *image);
NSData *pngNormalizedData(NSImage *image);
NSImage *decompressedImage(NSImage *image);
NSImage *renderedImage(NSImage * oldImage, NSSize size);

@end
