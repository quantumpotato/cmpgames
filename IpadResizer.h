//Resizing points to fit on iPad
//Copyright (C) 2011  Anthony Broussard
//
//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU Affero General Public License as
//published by the Free Software Foundation, either version 3 of the
//License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU Affero General Public License for more details.
//
//You should have received a copy of the GNU Affero General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
CGRect  ipmrect(float x, float y, float w, float h);
CGPoint ipmpoint(float x, float y);

#ifdef UI_USER_INTERFACE_IDIOM
    #define IS_IPAD() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#else
    #define IS_IPAD() (false)
#endif



#define iprect(x,y,w,h) \
    CGRectMake(x*2.4,y*2.14,w*2.4,h*2.13)

#define ippoint(x,y) \
    CGPointMake(x*2.4,y*2.13)
