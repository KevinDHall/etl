///\file

/******************************************************************************
The MIT License(MIT)

Embedded Template Library.

Copyright(c) 2014 jwellbelove

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************/

#ifndef __ETL_IBITSET__
#define __ETL_IBITSET__

namespace etl
{
  //*************************************************************************
  /// The base class for etl::bitset
  ///\ingroup bitset
  //*************************************************************************
  class ibitset
  {
  public:

    //*************************************************************************
    /// Default constructor.
    //*************************************************************************
    ibitset()
    {
    }

    //*************************************************************************
    /// Destructor.
    //*************************************************************************
    virtual ~ibitset()
    {
    }

    //*************************************************************************
    /// Set the bit at the position.
    //*************************************************************************
    virtual ibitset& set(size_t position, bool value = true) = 0;

    //*************************************************************************
    /// Reset the bit at the position.
    //*************************************************************************
    virtual ibitset& reset(size_t position) = 0;

    //*************************************************************************
    /// Finds the first bit in the specified state.
    ///\param state The state to search for.
    ///\returns The position of the bit or SIZE if none were found.
    //*************************************************************************
    virtual size_t find_first(bool state) const = 0;
  };
}

#endif
