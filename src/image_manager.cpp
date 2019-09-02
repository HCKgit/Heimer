// This file is part of Heimer.
// Copyright (C) 2019 Jussi Lind <jussi.lind@iki.fi>
//
// Heimer is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// Heimer is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Heimer. If not, see <http://www.gnu.org/licenses/>.

#include "image_manager.hpp"

#include "contrib/SimpleLogger/src/simple_logger.hpp"

ImageManager::ImageManager()
{
}

int ImageManager::addImage(const Image & image)
{
    m_images[m_count++] = image;

    juzzlin::L().info() << "Adding new image, path=" << image.path << ", id=" << m_count;

    return m_count;
}

Image ImageManager::getImage(int id)
{
    return m_images[id];
}
