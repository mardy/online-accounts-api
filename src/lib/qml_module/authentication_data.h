/*
 * This file is part of OnlineAccountsModule
 *
 * Copyright (C) 2015 Canonical Ltd.
 *
 * Contact: Alberto Mardegan <alberto.mardegan@canonical.com>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License version 3, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ONLINE_ACCOUNTS_MODULE_AUTHENTICATION_DATA_H
#define ONLINE_ACCOUNTS_MODULE_AUTHENTICATION_DATA_H

namespace OnlineAccounts {
class PendingCall;
}

#include "OnlineAccounts/AuthenticationData"
#include <QVariantMap>

QVariantMap replyToMap(const OnlineAccounts::PendingCall &call,
                       OnlineAccounts::AuthenticationMethod method);

OnlineAccounts::AuthenticationData
authenticationDataFromMap(const QVariantMap &params,
                          OnlineAccounts::AuthenticationMethod method =
                          OnlineAccounts::AuthenticationMethodUnknown);

#endif // ONLINE_ACCOUNTS_MODULE_AUTHENTICATION_DATA_H
