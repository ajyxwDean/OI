
#include <bits/stdc++.h>
#include <windows.h>
#pragma comment(lib, "urlmon.lib")
using namespace std;
#include <Urlmon.h>
#define UNICODE

#define L(a) L##a

class DownloadProgress : public IBindStatusCallback {
public:
    HRESULT __stdcall QueryInterface(const IID &, void **) {
        return E_NOINTERFACE;
    }
    ULONG STDMETHODCALLTYPE AddRef(void) {
        return 1;
    }
    ULONG STDMETHODCALLTYPE Release(void) {
        return 1;
    }
    HRESULT STDMETHODCALLTYPE OnStartBinding(DWORD dwReserved, IBinding *pib) {
        return E_NOTIMPL;
    }
    virtual HRESULT STDMETHODCALLTYPE GetPriority(LONG *pnPriority) {
        return E_NOTIMPL;
    }
    virtual HRESULT STDMETHODCALLTYPE OnLowResource(DWORD reserved) {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE OnStopBinding(HRESULT hresult, LPCWSTR szError) {
        return E_NOTIMPL;
    }
    virtual HRESULT STDMETHODCALLTYPE GetBindInfo(DWORD *grfBINDF, BINDINFO *pbindinfo) {
        return E_NOTIMPL;
    }
    virtual HRESULT STDMETHODCALLTYPE OnDataAvailable(DWORD grfBSCF, DWORD dwSize, FORMATETC *pformatetc, STGMEDIUM *pstgmed) {
        return E_NOTIMPL;
    }
    virtual HRESULT STDMETHODCALLTYPE OnObjectAvailable(REFIID riid, IUnknown *punk) {
        return E_NOTIMPL;
    }

    virtual HRESULT __stdcall OnProgress(ULONG ulProgress, ULONG ulProgressMax, ULONG ulStatusCode, LPCWSTR szStatusText)
    {
        if (ulProgressMax != 0)
        {
            double *percentage = new double(ulProgress * 1.0 / ulProgressMax * 100);
            //将percentage 发送给显示
            delete percentage;
        }   
        return S_OK;
    }
};

int Download(string NetPath, string DownPath)                 //窗口的显示形式（最小化、隐藏、最大化等）
{
    LPCWSTR url = WCHAR*(NetPath.c_str());
    LPCWSTR file_path = DownPath.c_str();
    DownloadProgress progress;
    IBindStatusCallback* callback = (IBindStatusCallback*)&progress;
    URLDownloadToFileW(NULL, url, NULL,  static_cast<IBindStatusCallback*>(&progress));

}

int main() {
    Download("https://th.wallhaven.cc/small/ex/ex9gwo.jpg","C:\\Users\\13582\\Desktop\\wallpaper1.png");
    return 0;
}