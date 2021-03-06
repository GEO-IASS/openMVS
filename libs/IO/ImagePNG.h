////////////////////////////////////////////////////////////////////
// ImagePNG.h
//
// Copyright 2007 cDc@seacave
// Distributed under the Boost Software License, Version 1.0
// (See http://www.boost.org/LICENSE_1_0.txt)

#ifndef __SEACAVE_IMAGEPNG_H__
#define __SEACAVE_IMAGEPNG_H__


// D E F I N E S ///////////////////////////////////////////////////


// I N C L U D E S /////////////////////////////////////////////////

#include "Image.h"


namespace SEACAVE {

// S T R U C T S ///////////////////////////////////////////////////

class GENERAL_API CImagePNG : public CImage
{
public:
	CImagePNG();
	virtual ~CImagePNG();

	void		Close();

	HRESULT		ReadHeader();
	HRESULT		ReadData(void*, PIXELFORMAT, UINT nStride, UINT lineWidth);
	HRESULT		WriteHeader(PIXELFORMAT, UINT width, UINT height, BYTE numLevels);
	HRESULT		WriteData(void*, PIXELFORMAT, UINT nStride, UINT lineWidth);

protected:
	void*		m_png_ptr;
	void*		m_info_ptr;
	bool		bRead;
}; // class CImagePNG
/*----------------------------------------------------------------*/

} // namespace SEACAVE

#endif // __SEACAVE_IMAGEPNG_H__
