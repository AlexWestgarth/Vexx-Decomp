#include <game/AudioInstance.hpp>
// check all of these properly
const char* at613 = "(save";
int *_g_GameAllocator[4] = {};
int _g_pMaterialManager[1] = {};
int lbl_802A4A38[1] = {};
int lbl_802A4A3C[1] = {};
int lbl_802A4A40[1] = {};
int lbl_802A4A44[1] = {};
int *lbl_802A4A50 = 0;
int lbl_802A4A54[1] = {};
int lbl_802A4A58 = 0;
int lbl_802A4A5C[1] = {};
int lbl_802A4A60[1] = {};
int lbl_802A4A64[1] = {};
int lbl_802A4A68[2] = {};
int lbl_802A4A70[1] = {};
int lbl_802A4A74[1] = {};
int lbl_802A4A78[1] = {5};
int lbl_802A4A7C[1] = {5};
int lbl_802A4A80[12] = {10};
int lbl_802A4AB0[1] = {};
int lbl_802A4AB4[3] = {0,16777215,0};
int lbl_802A4AC0[1] = {2};
int lbl_802A4AC4[1] = {2};
int lbl_802A4AC8[2] = {2};
int lbl_802A4AD4[1] = {};
int lbl_802A4AD8[2] = {1069547520};
int lbl_802A4AE0[2] = {2};
int lbl_802A4AE8[2] = {};
int lbl_802A4AF0[1] = {1};
int lbl_802A4AF4[1] = {};
int lbl_802A4AF8[1] = {};
const char* lbl_802A4B00 = at613;
float lbl_802A4B04[1] = {0.95f};
int lbl_802A4B08[2] = {};
int lbl_802A4B10[2] = {};
int lbl_802A4B18[2] = {};
int lbl_802A4B20[2] = {};
int lbl_802A4B28[2] = {3};
int lbl_802A4B30[3] = {};
int lbl_802A4B3C[3] = {};
int lbl_802A4B48[2] = {};
int lbl_802A4B50[1] = {};
int lbl_802A4B54[18] = {0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9};
int lbl_802A4BA0[1] = {};
int lbl_802A4BA4[20] = {0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10};
int lbl_802A4BF8[1] = {};
int lbl_802A4BFC[16] = {0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8};
int lbl_802A4C40[1] = {};
int lbl_802A4C44[8] = {0,1,0,2,0,3,0,4};
int lbl_802A4C68[1] = {};
int lbl_802A4C6C[10] = {0,1,0,2,0,3,0,4,0,5};
int lbl_802A4C98[1] = {};
int lbl_802A4C9C[4] = {0,1,0,2};
int lbl_802A4CB0[1] = {};
int lbl_802A4CB4[10] = {0,1,0,2,0,3,0,4,0,5};
int lbl_802A4CE0[1] = {};
int lbl_802A4CE4[8] = {0,1,0,2,0,3,0,4};
int lbl_802A4D08[4] = {0,0,1065353216,1065353216};
int lbl_802A4D18[16] = {0,0,1056964608,1056964608,1056964608,0,1065353216,1056964608,0,1056964608,1056964608,1065353216,1056964608,1056964608,1065353216,1065353216};
int lbl_802A4D58[] = {0,0,1048576000,1048576000,1048576000,0,1056964608,1048576000,1056964608,0,1061158912,1048576000,1061158912,0,1065353216,1048576000};
int lbl_802A4E58[1] = {};
int lbl_802A5258[1] = {};
int lbl_802A6260[1] = {};

AudioDriver * _m_FrameTime;
AudioDriver * DriverPointer__11AudioDriver = 0;
extern int DAT_802723D0;
void *x_memcpy(void *param_1,void *param_2,int param_3) {
  return param_1;
};


void x_memcpy_pointer(void * param_1,void *param_2,int param_3) {
  x_memcpy(param_1,param_2,param_3);
  return;
};
char FUN_80147c84(AudioDriver *param_1, int param_2){
  int local_8 [2];
  
  //x_memcpy_pointer(local_8,void *(param_1 + 0x18),6)
  return local_8[0];
};

void* __nwa(char, void*, int){
  int * p = new int(1);
  return p;
};

void x_memset(void *,char,char){
  return;
};

void PostLoadOperations(AudioInstance *, bool){
  return;
};


