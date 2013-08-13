#ifndef CMDSTREAM_XML
#define CMDSTREAM_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- /home/orion/projects/etna_viv/rnndb/cmdstream.xml (  12591 bytes, from 2013-08-12 07:48:56)
- /home/orion/projects/etna_viv/rnndb/common.xml    (  16005 bytes, from 2013-08-12 13:59:19)

Copyright (C) 2013
*/


#define FE_OPCODE_LOAD_STATE					0x00000001
#define FE_OPCODE_END						0x00000002
#define FE_OPCODE_NOP						0x00000003
#define FE_OPCODE_DRAW_2D					0x00000004
#define FE_OPCODE_DRAW_PRIMITIVES				0x00000005
#define FE_OPCODE_DRAW_INDEXED_PRIMITIVES			0x00000006
#define FE_OPCODE_WAIT						0x00000007
#define FE_OPCODE_LINK						0x00000008
#define FE_OPCODE_STALL						0x00000009
#define FE_OPCODE_CALL						0x0000000a
#define FE_OPCODE_RETURN					0x0000000b
#define FE_OPCODE_CHIP_SELECT					0x0000000d
#define PRIMITIVE_TYPE_POINTS					0x00000001
#define PRIMITIVE_TYPE_LINES					0x00000002
#define PRIMITIVE_TYPE_LINE_STRIP				0x00000003
#define PRIMITIVE_TYPE_TRIANGLES				0x00000004
#define PRIMITIVE_TYPE_TRIANGLE_STRIP				0x00000005
#define PRIMITIVE_TYPE_TRIANGLE_FAN				0x00000006
#define PRIMITIVE_TYPE_LINE_LOOP				0x00000007
#define PRIMITIVE_TYPE_QUADS					0x00000008
#define VIV_FE_LOAD_STATE					0x00000000

#define VIV_FE_LOAD_STATE_HEADER				0x00000000
#define VIV_FE_LOAD_STATE_HEADER_OP__MASK			0xf8000000
#define VIV_FE_LOAD_STATE_HEADER_OP__SHIFT			27
#define VIV_FE_LOAD_STATE_HEADER_OP_LOAD_STATE			0x08000000
#define VIV_FE_LOAD_STATE_HEADER_FIXP				0x04000000
#define VIV_FE_LOAD_STATE_HEADER_COUNT__MASK			0x03ff0000
#define VIV_FE_LOAD_STATE_HEADER_COUNT__SHIFT			16
#define VIV_FE_LOAD_STATE_HEADER_COUNT(x)			(((x) << VIV_FE_LOAD_STATE_HEADER_COUNT__SHIFT) & VIV_FE_LOAD_STATE_HEADER_COUNT__MASK)
#define VIV_FE_LOAD_STATE_HEADER_OFFSET__MASK			0x0000ffff
#define VIV_FE_LOAD_STATE_HEADER_OFFSET__SHIFT			0
#define VIV_FE_LOAD_STATE_HEADER_OFFSET(x)			(((x) << VIV_FE_LOAD_STATE_HEADER_OFFSET__SHIFT) & VIV_FE_LOAD_STATE_HEADER_OFFSET__MASK)
#define VIV_FE_LOAD_STATE_HEADER_OFFSET__SHR			2

#define VIV_FE_END						0x00000000

#define VIV_FE_END_HEADER					0x00000000
#define VIV_FE_END_HEADER_EVENT_ID__MASK			0x0000001f
#define VIV_FE_END_HEADER_EVENT_ID__SHIFT			0
#define VIV_FE_END_HEADER_EVENT_ID(x)				(((x) << VIV_FE_END_HEADER_EVENT_ID__SHIFT) & VIV_FE_END_HEADER_EVENT_ID__MASK)
#define VIV_FE_END_HEADER_EVENT_ENABLE				0x00000100
#define VIV_FE_END_HEADER_OP__MASK				0xf8000000
#define VIV_FE_END_HEADER_OP__SHIFT				27
#define VIV_FE_END_HEADER_OP_END				0x10000000

