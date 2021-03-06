/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_SonarScan.
 */

#ifndef BASE_SAMPLES_SONARSCAN_CONVERT
#define BASE_SAMPLES_SONARSCAN_CONVERT

#include "baseTypes.h"
#include <base/samples/SonarScan.hpp>
#include <base/samples/SonarScan.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Base-TimeConvert.hpp"
#include "Base-AngleConvert.hpp"
#include "Base-AngleConvert.hpp"
#include "Base-AngleConvert.hpp"
#include "Base-AngleConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_SonarScan_fromAsn1(base::samples::SonarScan& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_SonarScan_data=numBase_samples_SonarScan_data,     asn1SccT_UInt32 length_numBase_samples_SonarScan_time_beams=numBase_samples_SonarScan_time_beams)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    result.data.resize(asnVal.data.nCount);
    for(int i = 0; i < asnVal.data.nCount;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

    result.time_beams.resize(asnVal.time_beams.nCount);
    for(int i = 0; i < asnVal.time_beams.nCount;i++)
    {
        asn1SccBase_Time_fromAsn1(result.time_beams[i], asnVal.time_beams.arr[i]);
    }

    result.number_of_beams = asnVal.number_of_beams;

    result.number_of_bins = asnVal.number_of_bins;

    asn1SccBase_Angle_fromAsn1(result.start_bearing, asnVal.start_bearing);

    asn1SccBase_Angle_fromAsn1(result.angular_resolution, asnVal.angular_resolution);

    result.sampling_interval = asnVal.sampling_interval;

    result.speed_of_sound = asnVal.speed_of_sound;

    asn1SccBase_Angle_fromAsn1(result.beamwidth_horizontal, asnVal.beamwidth_horizontal);

    asn1SccBase_Angle_fromAsn1(result.beamwidth_vertical, asnVal.beamwidth_vertical);

    result.memory_layout_column = asnVal.memory_layout_column;

    result.polar_coordinates = asnVal.polar_coordinates;

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_SonarScan_toAsn1(T & result, const base::samples::SonarScan& baseObj,    asn1SccT_UInt32 length_numBase_samples_SonarScan_data=numBase_samples_SonarScan_data,     asn1SccT_UInt32 length_numBase_samples_SonarScan_time_beams=numBase_samples_SonarScan_time_beams)
{


    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    if( baseObj.data.size() > numBase_samples_SonarScan_data)
    {
        fprintf(stderr, "WARNING:  truncated data of asn1SccBase_samples_SonarScan to %lld elements.\n",numBase_samples_SonarScan_data);
        result.data.nCount = numBase_samples_SonarScan_data;
    }
    else
    {
        result.data.nCount = baseObj.data.size();
    }

    for(int i = 0; i < result.data.nCount ;i++)
    {
        result.data.arr[i]= baseObj.data[i];
    }

    if( baseObj.time_beams.size() > numBase_samples_SonarScan_time_beams)
    {
        fprintf(stderr, "WARNING:  truncated time_beams of asn1SccBase_samples_SonarScan to %lld elements.\n",numBase_samples_SonarScan_time_beams);
        result.time_beams.nCount = numBase_samples_SonarScan_time_beams;
    }
    else
    {
        result.time_beams.nCount = baseObj.time_beams.size();
    }

    for(int i = 0; i < result.time_beams.nCount;i++)
    {
        asn1SccBase_Time_toAsn1(result.time_beams.arr[i], baseObj.time_beams[i]);
    }


    result.number_of_beams = baseObj.number_of_beams;


    result.number_of_bins = baseObj.number_of_bins;


    asn1SccBase_Angle_toAsn1(result.start_bearing, baseObj.start_bearing);


    asn1SccBase_Angle_toAsn1(result.angular_resolution, baseObj.angular_resolution);


    result.sampling_interval = baseObj.sampling_interval;


    result.speed_of_sound = baseObj.speed_of_sound;


    asn1SccBase_Angle_toAsn1(result.beamwidth_horizontal, baseObj.beamwidth_horizontal);


    asn1SccBase_Angle_toAsn1(result.beamwidth_vertical, baseObj.beamwidth_vertical);


    result.memory_layout_column = baseObj.memory_layout_column;


    result.polar_coordinates = baseObj.polar_coordinates;

}


#endif //BASE_SAMPLES_SONARSCAN_CONVERT
