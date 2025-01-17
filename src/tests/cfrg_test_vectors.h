#ifndef cfrg_test_vectors_h
#define cfrg_test_vectors_h

#include <stdint.h>

#define auth_key_len 64
const uint8_t auth_key[auth_key_len] = {
   0x41, 0xf7, 0xbc, 0xf8, 0x44, 0x40, 0xb1, 0xfc,
   0x5a, 0x22, 0x78, 0x4e, 0xd3, 0x36, 0xbd, 0xd1,
   0x98, 0x26, 0xb7, 0x5c, 0x27, 0xda, 0x9b, 0xf6,
   0x32, 0xf3, 0xea, 0x31, 0xd3, 0x5e, 0xcd, 0x40,
   0xdd, 0x0a, 0x4c, 0xe2, 0xef, 0xd6, 0x5d, 0x62,
   0x6a, 0xc2, 0xfd, 0xf3, 0x14, 0xa6, 0x7a, 0x96,
   0x77, 0xa6, 0x39, 0x97, 0x3a, 0x55, 0xad, 0x0a,
   0x8d, 0x25, 0x37, 0x6f, 0x97, 0x7f, 0x58, 0x50};

#define client_mac_key_len 64
const uint8_t client_mac_key[client_mac_key_len] = {
   0x5e, 0x51, 0x55, 0xd5, 0xc5, 0x0d, 0x05, 0x52,
   0x3a, 0x52, 0x86, 0xe7, 0xf8, 0x18, 0x4e, 0x8c,
   0xcf, 0xf1, 0x06, 0xb3, 0x5e, 0xf6, 0xff, 0x9b,
   0xff, 0xe1, 0x5e, 0x3e, 0x9e, 0x52, 0x3b, 0xa8,
   0x83, 0xab, 0x22, 0x1a, 0x72, 0x3a, 0x63, 0x42,
   0x3e, 0x66, 0xa4, 0x13, 0x1c, 0x2d, 0x78, 0x50,
   0x0c, 0x2a, 0x4f, 0x5b, 0x48, 0x26, 0x50, 0xa3,
   0xc7, 0x7c, 0xc0, 0x84, 0xd0, 0x7d, 0x2e, 0x48};

#define client_public_key_len 32
const uint8_t client_public_key[client_public_key_len] = {
   0x56, 0xe3, 0xeb, 0xa1, 0x64, 0x84, 0x6e, 0x1f,
   0x6f, 0x7a, 0xad, 0xc1, 0xfc, 0xce, 0x5a, 0xfc,
   0xce, 0x28, 0x73, 0xc8, 0x72, 0x4b, 0x40, 0x3e,
   0xbb, 0xd1, 0xcc, 0x28, 0xc1, 0x40, 0xc4, 0x08};

#define envelope_len 96
const uint8_t envelope[envelope_len] = {
   0xac, 0x13, 0x17, 0x1b, 0x2f, 0x17, 0xbc, 0x2c,
   0x74, 0x99, 0x7f, 0x0f, 0xce, 0x1e, 0x1f, 0x35,
   0xbe, 0xc6, 0xb9, 0x1f, 0xe2, 0xe1, 0x2d, 0xbd,
   0x32, 0x3d, 0x23, 0xba, 0x7a, 0x38, 0xdf, 0xec,
   0xb4, 0x0d, 0xfd, 0x4a, 0xf6, 0xc8, 0x76, 0x12,
   0xaa, 0x10, 0x1d, 0xbc, 0x7d, 0x19, 0x09, 0xda,
   0xaa, 0x8e, 0xb8, 0x92, 0x28, 0x01, 0xf6, 0xb6,
   0x3e, 0x45, 0x92, 0xec, 0x93, 0xa3, 0x53, 0x32,
   0xe8, 0x6e, 0x63, 0x7b, 0x46, 0x5d, 0xea, 0x3b,
   0x66, 0x54, 0xa0, 0xf2, 0xb9, 0x35, 0xa3, 0x7a,
   0x27, 0xd3, 0x3f, 0x02, 0x0b, 0x48, 0xac, 0x96,
   0x31, 0x8e, 0x6c, 0xd1, 0xac, 0xcc, 0x0d, 0xdb};