#define VIV_FE_NOP						0x00000000

#define VIV_FE_NOP_HEADER					0x00000000
#define VIV_FE_NOP_HEADER_OP__MASK				0xf8000000
#define VIV_FE_NOP_HEADER_OP__SHIFT				27
#define VIV_FE_NOP_HEADER_OP_NOP				0x18000000

#define VIV_FE_DRAW_2D						0x00000000

#define VIV_FE_DRAW_2D_HEADER					0x00000000
#define VIV_FE_DRAW_2D_HEADER_COUNT__MASK			0x0000ff00
#define VIV_FE_DRAW_2D_HEADER_COUNT__SHIFT			8
#define VIV_FE_DRAW_2D_HEADER_COUNT(x)				(((x) << VIV_FE_DRAW_2D_HEADER_COUNT__SHIFT) & VIV_FE_DRAW_2D_HEADER_COUNT__MASK)
#define VIV_FE_DRAW_2D_HEADER_DATA_COUNT__MASK			0x07ff0000
#define VIV_FE_DRAW_2D_HEADER_DATA_COUNT__SHIFT			16
#define VIV_FE_DRAW_2D_HEADER_DATA_COUNT(x)			(((x) << VIV_FE_DRAW_2D_HEADER_DATA_COUNT__SHIFT) & VIV_FE_DRAW_2D_HEADER_DATA_COUNT__MASK)
#define VIV_FE_DRAW_2D_HEADER_OP__MASK				0xf8000000
#define VIV_FE_DRAW_2D_HEADER_OP__SHIFT				27
#define VIV_FE_DRAW_2D_HEADER_OP_DRAW_2D			0x20000000

#define VIV_FE_DRAW_2D_TOP_LEFT					0x00000008
#define VIV_FE_DRAW_2D_TOP_LEFT_X__MASK				0x0000ffff
#define VIV_FE_DRAW_2D_TOP_LEFT_X__SHIFT			0
#define VIV_FE_DRAW_2D_TOP_LEFT_X(x)				(((x) << VIV_FE_DRAW_2D_TOP_LEFT_X__SHIFT) & VIV_FE_DRAW_2D_TOP_LEFT_X__MASK)
#define VIV_FE_DRAW_2D_TOP_LEFT_Y__MASK				0xffff0000
#define VIV_FE_DRAW_2D_TOP_LEFT_Y__SHIFT			16
#define VIV_FE_DRAW_2D_TOP_LEFT_Y(x)				(((x) << VIV_FE_DRAW_2D_TOP_LEFT_Y__SHIFT) & VIV_FE_DRAW_2D_TOP_LEFT_Y__MASK)

#define VIV_FE_DRAW_2D_BOTTOM_RIGHT				0x0000000c
#define VIV_FE_DRAW_2D_BOTTOM_RIGHT_X__MASK			0x0000ffff
#define VIV_FE_DRAW_2D_BOTTOM_RIGHT_X__SHIFT			0
#define VIV_FE_DRAW_2D_BOTTOM_RIGHT_X(x)			(((x) << VIV_FE_DRAW_2D_BOTTOM_RIGHT_X__SHIFT) & VIV_FE_DRAW_2D_BOTTOM_RIGHT_X__MASK)
#define VIV_FE_DRAW_2D_BOTTOM_RIGHT_Y__MASK			0xffff0000
#define VIV_FE_DRAW_2D_BOTTOM_RIGHT_Y__SHIFT			16
#define VIV_FE_DRAW_2D_BOTTOM_RIGHT_Y(x)			(((x) << VIV_FE_DRAW_2D_BOTTOM_RIGHT_Y__SHIFT) & VIV_FE_DRAW_2D_BOTTOM_RIGHT_Y__MASK)

#define VIV_FE_DRAW_PRIMITIVES					0x00000000

