/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_BandCombination-v1560.h"

#include "ASN_RRC_CA-ParametersNRDC.h"
#include "ASN_RRC_CA-ParametersEUTRA-v1560.h"
#include "ASN_RRC_CA-ParametersNR-v1560.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ASN_RRC_ne_DC_BC_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_RRC_ne_DC_BC_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ASN_RRC_ne_DC_BC_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_RRC_ne_DC_BC_specs_2 = {
	asn_MAP_ASN_RRC_ne_DC_BC_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_RRC_ne_DC_BC_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_ne_DC_BC_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_ne_DC_BC_2 = {
	"ne-DC-BC",
	"ne-DC-BC",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_RRC_ne_DC_BC_tags_2,
	sizeof(asn_DEF_ASN_RRC_ne_DC_BC_tags_2)
		/sizeof(asn_DEF_ASN_RRC_ne_DC_BC_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_ne_DC_BC_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_ne_DC_BC_tags_2)
		/sizeof(asn_DEF_ASN_RRC_ne_DC_BC_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ASN_RRC_ne_DC_BC_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_RRC_ne_DC_BC_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_BandCombination_v1560_1[] = {
	{ ATF_POINTER, 4, offsetof(struct ASN_RRC_BandCombination_v1560, ne_DC_BC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_ne_DC_BC_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ne-DC-BC"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_RRC_BandCombination_v1560, ca_ParametersNRDC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_CA_ParametersNRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNRDC"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_RRC_BandCombination_v1560, ca_ParametersEUTRA_v1560),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_CA_ParametersEUTRA_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersEUTRA-v1560"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_BandCombination_v1560, ca_ParametersNR_v1560),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_CA_ParametersNR_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR-v1560"
		},
};
static const int asn_MAP_ASN_RRC_BandCombination_v1560_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_BandCombination_v1560_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_BandCombination_v1560_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ne-DC-BC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ca-ParametersNRDC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ca-ParametersEUTRA-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ca-ParametersNR-v1560 */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_BandCombination_v1560_specs_1 = {
	sizeof(struct ASN_RRC_BandCombination_v1560),
	offsetof(struct ASN_RRC_BandCombination_v1560, _asn_ctx),
	asn_MAP_ASN_RRC_BandCombination_v1560_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_BandCombination_v1560_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_BandCombination_v1560 = {
	"BandCombination-v1560",
	"BandCombination-v1560",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_BandCombination_v1560_tags_1,
	sizeof(asn_DEF_ASN_RRC_BandCombination_v1560_tags_1)
		/sizeof(asn_DEF_ASN_RRC_BandCombination_v1560_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_BandCombination_v1560_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_BandCombination_v1560_tags_1)
		/sizeof(asn_DEF_ASN_RRC_BandCombination_v1560_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_BandCombination_v1560_1,
	4,	/* Elements count */
	&asn_SPC_ASN_RRC_BandCombination_v1560_specs_1	/* Additional specs */
};

