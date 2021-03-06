/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#ifndef INCLUDED_CEventRateAnomalyDetectorTest_h
#define INCLUDED_CEventRateAnomalyDetectorTest_h

#include <cppunit/extensions/HelperMacros.h>

class CEventRateAnomalyDetectorTest : public CppUnit::TestFixture {
public:
    void testAnomalies();
    void testPersist();

    static CppUnit::Test* suite();
};

#endif // INCLUDED_CEventRateAnomalyDetectorTest_h
