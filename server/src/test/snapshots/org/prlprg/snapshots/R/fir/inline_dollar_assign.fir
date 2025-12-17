fun main() {
  () -+> V { reg l:*, reg c:L, reg r1:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg l3:*, reg c1:L, reg r6:R, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg l6:*, reg __:cls, reg b:*, reg b1:V, reg p:p(V +), reg r11:V, reg c2:L, reg r14:R, reg l8:*, reg r15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r17:R, reg l10:*, reg dx5:V, reg r18:V, reg ____:cls, reg b2:*, reg b3:V, reg p1:p(V +), reg r20:V |
    mkenv;
    l = ld x;
    c = `is.object`(l);
    if c then L1() else L2(1.0, l);
  L0(dx1):
    st x = dx1;
    l3 = ld x;
    c1 = `is.object`(l3);
    if c1 then L5() else L6(2.0, l3);
  L1():
    dr = tryDispatchBuiltin.0("$<-", l, 1.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L3() else L2(1.0, dr);
  L2(r1, l2):
    r4 = `$<-`(l2, <sym y>, 1.0);
    goto L0(r4);
  L3():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L4(dx3):
    st x = dx3;
    l6 = ld a;
    __ = ldf `::`;
    check L8() else D0();
  L5():
    dr2 = tryDispatchBuiltin.0("$<-", l3, 2.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L7() else L6(2.0, dr2);
  L6(r6, l5):
    r9 = `$<-`(l5, <sym z>, 2.0);
    goto L4(r9);
  D0():
    deopt 13 [3.0, l6, 3.0];
  L7():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L8():
    p = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    r11 = dyn __(3.0, NULL, p);
    check L9() else D1();
  D1():
    deopt 16 [3.0, l6, 3.0, r11];
  L9():
    c2 = `is.object`(r11);
    if c2 then L11() else L12(3.0, l6, r11);
  L10(r17, l10, dx5):
    ____ = ldf `::<-`;
    check L14() else D2();
  L11():
    dr4 = tryDispatchBuiltin.0("$<-", r11, 3.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L13() else L12(3.0, l6, dr4);
  L12(r14, l8, r15):
    r18 = `$<-`(r15, <sym c>, 3.0);
    goto L10(r14, l8, r18);
  D2():
    deopt 19 [r17, l10, dx5];
  L13():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(3.0, l6, dx4);
  L14():
    p1 = prom<V +>{
      b2 = ld b;
      b3 = force? b2;
      checkMissing(b3);
      return b3;
    };
    r20 = dyn ____(l10, NULL, p1, dx5);
    check L15() else D3();
  D3():
    deopt 22 [r17, r20];
  L15():
    st a = r20;
    setInvisible.0();
    popenv;
    return r17;
  }
}