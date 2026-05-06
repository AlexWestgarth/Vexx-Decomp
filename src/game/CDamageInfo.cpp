#include<game/CDamageInfo.hpp>
#define NULL 0

CDamageInfo::CDamageInfo(float param_1, int param_2){
    this->m_float_0x0 = param_1;
    this->m_int_0x4 = param_2;
    this->m_CActor_ptr_0x8 = NULL;
    this->m_CParticle_ptr_0xc = NULL;
    this->m_bool_0x10 = 0;
    return;
};

CDamageInfo::CDamageInfo(float param_1, int param_2, CActor *param_3, CParticle *param_4){
    this->m_float_0x0 = param_1;
    this->m_int_0x4 = param_2;
    this->m_CActor_ptr_0x8 = param_3;
    this->m_CParticle_ptr_0xc = param_4;
    this->m_bool_0x10 = 0;
    return;
};