#define VIV_FE_DRAW_PRIMITIVES_HEADER				0x00000000
#define VIV_FE_DRAW_PRIMITIVES_HEADER_OP__MASK			0xf8000000
#define VIV_FE_DRAW_PRIMITIVES_HEADER_OP__SHIFT			27
#define VIV_FE_DRAW_PRIMITIVES_HEADER_OP_DRAW_PRIMITIVES	0x28000000

#define VIV_FE_DRAW_PRIMITIVES_COMMAND				0x00000004
#define VIV_FE_DRAW_PRIMITIVES_COMMAND_TYPE__MASK		0x000000ff
#define VIV_FE_DRAW_PRIMITIVES_COMMAND_TYPE__SHIFT		0
#define VIV_FE_DRAW_PRIMITIVES_COMMAND_TYPE(x)			(((x) << VIV_FE_DRAW_PRIMITIVES_COMMAND_TYPE__SHIFT) & VIV_FE_DRAW_PRIMITIVES_COMMAND_TYPE__MASK)

#define VIV_FE_DRAW_PRIMITIVES_START				0x00000008

#define VIV_FE_DRAW_PRIMITIVES_COUNT				0x0000000c

#define VIV_FE_DRAW_INDEXED_PRIMITIVES				0x00000000

#define VIV_FE_DRAW_INDEXED_PRIMITIVES_HEADER			0x00000000
#define VIV_FE_DRAW_INDEXED_PRIMITIVES_HEADER_OP__MASK		0xf8000000
#define VIV_FE_DRAW_INDEXED_PRIMITIVES_HEADER_OP__SHIFT		27
#define VIV_FE_DRAW_INDEXED_PRIMITIVES_HEADER_OP_DRAW_INDEXED_PRIMITIVES	0x30000000

#define VIV_FE_DRAW_INDEXED_PRIMITIVES_COMMAND			0x00000004
#define VIV_FE_DRAW_INDEXED_PRIMITIVES_COMMAND_TYPE__MASK	0x000000ff
#define VIV_FE_DRAW_INDEXED_PRIMITIVES_COMMAND_TYPE__SHIFT	0
#define VIV_FE_DRAW_INDEXED_PRIMITIVES_COMMAND_TYPE(x)		(((x) << VIV_FE_DRAW_INDEXED_PRIMITIVES_COMMAND_TYPE__SHIFT) & VIV_FE_DRAW_INDEXED_PRIMITIVES_COMMAND_TYPE__MASK)

#define VIV_FE_DRAW_INDEXED_PRIMITIVES_START			0x00000008

#define VIV_FE_DRAW_INDEXED_PRIMITIVES_COUNT			0x0000000c

#define VIV_FE_DRAW_INDEXED_PRIMITIVES_OFFSET			0x00000010

#define VIV_FE_WAIT						0x00000000

#define VIV_FE_WAIT_HEADER					0x00000000
#define VIV_FE_WAIT_HEADER_DELAY__MASK				0x0000ffff
#define VIV_FE_WAIT_HEADER_DELAY__SHIFT				0
#define VIV_FE_WAIT_HEADER_DELAY(x)				(((x) << VIV_FE_WAIT_HEADER_DELAY__SHIFT) & VIV_FE_WAIT_HEADER_DELAY__MASK)
#define VIV_FE_WAIT_HEADER_OP__MASK				0xf8000000
#define VIV_FE_WAIT_HEADER_OP__SHIFT				27
#define VIV_FE_WAIT_HEADER_OP_WAIT				0x38000000

#define VIV_FE_LINK						0x00000000

