/**
 * @file /src/touchegg/actions/implementation/RunCommand.cpp
 *
 * This file is part of Touchégg.
 *
 * Touchégg is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License  as  published by  the  Free Software
 * Foundation,  either version 3 of the License,  or (at your option)  any later
 * version.
 *
 * Touchégg is distributed in the hope that it will be useful,  but  WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the  GNU General Public License  for more details.
 *
 * You should have received a copy of the  GNU General Public License along with
 * Touchégg. If not, see <http://www.gnu.org/licenses/>.
 *
 * @author José Expósito <jose.exposito89@gmail.com> (C) 2011
 * @class  RunCommand
 */
#include "RunCommand.h"

// ************************************************************************** //
// **********              CONSTRUCTORS AND DESTRUCTOR             ********** //
// ************************************************************************** //

RunCommand::RunCommand(const QString& settings, Window window)
        : Action(settings, window)
{
    this->command = "";

    QStringList strl = settings.split("=");
    if(strl.length() == 2 && strl.at(0) == "COMMAND")
        this->command = strl.at(1);
    else
        qWarning() << "Error reading RUN_COMMAND settings";
}


// ************************************************************************** //
// **********                    PUBLIC METHODS                    ********** //
// ************************************************************************** //

void RunCommand::executeStart(const QHash<QString, QVariant>& /*attrs*/) {}

void RunCommand::executeUpdate(const QHash<QString, QVariant>& /*attrs*/) {}

void RunCommand::executeFinish(const QHash<QString, QVariant>& /*attrs*/)
{
    if(this->command != "") {
        QProcess* myProcess = new QProcess();
        myProcess->startDetached(this->command);
    }
}
