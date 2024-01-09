/*
* Copyright (C) 2024 by Claudio Cambra <claudio.cambra@nextcloud.com>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*/

#include <QObject>

#pragma once

namespace OCC::Mac
{

class FileProviderDomainSyncStatus : public QObject
{
    Q_OBJECT

public:
    explicit FileProviderDomainSyncStatus(const QString &domainIdentifier, QObject *parent = nullptr);

private:
    class MacImplementation;
    std::unique_ptr<MacImplementation> d;
};

} // OCC::Mac
