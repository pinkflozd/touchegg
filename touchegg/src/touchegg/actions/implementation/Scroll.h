/**
 * @file /src/touchegg/actions/implementation/Scroll.h
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg, usted puede redistribuirlo y/o
 * modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @class  Scroll
 * @author José Expósito
 */
#ifndef SCROLL_H
#define SCROLL_H

#include "src/touchegg/util/Include.h"
#include "src/touchegg/actions/implementation/Action.h"

/**
 * @~spanish
 * Emula la rueda del ratón.
 *
 * @~english
 * Emulates the mouse whell.
 */
class Scroll : public Action {

    private:

        /**
         * @~spanish
         * Velocidad del scroll. A mayor más lento.
         *
         * @~english
         * Scroll speed. More is slower.
         */
        int horizontalSpeed;

        /**
         * @~spanish
         * Velocidad del scroll. A mayor más lento.
         *
         * @~english
         * Scroll speed. More is slower.
         */
        int verticalSpeed;

        //----------------------------------------------------------------------

        /**
         * @~spanish
         * Desplazamiento acumulado al hacer scroll hacia arriba.
         *
         * @~english
         * Accumulated space to scrolling up.
         */
        int upScrollSpace;

        /**
         * @~spanish
         * Desplazamiento acumulado al hacer scroll hacia abajo.
         *
         * @~english
         * Accumulated space to scrolling down.
         */
        int downScrollSpace;

        /**
         * @~spanish
         * Desplazamiento acumulado al hacer scroll hacia la izquierda.
         *
         * @~english
         * Accumulated space to scrolling left.
         */
        int leftScrollSpace;

        /**
         * @~spanish
         * Desplazamiento acumulado al hacer scroll hacia derecha.
         *
         * @~english
         * Accumulated space to scrolling right.
         */
        int rightScrollSpace;

        //----------------------------------------------------------------------

        /**
         * @~spanish
         * Botón del ratón para hacer scroll hacia arriba.
         *
         * @~english
         * Button of the mouse to scroll up.
         */
        int buttonUp;

        /**
         * @~spanish
         * Botón del ratón para hacer scroll hacia abajo.
         *
         * @~english
         * Button of the mouse to scroll down.
         */
        int buttonDown;

        /**
         * @~spanish
         * Botón del ratón para hacer scroll hacia la izquierda.
         *
         * @~english
         * Button of the mouse to scroll left.
         */
        int buttonLeft;

        /**
         * @~spanish
         * Botón del ratón para hacer scroll hacia la derecha.
         *
         * @~english
         * Button of the mouse to scroll right.
         */
        int buttonRight;

    public:

        Scroll(const QString& settings, Window window);

        void executeStart(const QHash<QString, QVariant>& attrs);

        void executeUpdate(const QHash<QString, QVariant>& attrs);

        void executeFinish(const QHash<QString, QVariant>& attrs);
};

#endif // SCROLL_H
