{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  byte *apbStack_680 [202];
  code *local_30;
  
  do {
    uVar1 = FUN_03032288((long)param_2,(long *)apbStack_680);
    lVar2 = FUN_03031c4c((long)param_2);
    uVar3 = 4;
    if (lVar2 + (*(long *)((long)param_2 + 0x340) >> 0x3f) != param_1[3]) {
      uVar3 = 0;
    }
    if ((int)uVar1 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar1 = (*local_30)(1,uVar3 | 2,*param_1,param_1,param_2);
      if ((int)uVar1 == 7) {
        return uVar1;
      }
      if ((int)uVar1 != 8) {
        return 2;
      }
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_03032f48(param_2,apbStack_680);
  } while( true );
}



ulong FUN_03033054(undefined8 *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte *apbStack_680 [202];
  code *local_30;
  
  pcVar5 = (code *)param_1[2];
  uVar6 = param_1[3];
  while( true ) {
    uVar4 = FUN_03032288((long)param_2,(long *)apbStack_680);
    iVar1 = (int)uVar4;
    if ((iVar1 != 5) && (iVar1 != 0)) {
      return 2;
    }
    uVar7 = 0x1a;
    if (iVar1 != 5) {
      uVar7 = 10;
    }
    iVar2 = (*pcVar5)(1,uVar7,*param_1,param_1,param_2,uVar6);
    if (iVar2 != 0) break;
    if (iVar1 == 5) {
      return uVar4 & 0xffffffff;
    }
    if (local_30 != (code *)0x0) {
      uVar3 = (*local_30)(1,10,*param_1,param_1,param_2);
      if (uVar3 == 7) {
        return (ulong)uVar3;
      }
      if (uVar3 != 8) {
        return 2;
      }
    }
    FUN_03032f48(param_2,apbStack_680);
  }
  return 2;
}



long FUN_03033140(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined auStack_a40 [792];
  long local_728;
  undefined8 local_700;
  undefined8 local_6f0;
  long local_680;
  undefined8 local_678 [196];
  undefined8 local_58;
  undefined2 local_50;
  int local_40;
  undefined2 local_18;
  undefined8 local_8;
  
  memset(auStack_a40,0,0x3c0);
  local_700 = 0x4000000000000000;
  local_728 = param_1 + 1;
  uVar2 = FUN_03032288((long)auStack_a40,&local_680);
  lVar5 = 0;
  if (((int)uVar2 == 0) && (local_40 != 2)) {
    puVar3 = local_678;
    pcVar6 = (char *)(param_2 + 0x334);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      cVar1 = *(char *)puVar3;
      *pcVar6 = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *puVar4 = puVar3[-1];
      }
      else {
        *puVar4 = 0;
      }
      puVar3 = puVar3 + 2;
      pcVar6 = pcVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (puVar3 != &local_58);
    *(undefined8 *)(param_2 + 0x10) = local_58;
    *(undefined2 *)(param_2 + 0x330) = local_50;
    *(undefined2 *)(param_2 + 0x332) = local_18;
    *(undefined8 *)(param_2 + 0x18) = local_6f0;
    *(undefined8 *)(param_2 + 8) = local_8;
    lVar5 = param_2;
  }
  return lVar5;
}



void FUN_03033234(void)

{
  return;
}



undefined  [16] FUN_03033238(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x30;
  undefined auStack_e00 [960];
  undefined auStack_a40 [832];
  long local_700;
  byte *apbStack_680 [202];
  code *local_30;
  
  FUN_03032e6c(auStack_e00,&stack0x00000000,unaff_x30);
  memcpy(auStack_a40,auStack_e00,0x3c0);
  do {
    uVar3 = FUN_03032288((long)auStack_a40,(long *)apbStack_680);
    if (((int)uVar3 == 5) || ((int)uVar3 != 0)) goto LAB_03033370;
    if (local_30 != (code *)0x0) {
      iVar2 = (*local_30)(1,1,*param_1,param_1,auStack_a40);
      if (iVar2 == 6) {
        param_1[2] = 0;
        lVar4 = FUN_03031c4c((long)auStack_a40);
        param_1[3] = lVar4 + (local_700 >> 0x3f);
        memcpy(auStack_a40,auStack_e00,0x3c0);
        uVar3 = FUN_03032f94(param_1,auStack_a40);
        if ((int)uVar3 == 7) {
          FUN_03031b40((long)auStack_e00,(long)auStack_a40);
          FUN_03033234();
        }
LAB_03033370:
        auVar1._8_8_ = param_2;
        auVar1._0_8_ = param_1;
        return auVar1;
      }
      if (iVar2 != 8) goto LAB_03033370;
    }
    FUN_03032f48(auStack_a40,apbStack_680);
  } while( true );
}



