fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1171288635;
    st dropBraces = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1171288635(lines) {
  (reg lines:*) -+> V { var lines:*, reg sub:cls, reg lines1:*, reg lines2:V, reg p:p(V +), reg r1:V, reg grepl:cls, reg lines3:*, reg lines4:V, reg p1:p(V +), reg r3:V, reg grepl1:cls, reg lines5:*, reg lines6:V, reg p2:p(V +), reg r5:V, reg lines7:*, reg lines8:V, reg c:L, reg lines10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg lines13:V, reg r7:V, reg start:*, reg start1:V, reg end:*, reg end1:V, reg r8:V, reg cumsum:cls, reg r9:V, reg r10:V, reg start2:*, reg start3:V, reg r11:V, reg end2:*, reg end3:V, reg r12:V, reg __:cls, reg r13:V, reg sub1:cls, reg lines14:*, reg lines15:V, reg p3:p(V +), reg r15:V, reg lines16:*, reg lines17:V, reg c1:L, reg lines19:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg grepl2:cls, reg lines20:*, reg lines21:V, reg p4:p(V +), reg r17:V, reg r18:V, reg __1:cls, reg r19:V, reg lines22:*, reg lines23:V |
    mkenv;
    st lines = lines;
    sub = ldf sub;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      lines1 = ld lines;
      lines2 = force? lines1;
      checkMissing(lines2);
      return lines2;
    };
    r1 = dyn sub("[{].*[}]", " ", p);
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st lines = r1;
    grepl = ldf grepl;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      lines3 = ld lines;
      lines4 = force? lines3;
      checkMissing(lines4);
      return lines4;
    };
    r3 = dyn grepl("[{]", p1);
    check L6() else D3();
  D3():
    deopt 11 [r3];
  L6():
    st start = r3;
    grepl1 = ldf grepl;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    p2 = prom<V +>{
      lines5 = ld lines;
      lines6 = force? lines5;
      checkMissing(lines6);
      return lines6;
    };
    r5 = dyn grepl1("[}]", p2);
    check L8() else D5();
  D5():
    deopt 17 [r5];
  L8():
    st end = r5;
    lines7 = ld lines;
    check L9() else D6();
  D6():
    deopt 19 [lines7];
  L9():
    lines8 = force? lines7;
    checkMissing(lines8);
    c = `is.object`(lines8);
    if c then L10() else L11(lines8);
  L0(dx1):
    st lines = dx1;
    sub1 = ldf sub;
    check L20() else D12();
  L10():
    dr = tryDispatchBuiltin.1("[", lines8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(lines10):
    sym = ldf cumsum;
    base = ldf cumsum in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  D12():
    deopt 38 [];
  L1(lines13, r7):
    r10 = `==`(r7, 0.0);
    start2 = ld start;
    check L18() else D10();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    start = ld start;
    check L15() else D7();
  L14():
    r6 = dyn base(<lang `-`(start, end)>);
    goto L1(lines10, r6);
  L20():
    p3 = prom<V +>{
      lines14 = ld lines;
      lines15 = force? lines14;
      checkMissing(lines15);
      return lines15;
    };
    r15 = dyn sub1("[{].*", "", p3);
    check L21() else D13();
  D7():
    deopt 23 [lines10, start];
  D10():
    deopt 30 [lines13, r10, start2];
  D13():
    deopt 42 [r15];
  L15():
    start1 = force? start;
    checkMissing(start1);
    end = ld end;
    check L16() else D8();
  L18():
    start3 = force? start2;
    checkMissing(start3);
    r11 = `||`(r10, start3);
    end2 = ld end;
    check L19() else D11();
  L21():
    st lines = r15;
    lines16 = ld lines;
    check L22() else D14();
  D8():
    deopt 24 [lines10, start1, end];
  D11():
    deopt 32 [lines13, r11, end2];
  D14():
    deopt 44 [lines16];
  L16():
    end1 = force? end;
    checkMissing(end1);
    r8 = `-`(start1, end1);
    cumsum = ldf cumsum in base;
    r9 = dyn cumsum(r8);
    check L17() else D9();
  L19():
    end3 = force? end2;
    checkMissing(end3);
    r12 = `||`(r11, end3);
    __ = ldf `[` in base;
    r13 = dyn __(lines13, r12);
    goto L0(r13);
  L22():
    lines17 = force? lines16;
    checkMissing(lines17);
    c1 = `is.object`(lines17);
    if c1 then L23() else L24(lines17);
  D9():
    deopt 28 [lines10, r9];
  L2(dx3):
    st lines = dx3;
    lines22 = ld lines;
    check L28() else D17();
  L17():
    goto L1(lines10, r9);
  L23():
    dr2 = tryDispatchBuiltin.1("[", lines17);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(lines19):
    grepl2 = ldf grepl;
    check L26() else D15();
  D15():
    deopt 47 [lines19];
  D17():
    deopt 54 [lines22];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L26():
    p4 = prom<V +>{
      lines20 = ld lines;
      lines21 = force? lines20;
      checkMissing(lines21);
      return lines21;
    };
    r17 = dyn grepl2(".*[}]", p4);
    check L27() else D16();
  L28():
    lines23 = force? lines22;
    checkMissing(lines23);
    popenv;
    return lines23;
  D16():
    deopt 50 [lines19, r17];
  L27():
    r18 = `!`(r17);
    __1 = ldf `[` in base;
    r19 = dyn __1(lines19, r18);
    goto L2(r19);
  }
}