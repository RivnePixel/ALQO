#ifndef H_CHAINPARAMSSEEDS
#define H_CHAINPARAMSSEEDS

// Each line contains a 16-byte IPv6 address and a port.
// IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
static SeedSpec6 pnSeed6_main[] = {
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x55,0x19,0x8a,0x40}, 55500},
    
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x7F,0x00,0x00,0x01}, 55500}

};

static SeedSpec6 pnSeed6_test[] = {
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x50,0xd1,0xe4,0xc4}, 55600},
	
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x50,0xd1,0xe4,0xc3}, 55600}
};
#endif
