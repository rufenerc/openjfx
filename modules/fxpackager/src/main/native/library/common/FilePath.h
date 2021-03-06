/*
 * Copyright (c) 2014, Oracle and/or its affiliates.
 * All rights reserved. Use is subject to license terms.
 *
 * This file is available and licensed under the following license:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the distribution.
 *  - Neither the name of Oracle Corporation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef FILEPATH_H
#define FILEPATH_H

#include "Platform.h"
#include "PlatformString.h"


class FilePath {
private:
    FilePath(void) {}
    ~FilePath(void) {}

public:
    static bool FileExists(const TString FileName);
    static bool DirectoryExists(const TString DirectoryName);

    static bool DeleteFile(const TString FileName);

    static TString ExtractFilePath(TString Path);
    static TString ExtractFileExt(TString Path);
    static TString ExtractFileName(TString Path);
    static TString ChangeFileExt(TString Path, TString Extension);

    static TString IncludeTrailingSlash(const TString value);
    static TString IncludeTrailingSlash(const char* value);
    static TString IncludeTrailingSlash(const wchar_t* value);
    static TString FixPathSeparatorForPlatform(TString Path);
    static TString PathSeparator();

    static bool CreateDirectory(TString Path, bool ownerOnly);
    static void ChangePermissions(TString FileName, bool ownerOnly);
};

#endif //FILEPATH_H