#define handshake_secret_len 64
const uint8_t handshake_secret[handshake_secret_len] = {
   0x8d, 0xa2, 0x14, 0x27, 0xb9, 0x33, 0x9f, 0x06,
   0x07, 0x5a, 0xdb, 0xbd, 0xb5, 0x67, 0x2b, 0x9b,
   0x47, 0x07, 0x93, 0xdd, 0x15, 0x18, 0x75, 0xa6,
   0x3f, 0x39, 0x7e, 0x87, 0x45, 0x4d, 0x27, 0x60,
   0xe4, 0x6c, 0x5d, 0xb7, 0x1f, 0x47, 0x6a, 0xa2,
   0xb1, 0x8f, 0xeb, 0x5f, 0x6c, 0x16, 0xdc, 0xf4,
   0x0b, 0x3b, 0xc7, 0xbf, 0x4d, 0x0f, 0x23, 0x5e,
   0x62, 0xbf, 0xe3, 0xf6, 0x20, 0x83, 0x8f, 0xc8};

#define masking_key_len 64
const uint8_t masking_key[masking_key_len] = {
   0x5f, 0x7e, 0x46, 0x78, 0xe8, 0x4c, 0x30, 0x04,
   0xcb, 0x1c, 0x07, 0xba, 0x9e, 0x51, 0x27, 0xb0,
   0x73, 0x4c, 0x65, 0x01, 0x1c, 0xaa, 0xd9, 0x56,
   0x2a, 0x2e, 0x1c, 0xa3, 0xdd, 0x9a, 0xd5, 0x58,
   0x47, 0x19, 0xa4, 0xdf, 0x8c, 0x54, 0x27, 0xb1,
   0x9f, 0xf7, 0x59, 0xb4, 0xd2, 0xde, 0x47, 0x30,
   0x19, 0x23, 0x27, 0x20, 0x49, 0x8f, 0x0d, 0x4f,
   0x7f, 0x76, 0xb0, 0x3a, 0xf3, 0x04, 0xce, 0xb2};

#define oprf_key_len 32
const uint8_t oprf_key[oprf_key_len] = {
   0x37, 0x31, 0xdd, 0xbb, 0xaa, 0xfc, 0x56, 0xd3,
   0xb4, 0xb5, 0x96, 0xa9, 0xb0, 0x7d, 0x67, 0xc9,
   0xe8, 0xf9, 0xb2, 0xc1, 0x72, 0x3d, 0xb7, 0xea,
   0xef, 0x0b, 0x33, 0x23, 0x0a, 0xce, 0xd9, 0x05};

#define randomized_pwd_len 64
const uint8_t randomized_pwd[randomized_pwd_len] = {
   0x59, 0x87, 0xbf, 0x92, 0xfa, 0xdc, 0x6e, 0xd1,
   0xe1, 0x91, 0xec, 0xd4, 0x6e, 0xd7, 0x35, 0x37,
   0x1a, 0x02, 0xe1, 0x19, 0xdd, 0x0a, 0x31, 0xb9,
   0xbe, 0x15, 0x0f, 0x77, 0xb3, 0x0f, 0x9a, 0x89,
   0xd0, 0x54, 0x4e, 0xe2, 0x04, 0xc9, 0x68, 0x46,
   0xb1, 0xb7, 0xb8, 0x17, 0x67, 0xfa, 0x7f, 0xe6,
   0x32, 0xf1, 0xd2, 0xc5, 0x62, 0x9b, 0xaf, 0x50,
   0xfd, 0x99, 0xbc, 0xca, 0x8e, 0xed, 0x2e, 0xa1};

#define server_mac_key_len 64
const uint8_t server_mac_key[server_mac_key_len] = {
   0x7a, 0x7a, 0xab, 0xf7, 0x03, 0x3b, 0x98, 0x2d,
   0x5b, 0x5e, 0xb3, 0x13, 0xbd, 0x96, 0x3c, 0x35,
   0x11, 0x8a, 0x5a, 0xca, 0xba, 0xcd, 0xaa, 0x38,
   0x89, 0xe5, 0x12, 0x95, 0x08, 0x8a, 0x40, 0xf7,
   0x93, 0xec, 0x2e, 0xcb, 0xd9, 0x4b, 0x86, 0x8d,
   0x8e, 0x6c, 0x05, 0xeb, 0x3c, 0xb5, 0xa3, 0xb4,
   0xc1, 0x1d, 0xfa, 0xfd, 0x39, 0xeb, 0xca, 0x3c,
   0x53, 0xc6, 0x5e, 0xbc, 0x43, 0xd2, 0x72, 0x3d};

