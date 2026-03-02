///#include <game\input_event.h> 
int s_Queue;
int _s_Tail;
int _s_Count;
int _s_Head;
extern int DAT_802e7918;
extern int DAT_802e6528;
extern int DAT_802e651c;
extern int DAT_802e6520;
extern int DAT_802e6524;
extern int DAT_802e6518;
extern int deVar1;
typedef int * input_event[6];

void INPUTQ_EnQueue(input_event *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char uVar4;
  char uVar5;
  char uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = _s_Tail;
  if (_s_Count < 0x100) {
    iVar3 = _s_Head + -1;
    if (iVar3 < 0) {
      iVar3 = 0xff;
    }
    iVar8 = _s_Head;
    if ((_s_Head != _s_Tail) &&
       (iVar7 = iVar3 * 0x14, iVar2 = _s_Head,
       *(int *)(param_1 + 0x10) < *(int *)(&DAT_802e6528 + iVar7))) {
      do {
        iVar8 = iVar3;
        iVar2 = iVar2 * 0x14;
        uVar4 = *(char *)(&DAT_802e651c + iVar7);
        uVar5 = *(char *)(&DAT_802e6520 + iVar7);
        iVar3 = iVar8 + -1;
        uVar6 = *(char *)(&DAT_802e6524 + iVar7);
        *(char *)(&s_Queue + iVar2) = *(char *)(&s_Queue + iVar7);
        *(char *)(&DAT_802e651c + iVar2) = uVar4;
        *(char *)(&DAT_802e6520 + iVar2) = uVar5;
        *(char *)(&DAT_802e6524 + iVar2) = uVar6;
        *(char *)(&DAT_802e6528 + iVar2) = *(char *)(&DAT_802e6528 + iVar7);
        if (iVar3 < 0) {
          iVar3 = 0xff;
        }
      } while ((iVar8 != iVar1) &&
              (iVar7 = iVar3 * 0x14, iVar2 = iVar8,
              *(int *)(param_1 + 0x10) < *(int *)(&DAT_802e6528 + iVar7)));
    }
    iVar8 = iVar8 * 0x14;
    uVar4 = *(char *)(param_1 + 8);
    uVar5 = *(char *)(param_1 + 4);
    uVar6 = *(char *)(param_1 + 0xc);
    *(char *)(&s_Queue + iVar8) = *(char *)param_1;
    *(char *)(&DAT_802e651c + iVar8) = uVar5;
    *(char *)(&DAT_802e6520 + iVar8) = uVar4;
    *(char *)(&DAT_802e6524 + iVar8) = uVar6;
    _s_Head = _s_Head + 1;
    *(char *)(&DAT_802e6528 + iVar8) = *(char *)(param_1 + 0x10);
    if (_s_Head == 0x100) {
      _s_Head = 0;
    }
    _s_Count = _s_Count + 1;
  }
  return;
}

double _s_Initialized = 0;


void INPUTQ_InitModule(void)

{
  _s_Initialized = 1;
  _s_Head = 0;
  _s_Tail = 0;
  _s_Count = 0;
  return;
}

void INPUTQ_KillModule(void)

{
  _s_Initialized = 0;
  return;
}


int INPUTQ_DeQueue(input_event & param_1)

{
  int iVar1;
  int deVar2;
  int deVar3;
  int deVar4;
  
  deVar3 = 0;
  if (_s_Count != 0) {
    deVar1 = _s_Tail * 0x14;
    deVar3 = *(int *)(&DAT_802e6520 + deVar1);
    deVar2 = *(int *)(&DAT_802e651c + deVar1);
    deVar4 = *(int *)(&DAT_802e6524 + deVar1);
    *(int *)param_1 = *(int *)(&DAT_802e6518 + deVar1);
    *(int *)(param_1 + 4) = deVar2;
    *(int *)(param_1 + 8) = deVar3;
    *(int *)(param_1 + 0xc) = deVar4;
    *(int *)(param_1 + 0x10) = *(int *)(&DAT_802e6528 + deVar1);
    iVar1 = _s_Tail + 1;
    if (0xff < _s_Tail + 1) {
      iVar1 = _s_Tail + -0xff;
    }
    _s_Tail = iVar1;
    _s_Count = _s_Count + -1;
    deVar3 = 1;
  }
  return deVar3;
}

int INPUTQ_GetNEvents(void)

{
  return _s_Count;
}
