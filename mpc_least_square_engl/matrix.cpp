/************************************************************************************
 *
 * Class Matrix
 *  Lihat ke matrix.h untuk deskripsi lebih lanjut
 * 
 * See https://github.com/pronenewbits for more!
 *************************************************************************************/


#include "matrix.h"


Matrix operator + (const float_prec _scalar, Matrix _mat)
{
    Matrix _outp(_mat.i32getRow(), _mat.i32getColumn());

    for (int32_t _i = 0; _i < _mat.i32getRow(); _i++) {
        for (int32_t _j = 0; _j < _mat.i32getColumn(); _j++) {
            _outp[_i][_j] = _scalar + _mat[_i][_j];
        }
    }
    return _outp;
}


Matrix operator - (const float_prec _scalar, Matrix _mat)
{
    Matrix _outp(_mat.i32getRow(), _mat.i32getColumn());

    for (int32_t _i = 0; _i < _mat.i32getRow(); _i++) {
        for (int32_t _j = 0; _j < _mat.i32getColumn(); _j++) {
            _outp[_i][_j] = _scalar - _mat[_i][_j];
        }
    }
    return _outp;
}


Matrix operator * (const float_prec _scalar, Matrix _mat)
{
    Matrix _outp(_mat.i32getRow(), _mat.i32getColumn());

    for (int32_t _i = 0; _i < _mat.i32getRow(); _i++) {
        for (int32_t _j = 0; _j < _mat.i32getColumn(); _j++) {
            _outp[_i][_j] = _scalar * _mat[_i][_j];
        }
    }
    return _outp;
}


Matrix operator + (Matrix _mat, const float_prec _scalar)
{
    Matrix _outp(_mat.i32getRow(), _mat.i32getColumn());

    for (int32_t _i = 0; _i < _mat.i32getRow(); _i++) {
        for (int32_t _j = 0; _j < _mat.i32getColumn(); _j++) {
            _outp[_i][_j] = _mat[_i][_j] + _scalar;
        }
    }
    return _outp;
}


Matrix operator - (Matrix _mat, const float_prec _scalar)
{
    Matrix _outp(_mat.i32getRow(), _mat.i32getColumn());

    for (int32_t _i = 0; _i < _mat.i32getRow(); _i++) {
        for (int32_t _j = 0; _j < _mat.i32getColumn(); _j++) {
            _outp[_i][_j] = _mat[_i][_j] - _scalar;
        }
    }
    return _outp;
}


Matrix operator * (Matrix _mat, const float_prec _scalar)
{
    Matrix _outp(_mat.i32getRow(), _mat.i32getColumn());

    for (int32_t _i = 0; _i < _mat.i32getRow(); _i++) {
        for (int32_t _j = 0; _j < _mat.i32getColumn(); _j++) {
            _outp[_i][_j] = _mat[_i][_j] * _scalar;
        }
    }
    return _outp;
}


Matrix operator / (Matrix _mat, const float_prec _scalar)
{
    Matrix _outp(_mat.i32getRow(), _mat.i32getColumn());

    if (fabs(_scalar) < float_prec(float_prec_ZERO)) {
        _outp.vSetMatrixInvalid();
        return _outp;
    }
    for (int32_t _i = 0; _i < _mat.i32getRow(); _i++) {
        for (int32_t _j = 0; _j < _mat.i32getColumn(); _j++) {
            _outp[_i][_j] = _mat[_i][_j] / _scalar;
        }
    }
    return _outp;
}