#define ke1_len 96
const uint8_t ke1[ke1_len] = {
   0x42, 0xf0, 0x5c, 0x7b, 0xb8, 0x35, 0x09, 0x6a,
   0xe3, 0xb2, 0x7d, 0xf8, 0xdf, 0x9a, 0x55, 0x35,
   0x3e, 0xff, 0xf6, 0x12, 0x6a, 0x89, 0x6c, 0xc5,
   0x60, 0x2d, 0xa6, 0x73, 0xc2, 0x5b, 0x8e, 0x4f,
   0xda, 0x7e, 0x07, 0x37, 0x6d, 0x6d, 0x6f, 0x03,
   0x4c, 0xfa, 0x9b, 0xb5, 0x37, 0xd1, 0x1b, 0x8c,
   0x6b, 0x42, 0x38, 0xc3, 0x34, 0x33, 0x3d, 0x1f,
   0x0a, 0xeb, 0xb3, 0x80, 0xca, 0xe6, 0xa6, 0xcc,
   0x0c, 0x3a, 0x00, 0xc9, 0x61, 0xfe, 0xad, 0x8a,
   0x16, 0xf8, 0x18, 0x92, 0x9c, 0xc9, 0x76, 0xf0,
   0x47, 0x5e, 0x4f, 0x72, 0x35, 0x19, 0x31, 0x8b,
   0x96, 0xf4, 0x94, 0x7a, 0x7a, 0x5f, 0x96, 0x63};

#define ke2_len 320
const uint8_t ke2[ke2_len] = {
   0x56, 0x50, 0x86, 0x80, 0x23, 0x3c, 0x0a, 0x3f,
   0x1d, 0x60, 0x10, 0x84, 0x90, 0x58, 0x7b, 0xaa,
   0xd9, 0xf6, 0x59, 0x5c, 0x2d, 0xcf, 0xfd, 0x67,
   0x3d, 0x32, 0xc6, 0x32, 0x53, 0x8b, 0xf9, 0x0c,
   0x38, 0xfe, 0x59, 0xaf, 0x0d, 0xf2, 0xc7, 0x9f,
   0x57, 0xb8, 0x78, 0x02, 0x78, 0xf5, 0xae, 0x47,
   0x35, 0x5f, 0xe1, 0xf8, 0x17, 0x11, 0x90, 0x41,
   0x95, 0x1c, 0x80, 0xf6, 0x12, 0xfd, 0xfc, 0x6d,
   0xa9, 0xc0, 0x57, 0x71, 0x41, 0x2c, 0x97, 0x66,
   0x2d, 0x61, 0x7d, 0x7a, 0xed, 0x65, 0x99, 0x5f,
   0xfe, 0xfa, 0xe3, 0xaa, 0x9c, 0xe5, 0x1f, 0xa4,
   0xbd, 0x49, 0xe5, 0x3c, 0x28, 0xb1, 0x95, 0xd1,
   0x1b, 0x08, 0x8d, 0xf7, 0x60, 0xe0, 0xfb, 0x9a,
   0x08, 0x8e, 0xb6, 0x62, 0x16, 0x07, 0x84, 0x88,
   0x9f, 0xad, 0x2c, 0xe8, 0xf0, 0xe3, 0x8b, 0xfe,
   0x48, 0x41, 0xe3, 0x6f, 0x38, 0x08, 0xfc, 0x0f,
   0x04, 0x59, 0xc9, 0xd3, 0x8b, 0x6e, 0xad, 0xe3,
   0xa4, 0x0d, 0x47, 0xe8, 0xb0, 0x9f, 0xe0, 0x05,
   0x88, 0x4f, 0xba, 0xbd, 0x7b, 0x2a, 0xe6, 0xcb,
   0xdc, 0x57, 0x04, 0x2e, 0x6d, 0xd0, 0xa8, 0x84,
   0x7c, 0x40, 0x3d, 0xf7, 0x3a, 0x54, 0x6c, 0xd1,
   0x81, 0xf6, 0x95, 0x70, 0x35, 0xd9, 0x5e, 0x47,
   0x94, 0x15, 0xba, 0x01, 0xdf, 0x17, 0x11, 0x96,
   0x2a, 0xff, 0x54, 0xcf, 0x87, 0xb2, 0xd1, 0x04,
   0x71, 0xcd, 0x99, 0x60, 0xec, 0xef, 0x2f, 0xe0,
   0xd0, 0xf7, 0x49, 0x49, 0x86, 0xfa, 0x3d, 0x8b,
   0x2b, 0xb0, 0x19, 0x63, 0x53, 0x7e, 0x60, 0xef,
   0xb1, 0x39, 0x81, 0xe1, 0x38, 0xe3, 0xd4, 0xa1,
   0xc8, 0xc3, 0x9f, 0x57, 0x31, 0x35, 0x47, 0x4c,
   0x51, 0x66, 0x0b, 0x02, 0x42, 0x5b, 0xca, 0x63,
   0x3e, 0x33, 0x9c, 0xec, 0x4e, 0x1a, 0xcc, 0x69,
   0xc9, 0x4d, 0xd4, 0x84, 0x97, 0xfe, 0x40, 0x28,
   0x0f, 0xdd, 0xdc, 0xba, 0x81, 0x1a, 0x8c, 0x89,
   0x13, 0x34, 0x1f, 0xd6, 0xbf, 0x33, 0xf8, 0x1b,
   0x4a, 0xd7, 0xcb, 0x9c, 0xba, 0xd2, 0xeb, 0x9a,
   0x3e, 0x10, 0x63, 0x5c, 0x8e, 0x1d, 0x28, 0x9a,
   0xeb, 0xf0, 0x5d, 0x78, 0xe8, 0xe6, 0xdb, 0xd1,
   0x96, 0xdb, 0x7e, 0xc0, 0x2d, 0xfc, 0x2e, 0x12,
   0x64, 0x6c, 0xef, 0xfa, 0x1f, 0xd4, 0x83, 0xf4,
   0xe4, 0xff, 0xb8, 0x1e, 0xd7, 0x51, 0xdf, 0x04};

