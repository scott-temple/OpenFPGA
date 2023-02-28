#ifndef ROUTE_CLOCK_RR_GRAPH_H
#define ROUTE_CLOCK_RR_GRAPH_H

/********************************************************************
 * Include header files that are required by function declaration
 *******************************************************************/
#include "clock_network.h"
#include "rr_clock_spatial_lookup.h"
#include "vpr_context.h"
#include "vpr_routing_annotation.h"

/********************************************************************
 * Function declaration
 *******************************************************************/

/* begin namespace openfpga */
namespace openfpga {

int route_clock_rr_graph(VprRoutingAnnotation& vpr_routing_annotation,
                         const DeviceContext& vpr_device_ctx,
                         const RRClockSpatialLookup& clk_rr_lookup,
                         const ClockNetwork& clk_ntwk, const bool& verbose);

} /* end namespace openfpga */

#endif
