﻿#pragma once

namespace WebRTC {

struct ITexture2D {
public:
    //[TODO-Sin: 2019-19-11] ITexture2D should not be created directly, but should be called using
    //GraphicsDevice->CreateEncoderInputTexture

    ITexture2D(uint32_t w, uint32_t h) : m_width (w), m_height(h) {}
    bool IsSize(uint32_t w, uint32_t h) { return m_width == w && m_height == h; }

    virtual ~ITexture2D() = 0;
    virtual void* GetResourcePtrV() = 0;
    virtual const void* GetResourcePtrV() const = 0;

protected:
    uint32_t m_width;
    uint32_t m_height;


};

}
