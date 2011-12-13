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

#import "IpadResizer.h"

CGPoint ipmpoint(float x, float y) {
    float XV = 1;
    float YV = 1;
    if (IS_IPAD()) {
        XV = 2.4;
        YV = 2.13;
    }
    return CGPointMake(x*XV, y*YV);
}

CGRect ipmrect(float x, float y, float w, float h) {
    float XV = 1;
    float YV = 1;
    if (IS_IPAD()) {
        XV = 2.4;
        YV = 2.13;
    }


    return CGRectMake(x*XV,y*YV,w*XV,h*YV);
}