undefined  [16] FUN_030333b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined8 unaff_x30;
  undefined auStack_780 [960];
  undefined auStack_3c0 [960];
  
  FUN_03032e6c(auStack_780,&stack0x00000000,unaff_x30);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  param_1[2] = param_2;
  param_1[3] = param_3;
  uVar2 = FUN_03033054(param_1,auStack_3c0);
  if ((int)uVar2 == 7) {
    FUN_03031b40((long)auStack_780,(long)auStack_3c0);
    FUN_03033234();
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] FUN_030334a4(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int iVar2;
  ulong uVar4;
  undefined8 unaff_x30;
  undefined auStack_780 [960];
  undefined auStack_3c0 [960];
  undefined8 uVar3;
  
  FUN_03032e6c(auStack_780,&stack0x00000000,unaff_x30);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  if (param_1[2] == 0) {
    uVar3 = FUN_03032f94(param_1,auStack_3c0);
    iVar2 = (int)uVar3;
  }
  else {
    uVar4 = FUN_03033054(param_1,auStack_3c0);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 7) {
                    // WARNING: Subroutine does not return
    abort();
  }
  FUN_03031b40((long)auStack_780,(long)auStack_3c0);
  FUN_03033234();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] FUN_030335a0(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined8 unaff_x30;
  undefined auStack_780 [960];
  undefined auStack_3c0 [960];
  
  if (param_1[2] == 0) {
    FUN_03033238(param_1,0);
  }
  else {
    FUN_03032e6c(auStack_780,&stack0x00000000,unaff_x30);
    memcpy(auStack_3c0,auStack_780,0x3c0);
    uVar2 = FUN_03033054(param_1,auStack_3c0);
    if ((int)uVar2 != 7) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_03031b40((long)auStack_780,(long)auStack_3c0);
    FUN_03033234();
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



void FUN_03033698(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(1,param_1);
  }
  return;
}



undefined8 FUN_030336bc(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_x30;
  undefined auStack_a40 [960];
  byte *apbStack_680 [208];
  
  FUN_03032e6c(auStack_a40,&stack0x00000000,unaff_x30);
  while( true ) {
    uVar3 = FUN_03032288((long)auStack_a40,(long *)apbStack_680);
    iVar1 = (int)uVar3;
    if (((iVar1 != 5) && (iVar1 != 0)) ||
       (iVar2 = (*(code *)param_1)(auStack_a40,param_2), iVar2 != 0)) break;
    if (iVar1 == 5) {
      return 5;
    }
    FUN_03032f48(auStack_a40,apbStack_680);
  }
  return 3;
}



void FUN_0303378c(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_030337b4(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    uVar4 = uVar4 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1L << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



int FUN_030337f4(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = -(uint)(*(ulong *)(param_2 + 8) < *(ulong *)(param_3 + 8));
  if (*(ulong *)(param_3 + 8) < *(ulong *)(param_2 + 8)) {
    iVar1 = 1;
  }
  return iVar1;
}



void FUN_03033810(undefined8 param_1,undefined *param_2,long param_3,ulong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar3 = (int)param_4;
  while( true ) {
    uVar1 = iVar3 * 2 + 1;
    uVar5 = (ulong)uVar1;
    if (param_5 <= (int)uVar1) {
      return;
    }
    uVar2 = iVar3 * 2 + 2;
    if ((int)uVar2 < param_5) {
      uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
      iVar3 = (*(code *)param_2)(param_1,*(undefined8 *)(param_3 + uVar5),
                                 *(undefined8 *)(param_3 + uVar5 + 8));
      if (iVar3 < 0) {
        uVar1 = uVar2;
      }
      uVar5 = (ulong)uVar1;
    }
    uVar6 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
    uVar7 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
    iVar3 = (*(code *)param_2)(param_1,*(undefined8 *)(param_3 + uVar6),
                               *(undefined8 *)(param_3 + uVar7));
    if (-1 < iVar3) break;
    uVar4 = *(undefined8 *)(param_3 + uVar6);
    *(undefined8 *)(param_3 + uVar6) = *(undefined8 *)(param_3 + uVar7);
    *(undefined8 *)(param_3 + uVar7) = uVar4;
    iVar3 = (int)uVar5;
    param_4 = uVar5;
  }
  return;
}



void FUN_030338d0(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = *(ulong *)(param_3 + 8);
  lVar2 = param_3 + 0x10;
  uVar7 = uVar6 >> 1;
  while( true ) {
    uVar3 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar3;
    iVar5 = (int)uVar6;
    if ((int)uVar3 < 0) break;
    FUN_03033810(param_1,param_2,lVar2,(ulong)uVar3,iVar5);
  }
  lVar8 = 0;
  iVar5 = iVar5 + -1;
  lVar1 = lVar2 + (long)iVar5 * 8;
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar1 + lVar8);
    *(undefined8 *)(lVar1 + lVar8) = uVar4;
    lVar8 = lVar8 + -8;
    FUN_03033810(param_1,param_2,lVar2,0,iVar5);
  }
  return;
}



undefined8 FUN_03033984(byte param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    switch(param_1 & 7) {
    case 0:
    case 4:
      uVar1 = 8;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 4;
    }
  }
  return uVar1;
}



