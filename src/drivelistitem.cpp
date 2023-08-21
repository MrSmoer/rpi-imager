/*
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2020 Raspberry Pi Ltd
 */

#include "drivelistitem.h"

DriveListItem::DriveListItem(QString device, QString description, quint64 size, QDateTime attachTimestamp, bool isUsb, bool isScsi, bool readOnly, QStringList mountpoints, QObject *parent)
    : QObject(parent), _device(device), _description(description), _mountpoints(mountpoints), _size(size), _attachTimestamp(attachTimestamp), _isUsb(isUsb), _isScsi(isScsi), _isReadOnly(readOnly)
{

}

int DriveListItem::sizeInGb()
{
    return _size / 1000000000;
}