//__ct__13AudioInstanceFiPv 
AudioInstance::AudioInstance(int param_1,void *param_2)
{
  ItemObject *var1;
  int var2;
  AudioDriver *var3;
  void *var4;
  this->m_int_0x0 = 0;
  this->m_ItemObjectptr_0x8 = 0;
  this->m_short_0x4 = 0;
  this->m_int_0x0 = DAT_802723D0;
  this->m_uint_0xc = 1;
  this->m_intptr_0x10 = (int *)0x1;
  this->m_float_0x14 = 0.0f;
  this->m_float_0x20 = 0.0f;
  this->m_float_0x28 = 0.0f;
  this->m_float_0x30 = 0.0f;
  this->m_float_0x34 = 0.0f;
  this->m_int_0x40 = -200;
  this->m_voidptr_0x44 = (void *)0x0;
  this->m_int_0x48 = 0;
  void *mParentAudioInstance = param_2;
  this->m_intptr_0x50 = 0;
  this->m_unk_0x54 = 0;
  this->m_float_0x58 = 1.0f;
  this->m_unk_0x5c = 0;
  this->m_unk_0x60 = 0;
  this->m_unk_0x64 = 0;
  this->m_unk_0x68 = 0;
  this->m_float_0x6c =0.0f;
  var1 = (ItemObject *)ItemInstancePairManager::FindItemObjectPtrByID((ItemInstancePairManager *)&DriverPointer__11AudioDriver->field_0x58,param_1);
  if (var1 == (ItemObject *)0x0) {
    var1 = new ItemObject(this);
    var2 = AudioDriver::GetTypeFromCache(var3,param_1);
    this->m_uint_0xc = var2;
    AudioDriver *var3;
    var1->m_itemobject_field_0x40 = var1->m_itemobject_field_0x40 + 1;
    FUN_80147c84(var3,param_1);
  }
  else 
    var1->m_itemobject_field_0x40 = var1->m_itemobject_field_0x40 + 1;
  if (var1->m_itemobject_field_0x20 == 0x0 && var1->m_itemobject_field_0x40 != 0) 
    if (_g_GameAllocator[0] == 0)
      var4 = new int[4];
    //else
    //  var4 = void *_g_GameAllocator[4](int _g_GameAllocator[0] + int _g_GameAllocator[3],8);
  
  //else 
  if (var1->m_itemobject_field_0x1c == 0x4) 
    AudioInstance::PostLoadOperations(false);
  return;
};
/*
AudioInstance::AudioInstance(int param_1,void *param_2)
{
  
  uint uVar2;
  void *pvVar3;
  char uVar4;
  char *pcVar5;
  int iVar6;
  char uVar7;
  AudioDriver *pAVar1;

  int field_0x4 = 0;
  float field_0x8 = 0.0;
  pAVar1 = _DriverPointer__11AudioDriver;
  float field_0x10 = 1;
  int field_0x44 = 0xffffff38;
  float field_0xa = 1.0f;
  float field_0x14 = 0;
  int field_0x18 = 0x3f800000;
  float field_0x24 = 0.0f;
  float field_0x2c = 0.0f;
  float field_0x34 = 0.0f;
  float field_0x38 = 0.0f;
  float field_0x48 = 0.0f;
  float field_0x4c = 0.0f;
  uVar7 = ItemInstancePairManager::FindItemObjectPtrByID
                    ((ItemInstancePairManager *)&pAVar1->field_0x68);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  pcVar5 = (char *)uVar7;
  *(int *)&this->field_0xc = iVar6;
  this->unk_item_object = new ItemObject(this);
  else {
    *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + 1;
  }
  uVar2 = *(uint *)(*(int *)&this->field_0xc + 0x2c);
  if ((uVar2 & 0x20) == 0) {
    if ((uVar2 & 0x40) != 0) {
      if (_g_GameAllocator == (uint *)0x0) {
        pvVar3 = (void *)__nwa(8,pcVar5,(int)param_2);
      }
      else {
        pvVar3 = _g_GameAllocator;
      }
      *(void **)&this[1].field_0x1c = pvVar3;
      x_memset(pvVar3,0,8);
    }
  }
  else {
    if (_g_GameAllocator == (uint *)0x0) {
      pvVar3 = (void *)__nwa(0x68,pcVar5,(int)param_2);
    }
    else {
      pvVar3 = _g_GameAllocator;
    }
    *(void **)&this[1].field_0x1c = pvVar3;
    x_memset(pvVar3,0,0x68);
    *(int *)((int)pvVar3 + 0x1c) = 0x447a0000;
    *(int *)((int)pvVar3 + 0x18) = 0x3f800000;
  }
  iVar6 = *(int *)&this->field_0xc;
  if (*(int *)(iVar6 + 0x1c) == 0xff) {
    *(char *)(iVar6 + 4) = 10;
  }
  else if (*(int *)(iVar6 + 4) == 10) {
    PostLoadOperations(this,false);
  }
  return;
}
  */