#define ke3_len 64
const uint8_t ke3[ke3_len] = {
   0x9f, 0x5a, 0x91, 0xd8, 0x07, 0x40, 0x45, 0x8c,
   0x71, 0x8b, 0x2a, 0x73, 0xb9, 0x3d, 0x26, 0x77,
   0xdb, 0x26, 0xa8, 0x09, 0xf9, 0x60, 0xf8, 0x09,
   0xb5, 0xf9, 0x0c, 0xc5, 0x70, 0x6f, 0x28, 0x66,
   0xb4, 0xac, 0x3b, 0x85, 0xf3, 0x8d, 0xf2, 0x75,
   0x26, 0x81, 0x73, 0x3e, 0x43, 0x67, 0x3d, 0xd0,
   0xcf, 0x08, 0xd9, 0x60, 0x0b, 0xcd, 0xbf, 0x8d,
   0x54, 0x8e, 0x95, 0x66, 0x1a, 0xe4, 0x1c, 0x71};

#define export_key_len 64
const uint8_t export_key[export_key_len] = {
   0x6a, 0xd4, 0xeb, 0xd8, 0xb6, 0xec, 0x23, 0x92,
   0xaa, 0x2a, 0x73, 0xc9, 0x68, 0x88, 0x5f, 0x6f,
   0xd4, 0x31, 0x6d, 0x40, 0x84, 0x7c, 0xda, 0x02,
   0x2b, 0x7a, 0xa9, 0x30, 0x19, 0xb9, 0xed, 0xbb,
   0x72, 0x69, 0x95, 0x81, 0x12, 0x65, 0xfc, 0xea,
   0xb3, 0xbc, 0x44, 0xde, 0x78, 0x31, 0x8a, 0xca,
   0x26, 0xe2, 0x44, 0x88, 0xc9, 0xf1, 0xed, 0x1a,
   0x44, 0xb4, 0x6f, 0x83, 0x6a, 0x63, 0x49, 0xba};

#define registration_request_len 32
const uint8_t registration_request[registration_request_len] = {
   0x46, 0x99, 0x3e, 0x4d, 0x9a, 0xd1, 0x49, 0x59,
   0xfd, 0x88, 0x20, 0x72, 0xd5, 0xcd, 0x4f, 0x61,
   0x52, 0x9a, 0xea, 0xa7, 0xd5, 0x68, 0x86, 0x9e,
   0xa7, 0xa6, 0x40, 0xd4, 0x8a, 0xf0, 0xa0, 0x4e};

