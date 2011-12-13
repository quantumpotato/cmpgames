//objective-c game helper methods
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
#import "IpadResizer.h"


float distvar, distvar2, fdist, veldistance;
CGPoint fvel;


CGPoint CombineVel(CGPoint v1, CGPoint v2);
float GetDist(CGPoint initialp, CGPoint secondp);
CGPoint GetAngle(CGPoint initialp ,CGPoint secondp);
CGPoint MultiplyVel(CGPoint cref , float mfact);
BOOL OutOfBounds(CGPoint initialp);
CGPoint IXncreaseX(CGPoint v1, float xv);
CGPoint IYncreaseY(CGPoint v1, float yv);
CGPoint SXetX(CGPoint v1, float x);
CGPoint SYetY(CGPoint v1, float y);
CGPoint SXOffsetX(CGPoint v1, float x);
CGPoint SYOffsetY(CGPoint v1, float y);