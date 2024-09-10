//
//  TivioPlayerWrapperDelegate.h
//  Tivio
//
//  Created by Ladislav Navratil on 16.01.2022.
//

@class TivioEpgItem;

@protocol TivioProgramGuideDelegate

- (void) onEpgData: (NSArray<TivioEpgItem*> *) epgData;

@end