#define registration_response_len 64
const uint8_t registration_response[registration_response_len] = {
   0xb0, 0x5f, 0x44, 0xc4, 0x7d, 0xc6, 0xc2, 0xf1,
   0x36, 0x4a, 0xcc, 0x9f, 0xbe, 0xc3, 0x0d, 0xfc,
   0xd9, 0x70, 0x91, 0x54, 0x29, 0xd6, 0x6e, 0xdb,
   0xdf, 0x87, 0x97, 0x78, 0xee, 0x98, 0x27, 0x69,
   0xb2, 0xfe, 0x7a, 0xf9, 0xf4, 0x8c, 0xc5, 0x02,
   0xd0, 0x16, 0x72, 0x9d, 0x2f, 0xe2, 0x5c, 0xdd,
   0x43, 0x3f, 0x2c, 0x4b, 0xc9, 0x04, 0x66, 0x0b,
   0x2a, 0x38, 0x2c, 0x9b, 0x79, 0xdf, 0x1a, 0x78};

#define registration_upload_len 192
const uint8_t registration_upload[registration_upload_len] = {
   0x56, 0xe3, 0xeb, 0xa1, 0x64, 0x84, 0x6e, 0x1f,
   0x6f, 0x7a, 0xad, 0xc1, 0xfc, 0xce, 0x5a, 0xfc,
   0xce, 0x28, 0x73, 0xc8, 0x72, 0x4b, 0x40, 0x3e,
   0xbb, 0xd1, 0xcc, 0x28, 0xc1, 0x40, 0xc4, 0x08,
   0x5f, 0x7e, 0x46, 0x78, 0xe8, 0x4c, 0x30, 0x04,
   0xcb, 0x1c, 0x07, 0xba, 0x9e, 0x51, 0x27, 0xb0,
   0x73, 0x4c, 0x65, 0x01, 0x1c, 0xaa, 0xd9, 0x56,
   0x2a, 0x2e, 0x1c, 0xa3, 0xdd, 0x9a, 0xd5, 0x58,
   0x47, 0x19, 0xa4, 0xdf, 0x8c, 0x54, 0x27, 0xb1,
   0x9f, 0xf7, 0x59, 0xb4, 0xd2, 0xde, 0x47, 0x30,
   0x19, 0x23, 0x27, 0x20, 0x49, 0x8f, 0x0d, 0x4f,
   0x7f, 0x76, 0xb0, 0x3a, 0xf3, 0x04, 0xce, 0xb2,
   0xac, 0x13, 0x17, 0x1b, 0x2f, 0x17, 0xbc, 0x2c,
   0x74, 0x99, 0x7f, 0x0f, 0xce, 0x1e, 0x1f, 0x35,
   0xbe, 0xc6, 0xb9, 0x1f, 0xe2, 0xe1, 0x2d, 0xbd,
   0x32, 0x3d, 0x23, 0xba, 0x7a, 0x38, 0xdf, 0xec,
   0xb4, 0x0d, 0xfd, 0x4a, 0xf6, 0xc8, 0x76, 0x12,
   0xaa, 0x10, 0x1d, 0xbc, 0x7d, 0x19, 0x09, 0xda,
   0xaa, 0x8e, 0xb8, 0x92, 0x28, 0x01, 0xf6, 0xb6,
   0x3e, 0x45, 0x92, 0xec, 0x93, 0xa3, 0x53, 0x32,
   0xe8, 0x6e, 0x63, 0x7b, 0x46, 0x5d, 0xea, 0x3b,
   0x66, 0x54, 0xa0, 0xf2, 0xb9, 0x35, 0xa3, 0x7a,
   0x27, 0xd3, 0x3f, 0x02, 0x0b, 0x48, 0xac, 0x96,
   0x31, 0x8e, 0x6c, 0xd1, 0xac, 0xcc, 0x0d, 0xdb};

