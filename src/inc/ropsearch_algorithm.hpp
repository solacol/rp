/*
    This file is part of rp++.

    Copyright (C) 2014, Axel "0vercl0k" Souchet <0vercl0k at tuxfamily.org>
    All rights reserved.

    rp++ is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    rp++ is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with rp++.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef ROPSEARCH_ALGORITHM_HPP
#define ROPSEARCH_ALGORITHM_HPP

#include <set>
#include <memory>
#include <mutex>
#include "gadget.hpp"
#include "disassenginewrapper.hpp"

void find_rop_gadgets(
    const uint8_t* data,
    uint64_t size,
    uint64_t vaddr,
    uint32_t depth,
    std::multiset<std::shared_ptr<Gadget>> &merged_gadgets,
    DisassEngineWrapper &disass_engine,
    std::mutex &m
);

#endif