#define VIV_FE_LINK_HEADER					0x00000000
#define VIV_FE_LINK_HEADER_PREFETCH__MASK			0x0000ffff
#define VIV_FE_LINK_HEADER_PREFETCH__SHIFT			0
#define VIV_FE_LINK_HEADER_PREFETCH(x)				(((x) << VIV_FE_LINK_HEADER_PREFETCH__SHIFT) & VIV_FE_LINK_HEADER_PREFETCH__MASK)
#define VIV_FE_LINK_HEADER_OP__MASK				0xf8000000
#define VIV_FE_LINK_HEADER_OP__SHIFT				27
#define VIV_FE_LINK_HEADER_OP_LINK				0x40000000

#define VIV_FE_LINK_ADDRESS					0x00000004

#define VIV_FE_STALL						0x00000000

#define VIV_FE_STALL_HEADER					0x00000000
#define VIV_FE_STALL_HEADER_OP__MASK				0xf8000000
#define VIV_FE_STALL_HEADER_OP__SHIFT				27
#define VIV_FE_STALL_HEADER_OP_STALL				0x48000000

#define VIV_FE_STALL_TOKEN					0x00000004
#define VIV_FE_STALL_TOKEN_FROM__MASK				0x0000001f
#define VIV_FE_STALL_TOKEN_FROM__SHIFT				0
#define VIV_FE_STALL_TOKEN_FROM(x)				(((x) << VIV_FE_STALL_TOKEN_FROM__SHIFT) & VIV_FE_STALL_TOKEN_FROM__MASK)
#define VIV_FE_STALL_TOKEN_TO__MASK				0x00001f00
#define VIV_FE_STALL_TOKEN_TO__SHIFT				8
#define VIV_FE_STALL_TOKEN_TO(x)				(((x) << VIV_FE_STALL_TOKEN_TO__SHIFT) & VIV_FE_STALL_TOKEN_TO__MASK)

#define VIV_FE_CALL						0x00000000

#define VIV_FE_CALL_HEADER					0x00000000
#define VIV_FE_CALL_HEADER_PREFETCH__MASK			0x0000ffff
#define VIV_FE_CALL_HEADER_PREFETCH__SHIFT			0
#define VIV_FE_CALL_HEADER_PREFETCH(x)				(((x) << VIV_FE_CALL_HEADER_PREFETCH__SHIFT) & VIV_FE_CALL_HEADER_PREFETCH__MASK)
#define VIV_FE_CALL_HEADER_OP__MASK				0xf8000000
#define VIV_FE_CALL_HEADER_OP__SHIFT				27
#define VIV_FE_CALL_HEADER_OP_CALL				0x50000000

#define VIV_FE_CALL_ADDRESS					0x00000004

#define VIV_FE_CALL_RETURN_PREFETCH				0x00000008

#define VIV_FE_CALL_RETURN_ADDRESS				0x0000000c

#define VIV_FE_RETURN						0x00000000

#define VIV_FE_RETURN_HEADER					0x00000000
#define VIV_FE_RETURN_HEADER_OP__MASK				0xf8000000
#define VIV_FE_RETURN_HEADER_OP__SHIFT				27
#define VIV_FE_RETURN_HEADER_OP_RETURN				0x58000000

#define VIV_FE_CHIP_SELECT					0x00000000

#define VIV_FE_CHIP_SELECT_HEADER				0x00000000
#define VIV_FE_CHIP_SELECT_HEADER_OP__MASK			0xf8000000
#define VIV_FE_CHIP_SELECT_HEADER_OP__SHIFT			27
#define VIV_FE_CHIP_SELECT_HEADER_OP_CHIP_SELECT		0x68000000
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP15			0x00008000
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP14			0x00004000
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP13			0x00002000
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP12			0x00001000
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP11			0x00000800
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP10			0x00000400
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP9			0x00000200
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP8			0x00000100
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP7			0x00000080
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP6			0x00000040
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP5			0x00000020
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP4			0x00000010
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP3			0x00000008
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP2			0x00000004
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP1			0x00000002
#define VIV_FE_CHIP_SELECT_HEADER_ENABLE_CHIP0			0x00000001


#endif /* CMDSTREAM_XML */