#define session_key_len 64
const uint8_t session_key[session_key_len] = {
   0x5a, 0x10, 0xff, 0xb0, 0xd1, 0xa4, 0xbc, 0xd9,
   0xe9, 0x3b, 0xdc, 0xb9, 0x12, 0x06, 0x4d, 0x2c,
   0xf5, 0x98, 0x0d, 0x3d, 0x59, 0xe0, 0x85, 0xaf,
   0xcd, 0xc7, 0x3e, 0xbe, 0x8d, 0xfa, 0x01, 0x26,
   0xab, 0xde, 0x0a, 0x20, 0x16, 0xc5, 0xef, 0x9d,
   0xf3, 0xe4, 0x2a, 0x50, 0x3d, 0xd8, 0x8f, 0xf1,
   0xbd, 0x28, 0x7f, 0x85, 0x68, 0xa8, 0x68, 0x31,
   0xa1, 0x43, 0xdc, 0x25, 0x82, 0x33, 0x26, 0x9c};

#define blind_login_len 32
const uint8_t blind_login[blind_login_len] = {
   0x6e, 0xcc, 0x10, 0x2d, 0x2e, 0x7a, 0x7c, 0xf4,
   0x96, 0x17, 0xaa, 0xd7, 0xbb, 0xe1, 0x88, 0x55,
   0x67, 0x92, 0xd4, 0xac, 0xd6, 0x0a, 0x1a, 0x8a,
   0x8d, 0x2b, 0x65, 0xd4, 0xb0, 0x79, 0x03, 0x08};

#define blind_registration_len 32
const uint8_t blind_registration[blind_registration_len] = {
   0x76, 0xcf, 0xbf, 0xe7, 0x58, 0xdb, 0x88, 0x4b,
   0xeb, 0xb3, 0x35, 0x82, 0x33, 0x1b, 0xa9, 0xf1,
   0x59, 0x72, 0x0c, 0xa8, 0x78, 0x4a, 0x2a, 0x07,
   0x0a, 0x26, 0x5d, 0x9c, 0x2d, 0x6a, 0xbe, 0x01};

#define client_keyshare_len 32
const uint8_t client_keyshare[client_keyshare_len] = {
   0x0c, 0x3a, 0x00, 0xc9, 0x61, 0xfe, 0xad, 0x8a,
   0x16, 0xf8, 0x18, 0x92, 0x9c, 0xc9, 0x76, 0xf0,
   0x47, 0x5e, 0x4f, 0x72, 0x35, 0x19, 0x31, 0x8b,
   0x96, 0xf4, 0x94, 0x7a, 0x7a, 0x5f, 0x96, 0x63};

#define client_nonce_len 32
const uint8_t client_nonce[client_nonce_len] = {
   0xda, 0x7e, 0x07, 0x37, 0x6d, 0x6d, 0x6f, 0x03,
   0x4c, 0xfa, 0x9b, 0xb5, 0x37, 0xd1, 0x1b, 0x8c,
   0x6b, 0x42, 0x38, 0xc3, 0x34, 0x33, 0x3d, 0x1f,
   0x0a, 0xeb, 0xb3, 0x80, 0xca, 0xe6, 0xa6, 0xcc};

#define client_private_keyshare_len 32
const uint8_t client_private_keyshare[client_private_keyshare_len] = {
   0x22, 0xc9, 0x19, 0x13, 0x4c, 0x9b, 0xdd, 0x9d,
   0xc0, 0xc5, 0xef, 0x34, 0x50, 0xf1, 0x8b, 0x54,
   0x82, 0x0f, 0x43, 0xf6, 0x46, 0xa9, 0x52, 0x23,
   0xbf, 0x4a, 0x85, 0xb2, 0x01, 0x8c, 0x20, 0x01};

#define credential_identifier_len 4
const uint8_t credential_identifier[credential_identifier_len] = {
   0x31, 0x32, 0x33, 0x34};

#define envelope_nonce_len 32
const uint8_t envelope_nonce[envelope_nonce_len] = {
   0xac, 0x13, 0x17, 0x1b, 0x2f, 0x17, 0xbc, 0x2c,
   0x74, 0x99, 0x7f, 0x0f, 0xce, 0x1e, 0x1f, 0x35,
   0xbe, 0xc6, 0xb9, 0x1f, 0xe2, 0xe1, 0x2d, 0xbd,
   0x32, 0x3d, 0x23, 0xba, 0x7a, 0x38, 0xdf, 0xec};

#define masking_nonce_len 32
const uint8_t masking_nonce[masking_nonce_len] = {
   0x38, 0xfe, 0x59, 0xaf, 0x0d, 0xf2, 0xc7, 0x9f,
   0x57, 0xb8, 0x78, 0x02, 0x78, 0xf5, 0xae, 0x47,
   0x35, 0x5f, 0xe1, 0xf8, 0x17, 0x11, 0x90, 0x41,
   0x95, 0x1c, 0x80, 0xf6, 0x12, 0xfd, 0xfc, 0x6d};

