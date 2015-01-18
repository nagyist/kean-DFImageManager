// The MIT License (MIT)
//
// Copyright (c) 2015 Alexander Grebenyuk (github.com/kean).
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef DFImageManagerKit_h
#define DFImageManagerKit_h

#import "DFImageManagerDefines.h"

#import "DFImageAssetProtocol.h"
#import "DFImageCacheProtocol.h"
#import "DFImageFetcherProtocol.h"
#import "DFImageManagerOperationProtocol.h"
#import "DFImageManagerProtocol.h"
#import "DFImageProcessorProtocol.h"
#import "DFImageManagerValueTransformerProtocol.h"

#import "DFImageManager.h"
#import "DFImageManagerConfiguration.h"

#import "DFCompositeImageManager.h"
#import "DFProxyImageManager.h"

#import "DFImageRequest.h"
#import "DFImageRequestID.h"
#import "DFImageRequestOptions.h"
#import "DFImageResponse.h"

#import "NSURL+DFImageAsset.h"
#import "DFURLImageFetcher.h"
#import "DFURLSessionOperation.h"
#import "DFURLResponseDeserializing.h"
#import "DFImageDeserializer.h"

#import "PHAsset+DFImageAsset.h"
#import "DFPhotosKitImageFetcher.h"
#import "NSURL+DFPhotosKit.h"
#import "DFPhotosKitImageFetchOperation.h"

#import "ALAsset+DFImageAsset.h"
#import "ALAssetsLibrary+DFImageManager.h"
#import "DFAssetsLibraryImageFetcher.h"
#import "DFAssetsLibraryImageFetchOperation.h"
#import "DFAssetsLibraryUtilities.h"

#import "DFImageProcessor.h"
#import "DFProcessingImageFetcher.h"
#import "DFProcessingInput.h"

// UI

#import "DFImageView.h"

// Utilities

#import "DFCollectionViewPreheatingController.h"

#import "DFCompositeImageRequest.h"

#import "DFOperation.h"
#import "DFBlockImageManagerOperation.h"

#import "DFImageUtilities.h"

#import "DFImageManagerBlockValueTransformer.h"

#endif