undefined8 FUN_030339e4(byte param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



undefined8 FUN_03033a44(byte param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



ulong ** FUN_03033aa4(byte param_1,ulong **param_2,ulong **param_3,ulong **param_4)

{
  ulong **ppuVar1;
  ulong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong **)((long)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulong **)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulong **)FUN_0303378c((byte *)param_3,(ulong *)&local_8);
      break;
    case 2:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(ulong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(ulong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulong **)FUN_030337b4((byte *)param_3,(ulong *)&local_8);
      break;
    case 10:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(long)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(long)*(int *)param_3;
    }
    if (local_8 != (ulong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong **)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong **)*local_8;
      }
    }
  }
  *param_4 = (ulong *)local_8;
  return ppuVar1;
}



int FUN_03033b94(long param_1,long param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  ulong **ppuVar3;
  ulong *local_10;
  ulong *local_8;
  
  bVar2 = (byte)(*(ushort *)(param_1 + 0x20) >> 3);
  ppuVar3 = (ulong **)FUN_030339e4(bVar2,param_1);
  FUN_03033aa4(bVar2,ppuVar3,(ulong **)(param_2 + 8),&local_10);
  FUN_03033aa4((byte)(*(ushort *)(param_1 + 0x20) >> 3),ppuVar3,(ulong **)(param_3 + 8),&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}



byte FUN_03033c24(long param_1)

{
  char cVar1;
  byte bVar2;
  size_t sVar3;
  byte *pbVar4;
  ulong **ppuVar5;
  char *pcVar6;
  ulong *puStack_18;
  ulong uStack_10;
  ulong uStack_8;
  
  pcVar6 = (char *)(param_1 + 9);
  sVar3 = strlen(pcVar6);
  pbVar4 = (byte *)(pcVar6 + sVar3 + 1);
  if (3 < *(byte *)(param_1 + 8)) {
    if (pcVar6[sVar3 + 1] != '\b') {
      return 0xff;
    }
    if (pbVar4[1] != 0) {
      return 0xff;
    }
    pbVar4 = pbVar4 + 2;
  }
  if (*(char *)(param_1 + 9) == 'z') {
    pbVar4 = (byte *)FUN_0303378c(pbVar4,&uStack_10);
    pbVar4 = (byte *)FUN_030337b4(pbVar4,&uStack_8);
    if (*(char *)(param_1 + 8) == '\x01') {
      pbVar4 = pbVar4 + 1;
    }
    else {
      pbVar4 = (byte *)FUN_0303378c(pbVar4,&uStack_10);
    }
    ppuVar5 = (ulong **)FUN_0303378c(pbVar4,&uStack_10);
    for (pcVar6 = (char *)(param_1 + 10); cVar1 = *pcVar6, cVar1 != 'R'; pcVar6 = pcVar6 + 1) {
      if (cVar1 == 'P') {
        ppuVar5 = FUN_03033aa4(*(byte *)ppuVar5 & 0x7f,(ulong **)0x0,(ulong **)((long)ppuVar5 + 1),
                               &puStack_18);
      }
      else {
        if (cVar1 != 'L') goto LAB_03033c7c;
        ppuVar5 = (ulong **)((long)ppuVar5 + 1);
      }
    }
    bVar2 = *(byte *)ppuVar5;
  }
  else {
LAB_03033c7c:
    bVar2 = 0;
  }
  return bVar2;
}



uint * FUN_03033d20(long param_1,uint *param_2,long param_3)

{
  ushort uVar1;
  ulong *puVar2;
  byte bVar3;
  ulong **ppuVar5;
  long lVar6;
  ulong **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *local_10;
  ulong *local_8;
  ushort uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x20) >> 3;
  uVar4 = uVar1 & 0xff;
  ppuVar5 = (ulong **)FUN_030339e4((byte)uVar1,param_1);
  lVar6 = 0;
  do {
    if (*param_2 == 0) {
      return (uint *)0x0;
    }
    if (param_2[1] != 0) {
      lVar10 = lVar6;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar10 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar10 != lVar6)) {
        bVar3 = FUN_03033c24(lVar10);
        uVar4 = (ushort)bVar3;
        ppuVar5 = (ulong **)FUN_030339e4(bVar3,param_1);
      }
      if (uVar4 == 0) {
        local_10 = *(ulong **)(param_2 + 2);
        local_8 = *(ulong **)(param_2 + 4);
        puVar2 = local_10;
      }
      else {
        bVar3 = (byte)uVar4;
        ppuVar7 = FUN_03033aa4(bVar3,ppuVar5,(ulong **)(param_2 + 2),&local_10);
        FUN_03033aa4(bVar3 & 0xf,(ulong **)0x0,ppuVar7,&local_8);
        uVar8 = FUN_03033984(bVar3);
        uVar9 = 0xffffffffffffffff;
        if ((uVar8 & 0xffffffff) < 8) {
          uVar9 = (1L << ((uVar8 & 7) << 3)) - 1;
        }
        puVar2 = (ulong *)(uVar9 & (ulong)local_10);
      }
      lVar6 = lVar10;
      if ((puVar2 != (ulong *)0x0) && ((ulong *)(param_3 - (long)local_10) < local_8)) {
        return param_2;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}



byte FUN_03033e80(long param_1)

{
  byte bVar1;
  
  bVar1 = FUN_03033c24((param_1 + 4) - (long)*(int *)(param_1 + 4));
  return bVar1;
}



undefined8 FUN_03033e90(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  ulong uVar7;
  uint *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  ulong *puVar18;
  int *piVar19;
  int *piVar20;
  ulong uVar21;
  ulong *local_40;
  ulong *local_38;
  ulong *local_30;
  ulong local_28;
  ulong local_20;
  ulong *local_18;
  undefined8 local_10;
  
  piVar15 = (int *)param_1[2];
  uVar16 = *param_1;
  if ((param_2 < 0x30) || (*(int *)(param_3 + 5) == 0)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
  }
  else {
    if ((param_1[4] == DAT_039a4dd0) && (param_1[5] == DAT_039f7a08)) {
      puVar18 = DAT_039f7a10;
      puVar12 = (ulong *)0x0;
      puVar14 = (ulong *)0x0;
      while (puVar9 = puVar18, puVar9 != (ulong *)0x0) {
        if ((*puVar9 <= *param_3) && (*param_3 < puVar9[1])) {
          uVar16 = puVar9[2];
          piVar17 = (int *)puVar9[3];
          if (puVar9 != DAT_039f7a10) {
            puVar14[5] = puVar9[5];
            puVar9[5] = (ulong)DAT_039f7a10;
            DAT_039f7a10 = puVar9;
          }
          goto LAB_030340a0;
        }
        puVar12 = puVar9;
        if ((*puVar9 | puVar9[1]) == 0) break;
        puVar18 = (ulong *)puVar9[5];
        if (puVar18 != (ulong *)0x0) {
          puVar14 = puVar9;
        }
      }
      goto LAB_03033fc0;
    }
    puVar10 = &DAT_039f7a48;
    DAT_039a4dd0 = param_1[4];
    DAT_039f7a08 = param_1[5];
    do {
      puVar10[-6] = 0;
      puVar10[-5] = 0;
      puVar10[-1] = puVar10;
      puVar10 = puVar10 + 6;
    } while (puVar10 != (undefined8 *)0x39f7bc8);
    DAT_039f7b90 = 0;
    DAT_039f7a10 = &DAT_039f7a18;
    *(undefined4 *)(param_3 + 5) = 0;
  }
  puVar14 = (ulong *)0x0;
  puVar12 = (ulong *)0x0;
LAB_03033fc0:
  uVar21 = (ulong)*(ushort *)(param_1 + 3);
  uVar7 = 0;
  uVar13 = 0;
  bVar3 = false;
  piVar20 = (int *)0x0;
  piVar17 = (int *)0x0;
  while (uVar21 = uVar21 - 1, uVar21 != 0xffffffffffffffff) {
    iVar2 = *piVar15;
    piVar19 = piVar17;
    if (iVar2 == 1) {
      uVar11 = uVar16 + *(long *)(piVar15 + 4);
      if ((uVar11 <= *param_3) && (*param_3 < uVar11 + *(long *)(piVar15 + 10))) {
        bVar3 = true;
        uVar7 = uVar11 + *(long *)(piVar15 + 10);
        uVar13 = uVar11;
      }
    }
    else {
      piVar19 = piVar15;
      if ((iVar2 != 0x6474e550) && (piVar19 = piVar17, iVar2 == 2)) {
        piVar20 = piVar15;
      }
    }
    piVar15 = piVar15 + 0xe;
    piVar17 = piVar19;
  }
  if (!bVar3) {
    return 0;
  }
  if (param_2 >= 0x30) {
    if ((puVar14 != (ulong *)0x0) && (puVar12 != (ulong *)0x0)) {
      puVar14[5] = puVar12[5];
      puVar12[5] = (ulong)DAT_039f7a10;
      DAT_039f7a10 = puVar12;
    }
    puVar12 = DAT_039f7a10;
    DAT_039f7a10[2] = uVar16;
    puVar12[3] = (ulong)piVar17;
    puVar12[4] = (ulong)piVar20;
    *puVar12 = uVar13;
    puVar12[1] = uVar7;
  }
LAB_030340a0:
  if (piVar17 == (int *)0x0) {
    return 0;
  }
  lVar1 = uVar16 + *(long *)(piVar17 + 4);
  if (*(char *)(uVar16 + *(long *)(piVar17 + 4)) != '\x01') {
    return 1;
  }
  bVar4 = *(byte *)(lVar1 + 1);
  ppuVar5 = (ulong **)FUN_03033a44(bVar4,(long)param_3);
  ppuVar5 = FUN_03033aa4(bVar4,ppuVar5,(ulong **)(lVar1 + 4),&local_40);
  bVar4 = *(byte *)(lVar1 + 2);
  if ((bVar4 != 0xff) && (*(char *)(lVar1 + 3) == ';')) {
    ppuVar6 = (ulong **)FUN_03033a44(bVar4,(long)param_3);
    ppuVar5 = FUN_03033aa4(bVar4,ppuVar6,ppuVar5,&local_38);
    if (local_38 == (ulong *)0x0) {
      return 1;
    }
    if (((ulong)ppuVar5 & 3) == 0) {
      uVar16 = *param_3;
      if (uVar16 < (ulong)(lVar1 + *(int *)ppuVar5)) {
        return 1;
      }
      uVar7 = (long)local_38 - 1;
      if (uVar16 < (ulong)(lVar1 + *(int *)(ppuVar5 + uVar7))) {
        uVar13 = 0;
        uVar21 = uVar7;
        do {
          uVar11 = uVar21;
          if (uVar11 <= uVar13) {
                    // WARNING: Subroutine does not return
            abort();
          }
          uVar7 = uVar11 + uVar13 >> 1;
          uVar21 = uVar7;
        } while ((uVar16 < (ulong)(lVar1 + *(int *)(ppuVar5 + uVar7))) ||
                (uVar13 = uVar7 + 1, uVar21 = uVar11,
                (ulong)(lVar1 + *(int *)(ppuVar5 + uVar7 + 1)) <= uVar16));
      }
      uVar16 = lVar1 + *(int *)((long)ppuVar5 + uVar7 * 8 + 4);
      bVar4 = FUN_03033e80(uVar16);
      uVar13 = FUN_03033984(bVar4);
      FUN_03033aa4(bVar4 & 0xf,(ulong **)0x0,(ulong **)(uVar16 + (uVar13 & 0xffffffff) + 8),
                   &local_30);
      iVar2 = *(int *)(ppuVar5 + uVar7);
      if (*param_3 < (ulong)(lVar1 + iVar2 + (long)local_30)) {
        param_3[4] = uVar16;
      }
      param_3[3] = lVar1 + iVar2;
      return 1;
    }
  }
  local_28 = param_3[1];
  local_20 = param_3[2];
  local_10 = 4;
  local_30 = (ulong *)0x0;
  local_18 = local_40;
  puVar8 = FUN_03033d20((long)&local_30,(uint *)local_40,*param_3);
  param_3[4] = (ulong)puVar8;
  if (puVar8 != (uint *)0x0) {
    bVar4 = FUN_03033e80((long)puVar8);
    ppuVar5 = (ulong **)FUN_03033a44(bVar4,(long)param_3);
    FUN_03033aa4(bVar4,ppuVar5,(ulong **)(param_3[4] + 8),&local_38);
    param_3[3] = (ulong)local_38;
  }
  return 1;
}



int FUN_030342ac(long param_1,long param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  ulong **ppuVar3;
  ulong *local_10;
  ulong *local_8;
  
  bVar2 = FUN_03033e80(param_2);
  ppuVar3 = (ulong **)FUN_030339e4(bVar2,param_1);
  FUN_03033aa4(bVar2,ppuVar3,(ulong **)(param_2 + 8),&local_10);
  bVar2 = FUN_03033e80(param_3);
  ppuVar3 = (ulong **)FUN_030339e4(bVar2,param_1);
  FUN_03033aa4(bVar2,ppuVar3,(ulong **)(param_3 + 8),&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}



long FUN_03034348(ulong **param_1,uint *param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong **ppuVar9;
  ulong *local_8;
  
  ppuVar9 = (ulong **)0x0;
  uVar3 = 0;
  lVar8 = 0;
  lVar5 = 0;
  do {
    if (*param_2 == 0) {
      return lVar8;
    }
    if (param_2[1] != 0) {
      lVar7 = (long)param_2 + (4 - (long)(int)param_2[1]);
      if (lVar7 != lVar5) {
        bVar2 = FUN_03033c24(lVar7);
        uVar3 = (ushort)bVar2;
        if (uVar3 == 0xff) {
          return -1;
        }
        ppuVar9 = (ulong **)FUN_030339e4(bVar2,(long)param_1);
        uVar1 = *(ushort *)(param_1 + 4);
        lVar5 = lVar7;
        if ((uVar1 & 0x7f8) == 0x7f8) {
          *(ushort *)(param_1 + 4) = uVar1 & 0xf800 | uVar1 & 7 | (ushort)bVar2 << 3;
        }
        else if ((uVar1 >> 3 & 0xff) != uVar3) {
          *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
        }
      }
      FUN_03033aa4((byte)uVar3,ppuVar9,(ulong **)(param_2 + 2),&local_8);
      uVar4 = FUN_03033984((byte)uVar3);
      uVar6 = 0xffffffffffffffff;
      if ((uVar4 & 0xffffffff) < 8) {
        uVar6 = (1L << ((uVar4 & 7) << 3)) - 1;
      }
      if (((uVar6 & (ulong)local_8) != 0) && (lVar8 = lVar8 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}



void FUN_030344a8(long param_1,long *param_2,uint *param_3)

{
  ushort uVar1;
  byte bVar2;
  ulong **ppuVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong *local_8;
  ushort uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x20) >> 3;
  uVar3 = uVar1 & 0xff;
  ppuVar4 = (ulong **)FUN_030339e4((byte)uVar1,param_1);
  lVar5 = 0;
  for (; *param_3 != 0; param_3 = (uint *)((long)param_3 + (ulong)*param_3 + 4)) {
    if (param_3[1] != 0) {
      lVar9 = lVar5;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar9 = (long)param_3 + (4 - (long)(int)param_3[1]), lVar9 != lVar5)) {
        bVar2 = FUN_03033c24(lVar9);
        uVar3 = (ushort)bVar2;
        ppuVar4 = (ulong **)FUN_030339e4(bVar2,param_1);
      }
      if (uVar3 == 0) {
        uVar6 = *(ulong *)(param_3 + 2);
      }
      else {
        FUN_03033aa4((byte)uVar3,ppuVar4,(ulong **)(param_3 + 2),&local_8);
        uVar7 = FUN_03033984((byte)uVar3);
        uVar6 = 0xffffffffffffffff;
        if ((uVar7 & 0xffffffff) < 8) {
          uVar6 = (1L << ((uVar7 & 7) << 3)) - 1;
        }
        uVar6 = uVar6 & (ulong)local_8;
      }
      lVar5 = lVar9;
      if ((uVar6 != 0) && (lVar9 = *param_2, lVar9 != 0)) {
        lVar8 = *(long *)(lVar9 + 8);
        *(long *)(lVar9 + 8) = lVar8 + 1;
        *(uint **)(lVar9 + (lVar8 + 2) * 8) = param_3;
      }
    }
  }
  return;
}



uint * FUN_030345dc(ulong **param_1,ulong *param_2)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong **ppuVar6;
  ulong **ppuVar7;
  uint *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  uint **ppuVar13;
  size_t __size;
  ulong uVar14;
  ulong **ppuVar15;
  ulong **ppuVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong **ppuVar22;
  ulong *local_18;
  ulong **local_10;
  void *local_8;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) goto LAB_03034608;
  puVar20 = (ulong *)(ulong)(*(uint *)(param_1 + 4) >> 0xb);
  if (puVar20 == (ulong *)0x0) {
    if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
      puVar20 = (ulong *)FUN_03034348(param_1,(uint *)param_1[3]);
      if (puVar20 != (ulong *)0xffffffffffffffff) goto LAB_03034680;
LAB_03034640:
      param_1[4] = (ulong *)0x0;
      *(undefined2 *)(param_1 + 4) = 0x7f8;
      param_1[3] = (ulong *)&DAT_039f7ba0;
    }
    else {
      for (ppuVar13 = (uint **)param_1[3]; *ppuVar13 != (uint *)0x0; ppuVar13 = ppuVar13 + 1) {
        lVar5 = FUN_03034348(param_1,*ppuVar13);
        if (lVar5 == -1) goto LAB_03034640;
        puVar20 = (ulong *)((long)puVar20 + lVar5);
      }
LAB_03034680:
      uVar3 = (uint)puVar20 & 0x1fffff;
      if ((ulong *)(ulong)uVar3 == puVar20) {
        uVar3 = *(uint *)(param_1 + 4) & 0x7ff | uVar3 << 0xb;
      }
      else {
        uVar3 = *(uint *)(param_1 + 4) & 0x7ff;
      }
      *(uint *)(param_1 + 4) = uVar3;
      if (puVar20 != (ulong *)0x0) goto LAB_030346a8;
    }
  }
  else {
LAB_030346a8:
    __size = ((long)puVar20 + 2U) * 8;
    local_10 = (ulong **)malloc(__size);
    if (local_10 != (ulong **)0x0) {
      local_10[1] = (ulong *)0x0;
      local_8 = malloc(__size);
      if (local_8 != (void *)0x0) {
        *(undefined8 *)((long)local_8 + 8) = 0;
      }
      if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
        FUN_030344a8((long)param_1,(long *)&local_10,(uint *)param_1[3]);
      }
      else {
        for (ppuVar13 = (uint **)param_1[3]; *ppuVar13 != (uint *)0x0; ppuVar13 = ppuVar13 + 1) {
          FUN_030344a8((long)param_1,(long *)&local_10,*ppuVar13);
        }
      }
      pvVar1 = local_8;
      ppuVar6 = local_10;
      if ((local_10 != (ulong **)0x0) && (local_10[1] != puVar20)) {
LAB_03034a00:
                    // WARNING: Subroutine does not return
        abort();
      }
      if ((*(byte *)(param_1 + 4) >> 2 & 1) == 0) {
        if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
          pcVar17 = FUN_030337f4;
        }
        else {
          pcVar17 = FUN_03033b94;
        }
      }
      else {
        pcVar17 = FUN_030342ac;
      }
      if (local_8 == (void *)0x0) {
        FUN_030338d0(param_1,pcVar17,(long)local_10);
      }
      else {
        ppuVar7 = local_10 + 2;
        puVar11 = local_10[1];
        ppuVar15 = (ulong **)&DAT_039f7b98;
        ppuVar22 = ppuVar7;
        for (puVar21 = (ulong *)0x0; puVar21 != puVar11; puVar21 = (ulong *)((long)puVar21 + 1)) {
          while ((ppuVar15 != (ulong **)&DAT_039f7b98 &&
                 (iVar4 = (*pcVar17)(param_1,*ppuVar22,*ppuVar15), iVar4 < 0))) {
            ppuVar16 = *(ulong ***)((long)pvVar1 + (long)ppuVar15 + (0x10 - (long)ppuVar7));
            *(undefined8 *)((long)pvVar1 + (long)ppuVar15 + (0x10 - (long)ppuVar7)) = 0;
            ppuVar15 = ppuVar16;
          }
          *(ulong ***)((long)pvVar1 + (long)puVar21 * 8 + 0x10) = ppuVar15;
          ppuVar15 = ppuVar22;
          ppuVar22 = ppuVar22 + 1;
        }
        lVar5 = 0;
        puVar21 = (ulong *)0x0;
        for (puVar10 = (ulong *)0x0; puVar10 != puVar11; puVar10 = (ulong *)((long)puVar10 + 1)) {
          if (*(long *)((long)pvVar1 + (long)puVar10 * 8 + 0x10) == 0) {
            lVar19 = lVar5 + 2;
            lVar5 = lVar5 + 1;
            *(ulong **)((long)pvVar1 + lVar19 * 8) = *ppuVar7;
          }
          else {
            lVar19 = (long)puVar21 + 2;
            puVar21 = (ulong *)((long)puVar21 + 1);
            ppuVar6[lVar19] = *ppuVar7;
          }
          ppuVar7 = ppuVar7 + 1;
        }
        ppuVar6[1] = puVar21;
        *(long *)((long)pvVar1 + 8) = lVar5;
        if ((ulong *)(*(long *)((long)local_8 + 8) + (long)local_10[1]) != puVar20)
        goto LAB_03034a00;
        FUN_030338d0(param_1,pcVar17,(long)local_8);
        pvVar1 = local_8;
        ppuVar6 = local_10;
        lVar5 = *(long *)((long)local_8 + 8);
        if (lVar5 != 0) {
          puVar20 = local_10[1];
          lVar19 = lVar5 << 3;
          do {
            lVar12 = lVar5 + -1;
            puVar21 = *(ulong **)((long)pvVar1 + lVar19 + 8);
            ppuVar7 = ppuVar6 + (long)puVar20;
            while (puVar20 != (ulong *)0x0) {
              iVar4 = (*pcVar17)(param_1,ppuVar7[1],puVar21);
              if (iVar4 < 1) break;
              *(ulong **)((long)(ppuVar7 + -1) + lVar19 + 0x10) = ppuVar7[1];
              puVar20 = (ulong *)((long)puVar20 + -1);
              ppuVar7 = ppuVar7 + -1;
            }
            lVar19 = lVar19 + -8;
            ppuVar6[(long)puVar20 + lVar5 + 1] = puVar21;
            lVar5 = lVar12;
          } while (lVar12 != 0);
          ppuVar6[1] = (ulong *)((long)ppuVar6[1] + *(long *)((long)pvVar1 + 8));
        }
        free(local_8);
      }
      *local_10 = param_1[3];
      param_1[3] = (ulong *)local_10;
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    }
  }
  if (param_2 < *param_1) {
    return (uint *)0x0;
  }
