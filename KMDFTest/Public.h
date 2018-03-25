/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_KMDFTest,
    0xd9870041,0x79e8,0x4636,0xa1,0x37,0x57,0xfe,0x24,0x7a,0xeb,0xc5);
// {d9870041-79e8-4636-a137-57fe247aebc5}
