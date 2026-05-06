#ifndef GAME_CDAMAGEINFO_HPP
#define GAME_CDAMAGEINFO_HPP

class CActor {};
class CParticle {};

class CDamageInfo {
    public:
    CDamageInfo(float,int);
    CDamageInfo(float,int,CActor*,CParticle*);

    private:
    float m_float_0x0;
    int m_int_0x4;
    CActor *m_CActor_ptr_0x8;
    CParticle *m_CParticle_ptr_0xc;
    bool m_bool_0x10;
};

#endif
