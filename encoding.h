#ifndef ENCODING_H
#define ENCODING_H

#define GF_16_CASE		 0

#if (1 == GF_16_CASE)
#define GF_FIELD        16
#define MESSAGE_LEN     9
#else
#define GF_FIELD        8
#define MESSAGE_LEN     3
#endif
#define CODEWORD_LEN    GF_FIELD - 1    

extern unsigned char power_polynomial_table[GF_FIELD][2];
extern unsigned char message_polynomial[MESSAGE_LEN];

extern unsigned char evaluation_encoding();
extern unsigned char systematic_encoding();

#endif