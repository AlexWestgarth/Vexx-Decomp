#ifndef GAME_AUDIOINSTANCE_HPP
#define GAME_AUDIOINSTANCE_HPP
typedef unsigned int uint;
typedef unsigned long long ulonglong;
int lbl_802A4A30[2] = {};
// Might need to be moved
class ItemInstancePairManager{
    public:
    static char FindItemObjectPtrByID(ItemInstancePairManager *, int &){
        return 0;
    };
    private:
    int m_int_0x0;
    int m_int_0x4;
};

class AudioInstance;

// Might need to be moved
class ItemObject {
    public:

    ItemObject(AudioInstance *param_1);
    uint m_itemobject_field_0x1c;
    int m_itemobject_field_0x0;
    int m_itemobject_field_0x40;
    AudioInstance* m_itemobject_field_0x4;
    void *m_itemobject_field_0x8;
    int m_itemobject_field_0xc;
    int m_itemobject_field_0x10;
    int m_itemobject_field_0x14;
    int m_itemobject_field_0x18;
    
    char m_itemobject_field_0x20;
    uint m_itemobject_field_0x24;
    int m_itemobject_field_0x28;
    uint m_itemobject_field_0x2c;
    uint m_itemobject_field_0x30;
    int m_itemobject_field_0x34;
    int m_itemobject_field_0x38;
    int m_itemobject_field_0x3c;
    int m_itemobject_field_0x44;
    int m_itemobject_field_0x48;
    int m_itemobject_field_0x4c;
    int m_itemobject_field_0x50;
    int m_itemobject_field_0x54;
    private:

};
// Might need to be moved
struct AAA_OBJECTSTATUS{
  unsigned int unk_00[0x0];
  int unk_01[0x4];
  int unk_02[0x8];
  int unk_03[0xc];
  unsigned int field_0x0;
  int field_0x4;
  int field_0x8;
  int field_0x10;
  int field_0xc;
};

class AudioInstance {
    public:
    AudioInstance(int,void *);
    void BaseParentInstance();
    char GetObjectStauts(AAA_OBJECTSTATUS *);
    void PlayInstancesAtStop();
    void Play(int,bool);
    void PostLoadOperations(bool);
    private:
    int m_int_0x0;
    short m_short_0x4;
    ItemObject *m_ItemObjectptr_0x8;
    uint m_uint_0xc; //Bitfield
    int *m_intptr_0x10;
    float m_float_0x14;
    int m_int_0x18;
    int m_int_0x1c;
    float m_float_0x20;
    float m_float_0x24;
    float m_float_0x28;
    float m_float_0x2c;
    float m_float_0x30;
    float m_float_0x34;
    float m_float_0x38;
    int m_int_0x3c;
    int m_int_0x40;
    void *m_voidptr_0x44; //???
    int m_int_0x48;
    AudioInstance *mParentAudioInstance; // 0x4C
    int *m_intptr_0x50;
    int m_unk_0x54; //undefined4
    float m_float_0x58; 
    int m_unk_0x5c; //undefined4
    int m_unk_0x60; //undefined4
    int m_unk_0x64; //undefined4
    int m_unk_0x68; //undefined4
    float m_float_0x6c;
};

ItemObject::ItemObject(AudioInstance *param_1)
    : m_itemobject_field_0x0(0)
    ,m_itemobject_field_0x4(param_1)
    ,m_itemobject_field_0x8(0)
    ,m_itemobject_field_0xc(0)
    ,m_itemobject_field_0x10(0)
    ,m_itemobject_field_0x14(0)
    ,m_itemobject_field_0x18(-1)
    ,m_itemobject_field_0x1c(0)
    ,m_itemobject_field_0x20(0)
    ,m_itemobject_field_0x24(0)
    ,m_itemobject_field_0x28(0)
    ,m_itemobject_field_0x2c(0)
    ,m_itemobject_field_0x30(0)
    ,m_itemobject_field_0x38(0)
    ,m_itemobject_field_0x3c(0)
    ,m_itemobject_field_0x40(0)
    ,m_itemobject_field_0x44(0)
    ,m_itemobject_field_0x48(0)
    ,m_itemobject_field_0x4c(0)
    ,m_itemobject_field_0x50(0)
    ,m_itemobject_field_0x54(0)
{
}

class AudioDriver {
    public:
    AudioDriver *_m_FrameTime;
    ItemInstancePairManager * field_0x58;
    AudioDriver *field_0x68;
    static char GetTypeFromCache(AudioDriver*,int){
        return 0;
    };
    private:
    AudioDriver *field_0x4;
    int m_int_0xa;
};

class CGameClassAllocator{
    public:
    static void * operatordotnew(CGameClassAllocator *, char *){
        int * p = new int(1);
        return p;
    };
};


#endif