#define oprf_seed_len 64
const uint8_t oprf_seed[oprf_seed_len] = {
   0xf4, 0x33, 0xd0, 0x22, 0x7b, 0x0b, 0x9d, 0xd5,
   0x4f, 0x7c, 0x44, 0x22, 0xb6, 0x00, 0xe7, 0x64,
   0xe4, 0x7f, 0xb5, 0x03, 0xf1, 0xf9, 0xa0, 0xf0,
   0xa4, 0x7c, 0x66, 0x06, 0xb0, 0x54, 0xa7, 0xfd,
   0xc6, 0x53, 0x47, 0xf1, 0xa0, 0x8f, 0x27, 0x7e,
   0x22, 0x35, 0x8b, 0xba, 0xbe, 0x26, 0xf8, 0x23,
   0xfc, 0xa8, 0x2c, 0x78, 0x48, 0xe9, 0xa7, 0x56,
   0x61, 0xf4, 0xec, 0x5d, 0x5c, 0x19, 0x89, 0xef};

#define password_len 25
const uint8_t password[password_len] = {
   0x43, 0x6f, 0x72, 0x72, 0x65, 0x63, 0x74, 0x48,
   0x6f, 0x72, 0x73, 0x65, 0x42, 0x61, 0x74, 0x74,
   0x65, 0x72, 0x79, 0x53, 0x74, 0x61, 0x70, 0x6c,
   0x65};

#define server_keyshare_len 32
const uint8_t server_keyshare[server_keyshare_len] = {
   0xc8, 0xc3, 0x9f, 0x57, 0x31, 0x35, 0x47, 0x4c,
   0x51, 0x66, 0x0b, 0x02, 0x42, 0x5b, 0xca, 0x63,
   0x3e, 0x33, 0x9c, 0xec, 0x4e, 0x1a, 0xcc, 0x69,
   0xc9, 0x4d, 0xd4, 0x84, 0x97, 0xfe, 0x40, 0x28};

#define server_nonce_len 32
const uint8_t server_nonce[server_nonce_len] = {
   0x71, 0xcd, 0x99, 0x60, 0xec, 0xef, 0x2f, 0xe0,
   0xd0, 0xf7, 0x49, 0x49, 0x86, 0xfa, 0x3d, 0x8b,
   0x2b, 0xb0, 0x19, 0x63, 0x53, 0x7e, 0x60, 0xef,
   0xb1, 0x39, 0x81, 0xe1, 0x38, 0xe3, 0xd4, 0xa1};

#define server_private_key_len 32
const uint8_t server_private_key[server_private_key_len] = {
   0x47, 0x45, 0x1a, 0x85, 0x37, 0x2f, 0x8b, 0x35,
   0x37, 0xe2, 0x49, 0xd7, 0xb5, 0x41, 0x88, 0x09,
   0x1f, 0xb1, 0x8e, 0xdd, 0xe7, 0x80, 0x94, 0xb4,
   0x3e, 0x2b, 0xa4, 0x2b, 0x5e, 0xb8, 0x9f, 0x0d};

#define server_private_keyshare_len 32
const uint8_t server_private_keyshare[server_private_keyshare_len] = {
   0x2e, 0x84, 0x29, 0x60, 0x25, 0x8a, 0x95, 0xe2,
   0x8b, 0xcf, 0xef, 0x48, 0x9c, 0xff, 0xd1, 0x9d,
   0x8e, 0xc9, 0x9c, 0xc1, 0x37, 0x5d, 0x84, 0x0f,
   0x96, 0x93, 0x6d, 0xa7, 0xdb, 0xb0, 0xb4, 0x0d};

#define server_public_key_len 32
const uint8_t server_public_key[server_public_key_len] = {
   0xb2, 0xfe, 0x7a, 0xf9, 0xf4, 0x8c, 0xc5, 0x02,
   0xd0, 0x16, 0x72, 0x9d, 0x2f, 0xe2, 0x5c, 0xdd,
   0x43, 0x3f, 0x2c, 0x4b, 0xc9, 0x04, 0x66, 0x0b,
   0x2a, 0x38, 0x2c, 0x9b, 0x79, 0xdf, 0x1a, 0x78};

#endif
