/* Copyright 2010 Ilkka Halila
 This file is part of Goblin Camp.
 
 Goblin Camp is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 Goblin Camp is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License 
 along with Goblin Camp. If not, see <http://www.gnu.org/licenses/>.*/
#pragma once

#include <string>
#include <vector>

#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <boost/weak_ptr.hpp>
#include <libtcod.hpp>

#include "UIComponents.hpp"

class Dialog: public Panel {
private:
    std::vector<Drawable *> components;
    std::string title;
public:
    Dialog(std::vector<Drawable *>, std::string, int, int);
    ~Dialog();
    void AddComponent(Drawable *component);
    void Draw(int, int, TCODConsole *);
    MenuResult Update(int, int, bool, TCOD_key_t);
    void SetTitle(std::string ntitle);
    void SetHeight(int nheight);
};
