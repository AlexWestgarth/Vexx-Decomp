extern int _s_Tail;
extern int _s_Count;
extern int DAT_802e7918;
extern int DAT_802e6528;
extern int DAT_802e651c;
extern int DAT_802e6520;
extern int DAT_802e6524;
extern int DAT_802e6518;


void fn_8000D4DC(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  int uVar5;
  int uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = _s_Tail;
  if (_s_Count < 0x100) {
    iVar3 = DAT_802e7918 + -1;
    if (iVar3 < 0) {
      iVar3 = 0xff;
    }
    iVar8 = DAT_802e7918;
    if ((DAT_802e7918 != _s_Tail) &&
       (iVar7 = iVar3 * 0x14, iVar2 = DAT_802e7918,
       (int)param_1[4] < *(int *)(&DAT_802e6528 + iVar7))) {
      do {
        iVar8 = iVar3;
        iVar2 = iVar2 * 0x14;
        uVar4 = *(int *)(&DAT_802e651c + iVar7);
        uVar5 = *(int *)(&DAT_802e6520 + iVar7);
        iVar3 = iVar8 + -1;
        uVar6 = *(int *)(&DAT_802e6524 + iVar7);
        *(int *)(&DAT_802e6518 + iVar2) = *(int *)(&DAT_802e6518 + iVar7);
        *(int *)(&DAT_802e651c + iVar2) = uVar4;
        *(int *)(&DAT_802e6520 + iVar2) = uVar5;
        *(int *)(&DAT_802e6524 + iVar2) = uVar6;
        *(int *)(&DAT_802e6528 + iVar2) = *(int *)(&DAT_802e6528 + iVar7);
        if (iVar3 < 0) {
          iVar3 = 0xff;
        }
      } while ((iVar8 != iVar1) &&
              (iVar7 = iVar3 * 0x14, iVar2 = iVar8,
              (int)param_1[4] < *(int *)(&DAT_802e6528 + iVar7)));
    }
    iVar8 = iVar8 * 0x14;
    uVar4 = param_1[2];
    uVar5 = param_1[1];
    uVar6 = param_1[3];
    *(int *)(&DAT_802e6518 + iVar8) = *param_1;
    *(int *)(&DAT_802e651c + iVar8) = uVar5;
    *(int *)(&DAT_802e6520 + iVar8) = uVar4;
    *(int *)(&DAT_802e6524 + iVar8) = uVar6;
    DAT_802e7918 = DAT_802e7918 + 1;
    *(int *)(&DAT_802e6528 + iVar8) = param_1[4];
    if (DAT_802e7918 == 0x100) {
      DAT_802e7918 = 0;
    }
    _s_Count = _s_Count + 1;
  }
  return;
}

///INPUTQ_InitModule
///INPUTQ_KillModule
///INPUTQ_DeQueue
///INPUTQ_GetNEvents