extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init(void *);
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown(void *);
extern SteamAPICall_t cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser(void *, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize(void *, HHTMLBrowser, uint32, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript(void *, HHTMLBrowser, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel(void *, HHTMLBrowser, int32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find(void *, HHTMLBrowser, const char *, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie(void *, const char *, const char *, const char *, const char *, RTime32, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor(void *, HHTMLBrowser, float, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor(void *, HHTMLBrowser, float);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse(void *, HHTMLBrowser, const char **);
