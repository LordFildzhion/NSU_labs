#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

typedef struct UFS_Node
{
    uint16_t link;
    uint16_t size;
} ufs_node;

ufs_node *create_UFS(uint16_t n);

void delete_UFS(ufs_node *UFS);

uint16_t find(ufs_node *UFS, uint16_t x);

bool same(ufs_node *UFS, uint16_t a, uint16_t b);

void unite(ufs_node *UFS, uint16_t a, uint16_t b);

