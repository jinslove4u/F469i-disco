
int test_cnt = 1000;

const uint16_t animationTab[] = {16,16,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87d8,0xdd8d,0xdddd,0xdddd,0x87d8,0xdd7d,0xdddd,0xdddd,0x87df,0xfd78,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdd0d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd0d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x00dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87d8,0xdd8d,0xdddd,0xdddd,0x87d8,0xdd7d,0xdddd,0xdddd,0x87df,0xfd78,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdd0d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd0d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x00dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87d8,0xdd8d,0xdddd,0xdddd,0x87d8,0xdd7d,0xdddd,0xdddd,0x87df,0xfd78,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdd0d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd0d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x00dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87d8,0xdd8d,0xdddd,0xdddd,0x87d8,0xdd7d,0xdddd,0xdddd,0x87df,0xfd78,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdd0d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd0d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x87dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x00dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xd777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87d8,0xdd8d,0xdddd,0xdddd,0x87d8,0xdd7d,0xdddd,0xdddd,0x87df,0xfd78,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55d0,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xd7dd,0xdd77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xf0dd,0xddf0,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x78d8,0xdd7d,0xdddd,0xdddd,0x87d8,0xdd78,0xdddd,0xdddd,0xf7d8,0xfd78,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xdd0d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x78d8,0xdd78,0xdddd,0xdddd,0x77d8,0xdd78,0xdddd,0xdddd,0x77df,0xdd7f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x77d7,0xdddd,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xf0d0,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x78dd,0xdd78,0xdddd,0xdddd,0x77d8,0xdd88,0xdddd,0xdddd,0x77f8,0xddf8,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd88,0xdddd,0xdddd,0x77dd,0xdd88,0xdddd,0xdddd,0x77f8,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdd0d,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x88df,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x05dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x50dd,0xdd0d,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd88,0xdddd,0xdddd,0x77dd,0xdd88,0xdddd,0xdddd,0x77f8,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdd0d,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x88df,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x05dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x50dd,0xdd0d,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd88,0xdddd,0xdddd,0x77dd,0xdd88,0xdddd,0xdddd,0x77f8,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdd0d,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x88df,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x05dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x50dd,0xdd0d,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd88,0xdddd,0xdddd,0x77dd,0xdd88,0xdddd,0xdddd,0x77f8,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x00dd,0xdd0d,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x88df,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x05dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd8d,0xdddd,0xdddd,0x77dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x50dd,0xdd0d,0xdddd,0xdddd,0xd0dd,0xdd0d,0xdddd,0xdddd,0x00dd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x7d77,0xdddd,0xdddd,0xdddd,0x7777,0x7dd7,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x0fdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x87dd,0xdd88,0xdddd,0xdddd,0x77dd,0xdd88,0xdddd,0xdddd,0x77f8,0xdd8f,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd50,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x77d7,0xdddd,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffd0,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x78dd,0xdd8d,0xdddd,0xdddd,0x78dd,0xdd8d,0xdddd,0xdddd,0x7fdd,0xdd8d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x88d8,0xdd88,0xdddd,0xdddd,0x88d8,0xdd88,0xdddd,0xdddd,0x88d8,0xdd88,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xdddd,0xd7dd,0xdd77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x7777,0x7d77,0xdddd,0xdddd,0x77dd,0xdd7d,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddf0,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0xffdd,0xddfd,0xdddd,0xdddd,0x88dd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd7d,0xdddd,0xdddd,0x8fdd,0xdd7d,0xdddd,0xdddd,0x88dd,0xdd8d,0xdddd,0xdddd,0x55dd,0xdd5d,0xdddd,0xdddd,0x0dd0,0xdd00,0xdddd};

Image animation = Image(animationTab, ColorMode::index, 40);