//Destroy__13AudioInstanceFb
//__dt__13AudioInstanceFv 
//Play__13AudioInstanceFib 
//StartPlayback__13AudioInstanceFb
//PausePlayback__13AudioInstanceFv 
//ResumePlayback__13AudioInstanceFv 
//StopPlayback__13AudioInstanceFfb 
//PlayInstancesAtStop__13AudioInstanceFv 
void AudioInstance::PlayInstancesAtStop()

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  AudioInstance *this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = m_uint_0xc + 28;
  if ((uVar1 < 0x84) && (0x7f < uVar1)) {
    iVar7 = m_uint_0xc + 0x30;
    iVar5 = m_int_0x48;
    iVar2 = iVar7 + 292;
    iVar3 = iVar7 + 308;
    iVar7 = iVar3 << 3;
    iVar6 = iVar3 + 1;
    iVar4 = m_uint_0xc + 0x1c;
    if ((iVar4 == 0x81) || (iVar4 == 0x82)) {
      iVar6 = iVar3 + 2;
    }
    if (0 < iVar2) {
      do {
        this_00 = *(AudioInstance **)(iVar5 + iVar7);
        if ((this_00 != (AudioInstance *)0x0) &&
           ((m_uint_0xc + 0x2c) & 0x10) != 0) {
          AudioInstance::Play(-200,false);
        }
        iVar7 = iVar7 + iVar6 * 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}
//PurgePlaybackStatus__13AudioInstanceFv 
//QueueInstance__13AudioInstanceFibPv 
//PostLoadOperations__13AudioInstanceFb 
//UpdateInstancePlayStatus__13AudioInstanceFv
//PlayQueuedInstance__13AudioInstanceFv 
//SetModulatorValue__13AudioInstanceF13AAA_PARM_NAMEfb
//SetVariance__13AudioInstanceFiiPib
//fn_80141890 
//RestoreDefaultModulatorValue__13AudioInstanceF13AAA_PARM_NAME 
//fn_80141D88 
//Set3DParameterModulatorValue__13AudioInstanceF15AAA_3DPARM_NAMEPvb
//Get3DParameterModulatorValue__13AudioInstanceF15AAA_3DPARM_NAMEPv 
//FillEligibleList__13AudioInstanceFv
//FillPlayingList__13AudioInstanceFiPv 
//ResetListContentsBasedOnVariance__13AudioInstanceFv 
//InstanceWillLoopForever__13AudioInstanceFv 
//IsNOTPrecacheCandidate__13AudioInstanceFv
//AllPartsLoaded__13AudioInstanceFv 
//GetProxyInstance__13AudioInstanceFv
//fn_80143180
//fn_80143324
//fn_80143370
//GetObjectStauts__13AudioInstanceFP16AAA_OBJECTSTATUS
/* AudioInstance::GetObjectStauts(AAA_OBJECTSTATUS *) */

char AudioInstance::GetObjectStauts(AAA_OBJECTSTATUS* param_1)

{
  unsigned int uVar1;
  typedef char byte;
  
  uVar1 = 0;
  if (this->mParentAudioInstance == 0) {
    uVar1 = ((unsigned int)(byte)(((*(unsigned int *)&this->m_intptr_0x10 & 8) == 0) << 1) << 0x1c) >> 0x1d;
    //uVar1 = (this->field_0x10 & 0x8) == 0;
  }
  param_1->field_0x0 = uVar1;
  param_1->field_0x4 = (*(int *)&this->m_uint_0xc + 0x2c);
  param_1->field_0x8 = (*(int *)&this->m_uint_0xc + 0x1c);
  param_1->field_0xc = (*(int *)&this->m_uint_0xc + 0x28);
  return 0;
}
//ResetListVariance__13AudioInstanceFv
//IsEligible__13AudioInstanceFiP14VARIANCE_IDVALPUib 
//BaseParentInstance__13AudioInstanceFv


/* AudioInstance::BaseParentInstance(void)
void AudioInstance::BaseParentInstance(void)

{
  AudioInstance *instance;
  do {
    instance = instance->field_0x50;
  } while (instance != 0);
}
 */
