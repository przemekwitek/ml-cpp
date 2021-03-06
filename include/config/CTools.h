/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#ifndef INCLUDED_ml_config_CTools_h
#define INCLUDED_ml_config_CTools_h

#include <core/CoreTypes.h>

#include <config/ImportExport.h>

#include <stdint.h>
#include <string>

namespace ml {
namespace config {

//! \brief Utility functionality for auto-configuration.
class CONFIG_EXPORT CTools {
public:
    //! Get a 32 bit integer category corresponding to \p value.
    static uint32_t category32(const std::string& value);

    //! Get a 32 bit integer category corresponding to \p category64.
    static uint32_t category32(std::size_t category64);

    //! Get a 64 bit integer identifier corresponding to \p value.
    static std::size_t category64(const std::string& value);

    //! Linearly interpolate the penalties (a, p(a)) and (b, p(b))
    //! at x.
    static double interpolate(double a, double b, double pa, double pb, double x);

    //! Interpolate using the p'th power between (a, p(a)) and
    //! (b, p(b)) at x.
    static double powInterpolate(double p, double a, double b, double pa, double pb, double x);

    //! Logarithmically interpolate the penalties (a, p(a)) and
    //! (b, p(b)) at x.
    static double logInterpolate(double a, double b, double pa, double pb, double x);

    //! Print a double in a human friendly format.
    static std::string prettyPrint(double d);

    //! Print a time in seconds in a human friendly format.
    static std::string prettyPrint(core_t::TTime time);
};
}
}

#endif // INCLUDED_ml_config_CTools_h
