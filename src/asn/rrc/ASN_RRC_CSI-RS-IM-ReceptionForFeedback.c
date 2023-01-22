/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_CSI-RS-IM-ReceptionForFeedback.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ASN_RRC_maxConfigNumberNZP_CSI_RS_PerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_RRC_maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 256)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_RRC_maxNumberSimultaneousNZP_CSI_RS_PerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_RRC_totalNumberPortsSimultaneousNZP_CSI_RS_PerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 256)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ASN_RRC_maxConfigNumberCSI_IM_PerCC_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_maxConfigNumberNZP_CSI_RS_PerCC_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  2,  256 }	/* (2..256) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_maxNumberSimultaneousNZP_CSI_RS_PerCC_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_totalNumberPortsSimultaneousNZP_CSI_RS_PerCC_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  2,  256 }	/* (2..256) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_RRC_maxConfigNumberCSI_IM_PerCC_value2enum_4[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" }
};
static const unsigned int asn_MAP_ASN_RRC_maxConfigNumberCSI_IM_PerCC_enum2value_4[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_RRC_maxConfigNumberCSI_IM_PerCC_specs_4 = {
	asn_MAP_ASN_RRC_maxConfigNumberCSI_IM_PerCC_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_RRC_maxConfigNumberCSI_IM_PerCC_enum2value_4,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_4 = {
	"maxConfigNumberCSI-IM-PerCC",
	"maxConfigNumberCSI-IM-PerCC",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_tags_4,
	sizeof(asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_tags_4)
		/sizeof(asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_tags_4[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_tags_4,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_tags_4)
		/sizeof(asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_ASN_RRC_maxConfigNumberCSI_IM_PerCC_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_RRC_maxConfigNumberCSI_IM_PerCC_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CSI_RS_IM_ReceptionForFeedback, maxConfigNumberNZP_CSI_RS_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_maxConfigNumberNZP_CSI_RS_PerCC_constr_2,  memb_ASN_RRC_maxConfigNumberNZP_CSI_RS_PerCC_constraint_1 },
		0, 0, /* No default value */
		"maxConfigNumberNZP-CSI-RS-PerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CSI_RS_IM_ReceptionForFeedback, maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC_constr_3,  memb_ASN_RRC_maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC_constraint_1 },
		0, 0, /* No default value */
		"maxConfigNumberPortsAcrossNZP-CSI-RS-PerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CSI_RS_IM_ReceptionForFeedback, maxConfigNumberCSI_IM_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxConfigNumberCSI-IM-PerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CSI_RS_IM_ReceptionForFeedback, maxNumberSimultaneousNZP_CSI_RS_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_maxNumberSimultaneousNZP_CSI_RS_PerCC_constr_11,  memb_ASN_RRC_maxNumberSimultaneousNZP_CSI_RS_PerCC_constraint_1 },
		0, 0, /* No default value */
		"maxNumberSimultaneousNZP-CSI-RS-PerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CSI_RS_IM_ReceptionForFeedback, totalNumberPortsSimultaneousNZP_CSI_RS_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_totalNumberPortsSimultaneousNZP_CSI_RS_PerCC_constr_12,  memb_ASN_RRC_totalNumberPortsSimultaneousNZP_CSI_RS_PerCC_constraint_1 },
		0, 0, /* No default value */
		"totalNumberPortsSimultaneousNZP-CSI-RS-PerCC"
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxConfigNumberNZP-CSI-RS-PerCC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxConfigNumberPortsAcrossNZP-CSI-RS-PerCC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxConfigNumberCSI-IM-PerCC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxNumberSimultaneousNZP-CSI-RS-PerCC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* totalNumberPortsSimultaneousNZP-CSI-RS-PerCC */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_specs_1 = {
	sizeof(struct ASN_RRC_CSI_RS_IM_ReceptionForFeedback),
	offsetof(struct ASN_RRC_CSI_RS_IM_ReceptionForFeedback, _asn_ctx),
	asn_MAP_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback = {
	"CSI-RS-IM-ReceptionForFeedback",
	"CSI-RS-IM-ReceptionForFeedback",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tags_1,
	sizeof(asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tags_1)
		/sizeof(asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tags_1)
		/sizeof(asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_1,
	5,	/* Elements count */
	&asn_SPC_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_specs_1	/* Additional specs */
};

