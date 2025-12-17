fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1985386329;
    st resetAPI = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1985386329(newloc) {
  (reg newloc:*) -+> V { var newloc:*, reg newloc_isMissing:L, reg newloc_orDefault:*, reg newloc1:*, reg newloc2:V, reg r:V, reg c:L, reg newloc3:*, reg newloc4:V, reg l:*, reg c1:L, reg newloc6:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg newloc8:V, reg dx1:V, reg r1:V, reg l3:*, reg c2:L, reg r3:dots, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg l6:*, reg c3:L, reg r8:dots, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r10:dots, reg dx5:V, reg r11:V |
    mkenv;
    newloc_isMissing = missing.0(newloc);
    if newloc_isMissing then L0("") else L0(newloc);
  L0(newloc_orDefault):
    st newloc = newloc_orDefault;
    newloc1 = ld newloc;
    check L3() else D0();
  D0():
    deopt 0 [newloc1];
  L3():
    newloc2 = force? newloc1;
    checkMissing(newloc2);
    r = `!=`(newloc2, "");
    c = `as.logical`(r);
    if c then L4() else L1();
  L1():
    goto L2();
  L2():
    l3 = ld apidata;
    c2 = `is.object`(l3);
    if c2 then L12() else L13(NULL, l3);
  L4():
    newloc3 = ld newloc;
    check L5() else D1();
  D1():
    deopt 4 [newloc3];
  L5():
    newloc4 = force? newloc3;
    checkMissing(newloc4);
    l = ld apidata;
    c1 = `is.object`(l);
    if c1 then L7() else L8(newloc4, l);
  L11(dx3):
    st apidata = dx3;
    l6 = ld apidata;
    c3 = `is.object`(l6);
    if c3 then L16() else L17(NULL, l6);
  L12():
    dr2 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(NULL, dr2);
  L13(r3, l5):
    r6 = `$<-`(l5, <sym wrelines>, NULL);
    goto L11(r6);
  L6(newloc8, dx1):
    st apidata = dx1;
    goto L2();
  L7():
    dr = tryDispatchBuiltin.0("$<-", l, newloc4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(newloc4, dr);
  L8(newloc6, l2):
    r1 = `$<-`(l2, <sym wreloc>, newloc4);
    goto L6(newloc6, r1);
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L15(r10, dx5):
    st apidata = dx5;
    invisible.0();
    popenv;
    return r10;
  L16():
    dr4 = tryDispatchBuiltin.0("$<-", l6, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(NULL, dr4);
  L17(r8, l8):
    r11 = `$<-`(l8, <sym fapi>, NULL);
    goto L15(r8, r11);
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(newloc4, dx);
  L18():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(NULL, dx4);
  }
}