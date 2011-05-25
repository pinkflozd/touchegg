/**
 * @file /src/touchegg/util/Include.h
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg, usted puede redistribuirlo y/o
 * modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @author Copyright (C) 2011 José Expósito <jose.exposito89@gmail.com>
 */
#ifndef INCLUDE_H
#define INCLUDE_H

    // Qt
    #include <QtCore>
    #include <QtGui>
    #include <QtGui/QX11Info>

    // Xlib
    #include <X11/Xlib.h>
    #include <X11/Xutil.h>
    #include <X11/Xatom.h>
    #include <X11/extensions/XTest.h>

    // uTouch
    #include <geis/geis.h>

    // Others
    #include <cmath>

#endif // INCLUDE_H
