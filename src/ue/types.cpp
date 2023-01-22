//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "types.hpp"
#include <utils/printer.hpp>

namespace nr::ue
{

UeTimers::UeTimers()
    : t3346(3346, true, INT32_MAX), t3396(3396, false, INT32_MAX), t3444(3444, true, 12 * 60 * 60),
      t3445(3445, true, 12 * 60 * 60), t3502(3502, true, 12 * 60), t3510(3510, true, 15), t3511(3511, true, 10),
      t3512(3512, true, 54 * 60), t3516(3516, true, 30), t3517(3517, true, 15), t3519(3519, true, 60),
      t3520(3520, true, 15), t3521(3521, true, 15), t3525(3525, true, 60), t3540(3540, true, 10),
      t3580(3580, false, 16), t3581(3581, false, 16), t3582(3582, false, 16), t3583(3583, false, 60),
      t3584(3584, false, INT32_MAX), t3585(3585, false, INT32_MAX)
{
}

Json ToJson(const ECmState &state)
{
    switch (state)
    {
    case ECmState::CM_IDLE:
        return "CM-IDLE";
    case ECmState::CM_CONNECTED:
        return "CM-CONNECTED";
    default:
        return "?";
    }
}

Json ToJson(const ERmState &state)
{
    switch (state)
    {
    case ERmState::RM_DEREGISTERED:
        return "RM-DEREGISTERED";
    case ERmState::RM_REGISTERED:
        return "RM-REGISTERED";
    default:
        return "?";
    }
}

Json ToJson(const EMmState &state)
{
    switch (state)
    {
    case EMmState::MM_NULL:
        return "MM-NULL";
    case EMmState::MM_DEREGISTERED:
        return "MM-DEREGISTERED";
    case EMmState::MM_REGISTERED_INITIATED:
        return "MM-REGISTERED_INITIATED";
    case EMmState::MM_REGISTERED:
        return "MM-REGISTERED";
    case EMmState::MM_DEREGISTERED_INITIATED:
        return "MM-DEREGISTERED_INITIATED";
    case EMmState::MM_SERVICE_REQUEST_INITIATED:
        return "MM-SERVICE_REQUEST_INITIATED";
    default:
        return "?";
    }
}

Json ToJson(const EMmSubState &state)
{
    switch (state)
    {
    case EMmSubState::MM_NULL_NA:
        return "MM-NULL-NA";
    case EMmSubState::MM_DEREGISTERED_NA:
        return "MM-DEREGISTERED/NA";
    case EMmSubState::MM_DEREGISTERED_NORMAL_SERVICE:
        return "MM-DEREGISTERED/NORMAL-SERVICE";
    case EMmSubState::MM_DEREGISTERED_LIMITED_SERVICE:
        return "MM-DEREGISTERED/LIMITED-SERVICE";
    case EMmSubState::MM_DEREGISTERED_ATTEMPTING_REGISTRATION:
        return "MM-DEREGISTERED/ATTEMPTING-REGISTRATION";
    case EMmSubState::MM_DEREGISTERED_PLMN_SEARCH:
        return "MM-DEREGISTERED/PLMN-SEARCH";
    case EMmSubState::MM_DEREGISTERED_NO_SUPI:
        return "MM-DEREGISTERED/NO-SUPI";
    case EMmSubState::MM_DEREGISTERED_NO_CELL_AVAILABLE:
        return "MM-DEREGISTERED/NO-CELL-AVAILABLE";
    case EMmSubState::MM_DEREGISTERED_ECALL_INACTIVE:
        return "MM-DEREGISTERED/ECALL-INACTIVE";
    case EMmSubState::MM_DEREGISTERED_INITIAL_REGISTRATION_NEEDED:
        return "MM-DEREGISTERED/INITIAL-REGISTRATION-NEEDED";
    case EMmSubState::MM_REGISTERED_INITIATED_NA:
        return "MM-REGISTERED-INITIATED/NA";
    case EMmSubState::MM_REGISTERED_NA:
        return "MM-REGISTERED/NA";
    case EMmSubState::MM_REGISTERED_NORMAL_SERVICE:
        return "MM-REGISTERED/NORMAL-SERVICE";
    case EMmSubState::MM_REGISTERED_NON_ALLOWED_SERVICE:
        return "MM-REGISTERED/NON-ALLOWED-SERVICE";
    case EMmSubState::MM_REGISTERED_ATTEMPTING_REGISTRATION_UPDATE:
        return "MM-REGISTERED/ATTEMPTING-REGISTRATION-UPDATE";
    case EMmSubState::MM_REGISTERED_LIMITED_SERVICE:
        return "MM-REGISTERED/LIMITED-SERVICE";
    case EMmSubState::MM_REGISTERED_PLMN_SEARCH:
        return "MM-REGISTERED/PLMN-SEARCH";
    case EMmSubState::MM_REGISTERED_NO_CELL_AVAILABLE:
        return "MM-REGISTERED/NO-CELL-AVAILABLE";
    case EMmSubState::MM_REGISTERED_UPDATE_NEEDED:
        return "MM-REGISTERED/UPDATE-NEEDED";
    case EMmSubState::MM_DEREGISTERED_INITIATED_NA:
        return "MM-DEREGISTERED-INITIATED/NA";
    case EMmSubState::MM_SERVICE_REQUEST_INITIATED_NA:
        return "MM-SERVICE-REQUEST-INITIATED/NA";
    default:
        return "?";
    }
}

Json ToJson(const UeConfig &v)
{
    return Json::Obj({
        {"supi", ToJson(v.supi)},
        {"plmn", ToJson(v.plmn)},
        {"imei", ::ToJson(v.imei)},
        {"imeiSv", ::ToJson(v.imeiSv)},
        {"nssai", ::ToJson(v.nssais)},
    });
}

Json ToJson(const UeTimers &v)
{
    return Json::Obj({
        {"T3346", ToJson(v.t3346)}, {"T3396", ToJson(v.t3396)}, {"T3444", ToJson(v.t3444)},
        {"T3445", ToJson(v.t3445)}, {"T3502", ToJson(v.t3502)}, {"T3510", ToJson(v.t3510)},
        {"T3511", ToJson(v.t3511)}, {"T3512", ToJson(v.t3512)}, {"T3516", ToJson(v.t3516)},
        {"T3517", ToJson(v.t3517)}, {"T3519", ToJson(v.t3519)}, {"T3520", ToJson(v.t3520)},
        {"T3521", ToJson(v.t3521)}, {"T3525", ToJson(v.t3525)}, {"T3540", ToJson(v.t3540)},
        {"T3580", ToJson(v.t3580)}, {"T3581", ToJson(v.t3581)}, {"T3582", ToJson(v.t3582)},
        {"T3583", ToJson(v.t3583)}, {"T3584", ToJson(v.t3584)}, {"T3585", ToJson(v.t3585)},
    });
}

} // namespace nr::ue
