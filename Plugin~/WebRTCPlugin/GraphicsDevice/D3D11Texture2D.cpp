#include "pch.h"
#include "D3D11Texture2D.h"

namespace WebRTC {

//[TODO-Sin; 2019-10-11] pass ID3D11Texture2D directly?
D3D11Texture2D::D3D11Texture2D(int w, int h) : ITexture2D(w,h) {
    D3D11_TEXTURE2D_DESC desc = { 0 };
    desc.Width = m_width;
    desc.Height = m_height;
    desc.MipLevels = 1;
    desc.ArraySize = 1;
    desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
    desc.SampleDesc.Count = 1;
    desc.Usage = D3D11_USAGE_DEFAULT;
    desc.BindFlags = D3D11_BIND_RENDER_TARGET;
    desc.CPUAccessFlags = 0;
    HRESULT r = g_D3D11Device->CreateTexture2D(&desc, NULL, &m_texture);
}

} //end namespace
