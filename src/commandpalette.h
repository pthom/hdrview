
#pragma once

#include "dialog.h"
#include "filterablelist.h"
#include "searchbox.h"

NAMESPACE_BEGIN(nanogui)

class CommandPalette : public Dialog
{
public:
    CommandPalette(Widget *parent, const std::vector<MenuItem *> &commands = {});

    virtual bool keyboard_event(int key, int scancode, int action, int modifiers) override;
    virtual void draw(NVGcontext *ctx) override;

protected:
    SearchBox              *m_search_box  = nullptr;
    Widget                 *m_commandlist = nullptr;
    int                     m_current     = -1; ///< The currently selected item
    std::vector<MenuItem *> m_original_commands;
    std::vector<MenuItem *> m_commands;
};

NAMESPACE_END(nanogui)