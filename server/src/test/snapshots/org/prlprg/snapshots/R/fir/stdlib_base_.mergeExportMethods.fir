fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3120552469;
    st `.mergeExportMethods` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3120552469(new, ns) {
  (reg new:*, reg ns:*) -+> V { var new:*, var ns:*, reg new1:*, reg new2:V, reg c:L, reg new4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg new5:*, reg new6:V, reg p:p(V +), reg r1:V, reg __:cls, reg r2:V, reg parent_env:cls, reg ns1:*, reg ns2:V, reg p1:p(V +), reg r4:V, reg newMethods:*, reg newMethods1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg i7:I, reg r6:V, reg nsimports:*, reg nsimports1:V, reg c2:L, reg i9:I, reg nsimports3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i11:I, reg dx3:V, reg what:*, reg what1:V, reg __1:cls, reg r7:V, reg c3:V, reg r8:V, reg c4:L, reg get:cls, reg what2:*, reg what3:V, reg p2:p(V +), reg ns3:*, reg ns4:V, reg p3:p(V +), reg r11:V, reg __2:cls, reg r12:V, reg r13:cls, reg m1:*, reg m2:V, reg p4:p(V +), reg m3:*, reg m4:V, reg p5:p(V +), reg r16:V, reg l1:*, reg c5:L, reg i15:I, reg r18:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i17:I, reg r20:V, reg dx5:V, reg what4:*, reg what5:V, reg ____:cls, reg r21:V, reg i18:I |
    mkenv;
    st new = new;
    st ns = ns;
    new1 = ld new;
    check L8() else D0();
  D0():
    deopt 0 [new1];
  L8():
    new2 = force? new1;
    checkMissing(new2);
    c = `is.object`(new2);
    if c then L9() else L10(new2);
  L0(dx1):
    st newMethods = dx1;
    parent_env = ldf `parent.env`;
    check L14() else D3();
  L9():
    dr = tryDispatchBuiltin.1("[", new2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(new4):
    startsWith = ldf startsWith;
    check L12() else D1();
  D1():
    deopt 3 [new4];
  D3():
    deopt 10 [];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L12():
    p = prom<V +>{
      new5 = ld new;
      new6 = force? new5;
      checkMissing(new6);
      return new6;
    };
    r1 = dyn startsWith(p, ".__M__");
    check L13() else D2();
  L14():
    p1 = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r4 = dyn parent_env(p1);
    check L15() else D4();
  D2():
    deopt 6 [new4, r1];
  D4():
    deopt 12 [r4];
  L13():
    __ = ldf `[` in base;
    r2 = dyn __(new4, r1);
    goto L0(r2);
  L15():
    st nsimports = r4;
    newMethods = ld newMethods;
    check L16() else D5();
  D5():
    deopt 14 [newMethods];
  L16():
    newMethods1 = force? newMethods;
    checkMissing(newMethods1);
    s = toForSeq(newMethods1);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L17() else L7();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L17():
    setInvisible.0();
    popenv;
    return i2;
  L2(i7, r6):
    r8 = `!`(r6);
    c4 = `as.logical`(r8);
    if c4 then L25() else L4();
  L18():
    nsimports = ld nsimports;
    check L20() else D6();
  L19():
    r5 = dyn base(<lang `<-`(m1, `[[`(nsimports, what))>);
    goto L2(i2, r5);
  D6():
    deopt 17 [i2, nsimports];
  L4():
    goto L6(i7);
  L6(i18):
    goto L1(i18);
  L20():
    nsimports1 = force? nsimports;
    checkMissing(nsimports1);
    c2 = `is.object`(nsimports1);
    if c2 then L21() else L22(i2, nsimports1);
  L25():
    get = ldf get;
    check L26() else D8();
  D8():
    deopt 26 [i7];
  L3(i11, dx3):
    st m1 = dx3;
    c3 = `==`(dx3, NULL);
    goto L2(i11, c3);
  L21():
    dr2 = tryDispatchBuiltin.1("[[", nsimports1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(i2, dr2);
  L22(i9, nsimports3):
    what = ld what;
    check L24() else D7();
  L26():
    p2 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p3 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r11 = dyn get[, envir](p2, p3);
    check L27() else D9();
  D7():
    deopt 19 [i9, nsimports3, what];
  D9():
    deopt 30 [i7, r11];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i2, dx2);
  L24():
    what1 = force? what;
    __1 = ldf `[[` in base;
    r7 = dyn __1(nsimports3, what1);
    goto L3(i9, r7);
  L27():
    st m2 = r11;
    __2 = ldf `::`;
    check L28() else D10();
  D10():
    deopt 33 [i7];
  L28():
    r12 = dyn __2("methods", "mergeMethods");
    check L29() else D11();
  D11():
    deopt 36 [i7, r12];
  L29():
    checkFun.0(r12);
    r13 = r12 as cls;
    p4 = prom<V +>{
      m1 = ld m1;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    p5 = prom<V +>{
      m3 = ld m2;
      m4 = force? m3;
      checkMissing(m4);
      return m4;
    };
    r16 = dyn r13(p4, p5);
    check L30() else D12();
  D12():
    deopt 40 [i7, r16];
  L30():
    l1 = ld ns;
    c5 = `is.object`(l1);
    if c5 then L31() else L32(i7, r16, l1);
  L5(i17, r20, dx5):
    st ns = dx5;
    goto L6(i17);
  L31():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(i7, r16, dr4);
  L32(i15, r18, l3):
    what4 = ld what;
    check L34() else D13();
  D13():
    deopt 42 [i15, r18, l3, r16, what4];
  L33():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(i7, r16, dx4);
  L34():
    what5 = force? what4;
    ____ = ldf `[[<-` in base;
    r21 = dyn ____(l3, r16, what5);
    goto L5(i15, r18, r21);
  }
}