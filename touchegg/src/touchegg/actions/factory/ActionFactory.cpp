/**
 * @file /src/touchegg/actions/factory/ActionFactory.cpp
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg, usted puede redistribuirlo y/o
 * modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @class  ActionFactory
 * @author José Expósito
 */
#include "ActionFactory.h"

// ************************************************************************** //
// **********             STATIC METHODS AND VARIABLES             ********** //
// ************************************************************************** //

ActionFactory* ActionFactory::instance = NULL;

ActionFactory* ActionFactory::getInstance() {
    if(ActionFactory::instance == NULL)
        ActionFactory::instance = new ActionFactory();

    return ActionFactory::instance;
}


// ************************************************************************** //
// **********                    PUBLIC METHODS                    ********** //
// ************************************************************************** //

Action* ActionFactory::createAction(ActionTypeEnum::ActionType actionType,
        const QString& settings) {
    switch(actionType) {
    case ActionTypeEnum::RIGHT_BUTTON_CLICK:
        return new RightButtonClick(settings);

    case ActionTypeEnum::MIDDLE_BUTTON_CLICK:
        return new MiddleButtonClick(settings);

    case ActionTypeEnum::MOUSE_WHEEL_UP:
        return new MouseWheelUp(settings);

    case ActionTypeEnum::MOUSE_WHEEL_DOWN:
        return new MouseWheelDown(settings);

    case ActionTypeEnum::MINIMIZE_WINDOW:
        return new MinimizeWindow(settings);

    case ActionTypeEnum::MAXIMIZE_RESTORE_WINDOW:
        return new MaximizeRestoreWindow(settings);

    case ActionTypeEnum::CLOSE_WINDOW:
        return new CloseWindow(settings);

    case ActionTypeEnum::RESIZE_WINDOW:
        return new ResizeWindow(settings);

    case ActionTypeEnum::SHOW_DESKTOP:
        return new ShowDesktop(settings);

    case ActionTypeEnum::CHANGE_DESKTOP:
        return new ChangeDesktop(settings);

    case ActionTypeEnum::SEND_KEYS:
        return new SendKeys(settings);

    case ActionTypeEnum::MOVE_WINDOW:
        return new MoveWindow(settings);

    case ActionTypeEnum::RUN_COMMAND:
        return new RunCommand(settings);

    default:
        return NULL;
    }
}