LAB_03034608:
  bVar2 = *(byte *)(param_1 + 4);
  if ((bVar2 & 1) == 0) {
    if ((bVar2 >> 1 & 1) == 0) {
      puVar8 = FUN_03033d20((long)param_1,(uint *)param_1[3],(long)param_2);
      return puVar8;
    }
    for (ppuVar13 = (uint **)param_1[3]; *ppuVar13 != (uint *)0x0; ppuVar13 = ppuVar13 + 1) {
      puVar8 = FUN_03033d20((long)param_1,*ppuVar13,(long)param_2);
      if (puVar8 != (uint *)0x0) {
        return puVar8;
      }
    }
  }
  else if ((bVar2 >> 2 & 1) == 0) {
    if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
      uVar18 = 0;
      uVar14 = param_1[3][1];
      while (uVar9 = uVar14, uVar18 < uVar9) {
        uVar14 = uVar9 + uVar18 >> 1;
        puVar8 = (uint *)param_1[3][uVar14 + 2];
        if (*(ulong **)(puVar8 + 2) <= param_2) {
          if (param_2 < (ulong *)((long)*(ulong **)(puVar8 + 2) + *(long *)(puVar8 + 4))) {
            return puVar8;
          }
          uVar18 = uVar14 + 1;
          uVar14 = uVar9;
        }
      }
    }
    else {
