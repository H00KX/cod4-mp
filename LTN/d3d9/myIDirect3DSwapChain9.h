#ifndef __MYIDIRECT3DSWAPCHAIN9_H__
#define __MYIDIRECT3DSWAPCHAIN9_H__


class myIDirect3DSwapChain9 : public IDirect3DSwapChain9
{
public:
	myIDirect3DSwapChain9(IDirect3DSwapChain9* pOriginal, IDirect3DDevice9* pDevice);
	virtual ~myIDirect3DSwapChain9(void);

	HRESULT __stdcall QueryInterface(REFIID riid, void** ppvObj);
	ULONG   __stdcall AddRef(void);
	ULONG   __stdcall Release(void);
	HRESULT __stdcall Present(CONST RECT* pSourceRect, CONST RECT* pDestRect, HWND hDestWindowOverride, CONST RGNDATA* pDirtyRegion, DWORD dwFlags);
	HRESULT __stdcall GetFrontBufferData(IDirect3DSurface9* pDestSurface);
	HRESULT __stdcall GetBackBuffer(UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface9** ppBackBuffer);
	HRESULT __stdcall GetRasterStatus(D3DRASTER_STATUS* pRasterStatus);
	HRESULT __stdcall GetDisplayMode(D3DDISPLAYMODE* pMode);
	HRESULT __stdcall GetDevice(IDirect3DDevice9** ppDevice);
	HRESULT __stdcall GetPresentParameters(D3DPRESENT_PARAMETERS* pPresentationParameters);

private:
	IDirect3DSwapChain9   *m_pIDirect3DSwapChain9;
	IDirect3DDevice9	  *m_pIDirect3DDevice9;
};



#endif /* __MYIDIRECT3DSWAPCHAIN9_H__ */