/*
 * DISTRHO Plugin Framework (DPF)
 * Copyright (C) 2012-2014 Filipe Coelho <falktx@falktx.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any purpose with
 * or without fee is hereby granted, provided that the above copyright notice and this
 * permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD
 * TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN
 * NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
 * IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef DGL_IMAGE_ABOUT_WINDOW_HPP_INCLUDED
#define DGL_IMAGE_ABOUT_WINDOW_HPP_INCLUDED

#include "Image.hpp"
#include "Widget.hpp"
#include "Window.hpp"

START_NAMESPACE_DGL

// -----------------------------------------------------------------------

class ImageAboutWindow : public Window,
                         public Widget
{
public:
    explicit ImageAboutWindow(Window& parent, const Image& image = Image());
    explicit ImageAboutWindow(Widget* widget, const Image& image = Image());

    void setImage(const Image& image);

protected:
    void onDisplay() override;
    bool onKeyboard(const KeyboardEvent&) override;
    bool onMouse(const MouseEvent&) override;
    void onReshape(uint width, uint height) override;

private:
    Image fImgBackground;

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ImageAboutWindow)
};

// -----------------------------------------------------------------------

END_NAMESPACE_DGL

#endif // DGL_IMAGE_ABOUT_WINDOW_HPP_INCLUDED