#ifndef EDGE_H
#define EDGE_H

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

typedef struct Edge
{
    uint16_t from;
    uint16_t to;
    uint32_t number;
    int32_t length;
} edge;

void delete_edges(edge **edges, edge *tops, uint32_t m);

edge **scan_edges(edge *tops, uint16_t n, uint32_t m);

#endif 