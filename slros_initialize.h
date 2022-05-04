#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block cbf_with_error/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_with_error_std_msgs_Float64> Sub_cbf_with_error_429;

// For Block cbf_with_error/Subscribe4
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_with_error_geometry_msgs_Twist> Sub_cbf_with_error_430;

// For Block cbf_with_error/Subscribe5
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_with_error_geometry_msgs_Twist> Sub_cbf_with_error_431;

// For Block cbf_with_error/Subscribe6
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_with_error_std_msgs_Float64> Sub_cbf_with_error_476;

// For Block cbf_with_error/Subscribe7
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_cbf_with_error_std_msgs_Bool> Sub_cbf_with_error_481;

// For Block cbf_with_error/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_cbf_with_error_std_msgs_Float64> Pub_cbf_with_error_401;

// For Block cbf_with_error/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_cbf_with_error_geometry_msgs_Twist> Pub_cbf_with_error_520;

// For Block cbf_with_error/cbf_filter/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_447;

// For Block cbf_with_error/cbf_filter/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_448;

// For Block cbf_with_error/cbf_filter/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_449;

// For Block cbf_with_error/cbf_filter/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_450;

// For Block cbf_with_error/cbf_filter/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_463;

// For Block cbf_with_error/cbf_filter/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_465;

void slros_node_init(int argc, char** argv);

#endif
