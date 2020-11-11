/*****************************************************************************
#                                                                            *
# Copyright 2019 AT&T Intellectual Property                                  *
#                                                                            *
# Licensed under the Apache License, Version 2.0 (the "License");            *
# you may not use this file except in compliance with the License.           *
# You may obtain a copy of the License at                                    *
#                                                                            *
#      http://www.apache.org/licenses/LICENSE-2.0                            *
#                                                                            *
# Unless required by applicable law or agreed to in writing, software        *
# distributed under the License is distributed on an "AS IS" BASIS,          *
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
# See the License for the specific language governing permissions and        *
# limitations under the License.                                             *
#                                                                            *
******************************************************************************/

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asnFiles/X2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_M3period_H_
#define	_M3period_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M3period {
	M3period_ms100	= 0,
	M3period_ms1000	= 1,
	M3period_ms10000	= 2
	/*
	 * Enumeration is extensible
	 */
} e_M3period;

/* M3period */
typedef long	 M3period_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M3period_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M3period;
extern const asn_INTEGER_specifics_t asn_SPC_M3period_specs_1;
asn_struct_free_f M3period_free;
asn_struct_print_f M3period_print;
asn_constr_check_f M3period_constraint;
ber_type_decoder_f M3period_decode_ber;
der_type_encoder_f M3period_encode_der;
xer_type_decoder_f M3period_decode_xer;
xer_type_encoder_f M3period_encode_xer;
per_type_decoder_f M3period_decode_uper;
per_type_encoder_f M3period_encode_uper;
per_type_decoder_f M3period_decode_aper;
per_type_encoder_f M3period_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M3period_H_ */
#include "asn_internal.h"
