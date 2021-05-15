// Copyright (c) 2021 Bimal Bhagrath
// MIT License. See COPYING for more details.

#ifndef _ETHASH_H
#define _ETHASH_H 1

void ethash_shake128(const unsigned char *input, unsigned int inputByteLen, unsigned char *output, int outputByteLen);

void ethash_shake256(const unsigned char *input, unsigned int inputByteLen, unsigned char *output, int outputByteLen);

void ethash_sha3_224(const unsigned char *input, unsigned int inputByteLen, unsigned char *output);

void ethash_sha3_256(const unsigned char *input, unsigned int inputByteLen, unsigned char *output);

void ethash_sha3_384(const unsigned char *input, unsigned int inputByteLen, unsigned char *output);

void ethash_sha3_512(const unsigned char *input, unsigned int inputByteLen, unsigned char *output);

#endif
