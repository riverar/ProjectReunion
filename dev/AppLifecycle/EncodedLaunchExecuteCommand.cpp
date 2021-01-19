// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "EncodedLaunchExecuteCommand.h"

namespace winrt::Microsoft::ProjectReunion::implementation
{
    IFACEMETHODIMP EncodedLaunchExecuteCommand::Execute() noexcept try
    {
        if (IsDebuggerPresent())
        {
            __debugbreak();
        }
        return E_NOTIMPL;
    }
    CATCH_RETURN()
}
