/*=========================================================================

  Library   : Image Registration Toolkit (IRTK)
  Module    : $Id$
  Copyright : Imperial College, Department of Computing
              Visual Information Processing (VIP), 2008 onwards
  Date      : $Date$
  Version   : $Revision$
  Changes   : $Author$

Copyright (c) 1999-2014 and onwards, Imperial College London
All rights reserved.
See LICENSE for details

=========================================================================*/

#include <irtkCommon.h>

irtkObject::irtkObject()
{
  this->DeleteMethod = NULL;
}

irtkObject::~irtkObject()
{
}

void irtkObject::SetDeleteMethod(void (*f)(void *))
{
  if (f != this->DeleteMethod) {
    this->DeleteMethod = f;
  }
}