const uint16_t Sprite_0001Data[] = {16,16,2, 1, 0, 0, 
0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,
0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,
0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,
0x8aa7,0x8aa7,0x8aa7,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,
0x8aa7,0x8aa7,0x8aa7,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0x8aa7,0x8aa7,0x8aa7,0x8aa7,
0x8aa7,0x8aa7,0x8aa7,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,
0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,
0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0x8aa7,0x8aa7,
0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0xa986,0xa986,0xa986,0xa986,0xa986,0x5e7c,0x5e7c,0xa986,0xa986,0xa986,0xa986,0xa986,0x5e7c,0x5e7c,
0xffff,0xffff,0xa986,0xa986,0xa986,0xa986,0xa986,0xffff,0xffff,0xa986,0xa986,0xa986,0xa986,0xa986,0xffff,0xffff,

0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,
0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,
0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,0x8aa7,
0x8aa7,0x8aa7,0x8aa7,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,
0x8aa7,0x8aa7,0x8aa7,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0x8aa7,0x8aa7,0x8aa7,0x8aa7,
0x8aa7,0x8aa7,0x8aa7,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,
0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,
0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0x8aa7,0x8aa7,
0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,0xee13,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,
0x5e7c,0xa986,0xa986,0xa986,0xa986,0xa986,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0xa986,0xa986,0xa986,0xa986,0xa986,0x5e7c,
0xffff,0xa986,0xa986,0xa986,0xa986,0xa986,0xffff,0xffff,0xffff,0xffff,0xa986,0xa986,0xa986,0xa986,0xa986,0xffff
};
Image Sprite_0001 = Image(Sprite_0001Data);

const uint16_t Sprite_0002Data[] = {
  16,16,1, 1, 0, 0, 
0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,
0x6de6,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x39ee,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x5e7c,0x39ee,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x39ee,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0x34ad,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdd0c,0xdb84,0x6de6,
0x6de6,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0xdb84,0x6de6,
0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6,0x6de6
};
Image Sprite_0002 = Image(Sprite_0002Data);

uint16_t ball_x = 0;

  
void setup() {
  // put your setup code here, to run once:
  gb.begin();
  gb.display.clear();

  animation.setTransparentColor(ColorIndex::blue);
  animation.setFrame(0);  

  Sprite_0001.setTransparentColor(Color::white);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int cnt;
  static int mode = 0;
  
    if (gb.update())
    {
      gb.display.clear();
      gb.display.setCursor(0, 0);
      gb.display.setColor(WHITE);
//      if (gb.buttons.pressed(Button::a))
//      {
//        mode = (mode + 1)%3;
//      }

      gb.display.print("Mode : ");
      gb.display.println(mode);

      if (mode == 0)  // 자동차모양 이동 
      {
        gb.display.drawImage(ball_x, 50, Sprite_0001, 32, 32);
        animation.setFrame(0+ball_x%2);
        gb.display.setCursor(ball_x + 32, 50);
        gb.display.print(" 32x32");

        gb.display.drawImage(ball_x, 90, Sprite_0001, 24, 24);
        animation.setFrame(0+ball_x%2);
        gb.display.setCursor(ball_x + 32, 90);
        gb.display.print(" 24x24");

        gb.display.drawImage(ball_x, 120, Sprite_0001, 20, 20);
        animation.setFrame(0+ball_x%2);
        gb.display.setCursor(ball_x + 32, 120);
        gb.display.print(" 20x20");
                
        gb.display.drawImage(ball_x, 150, Sprite_0001);
        animation.setFrame(0+ball_x%2);
        gb.display.setCursor(ball_x + 32, 150);
        gb.display.print(" 16x16");

///        gb.display.drawImage(ball_x, 180, animation);
  
        ball_x = (ball_x + 1) % gb.display.width();
      }
      
      if (mode == 1)   // 블럭모양 표시 
      {
        for (int i=0; i<25; i++)
        {          
          gb.display.drawImage(i*16, 0, Sprite_0002);
          gb.display.drawImage(i*16, 14 * 16, Sprite_0002);
        }
        for (int i=0; i<15; i++)
        {          
          gb.display.drawImage(0, 16*i, Sprite_0002);
          gb.display.drawImage(24*16, 16*i, Sprite_0002);
        }        
      }
    }  
}
