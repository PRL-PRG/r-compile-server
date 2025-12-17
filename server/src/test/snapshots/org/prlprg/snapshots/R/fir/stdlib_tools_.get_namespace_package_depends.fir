fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4106284946;
    st `.get_namespace_package_depends` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4106284946(dir, selective_only) {
  (reg dir:*, reg selective_only:*) -+> V { var dir:*, var selective_only:*, reg selective_only_isMissing:L, reg selective_only_orDefault:*, reg _check_namespace:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg selective_only1:*, reg selective_only2:V, reg c:L, reg r2:cls, reg r3:cls, reg r4:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg lapply:cls, reg nsInfo:*, reg nsInfo1:V, reg c1:L, reg nsInfo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg p1:p(V +), reg getter:*, reg getter1:V, reg p2:p(V +), reg r10:V, reg lapply1:cls, reg nsInfo4:*, reg nsInfo5:V, reg c2:L, reg nsInfo7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg p3:p(V +), reg getter2:*, reg getter3:V, reg p4:p(V +), reg r14:V, reg lapply2:cls, reg nsInfo8:*, reg nsInfo9:V, reg c3:L, reg nsInfo11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r15:V, reg p5:p(V +), reg getter4:*, reg getter5:V, reg p6:p(V +), reg r18:V, reg c4:cls, reg r19:V, reg unique:cls, reg sort:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg unlist:cls, reg depends:*, reg depends1:V, reg p7:p(V +), reg r23:V, reg as_character:cls, reg r24:V, reg p8:p(V +), reg r26:V, reg p9:p(V +), reg r28:V |
    mkenv;
    st dir = dir;
    selective_only_isMissing = missing.0(selective_only);
    if selective_only_isMissing then L0(FALSE) else L0(selective_only);
  L0(selective_only_orDefault):
    st selective_only = selective_only_orDefault;
    _check_namespace = ldf `.check_namespace`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn _check_namespace(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st nsInfo = r1;
    selective_only1 = ld selective_only;
    check L6() else D2();
  D2():
    deopt 5 [selective_only1];
  L6():
    selective_only2 = force? selective_only1;
    checkMissing(selective_only2);
    c = `as.logical`(selective_only2);
    if c then L7() else L1();
  L1():
    r4 = clos inner3708401697;
    goto L2(r4);
  L2(r3):
    st getter = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L7():
    r2 = clos inner3708401697;
    goto L2(r2);
  L3(r6):
    st depends = r6;
    unique = ldf unique;
    check L18() else D10();
  L9():
    lapply = ldf lapply;
    check L11() else D3();
  L10():
    r5 = dyn base(<lang lapply(`$`(nsInfo, imports), getter)>, <lang lapply(`$`(nsInfo, importClasses), getter)>, <lang lapply(`$`(nsInfo, importMethods), getter)>);
    goto L3(r5);
  D3():
    deopt 15 [];
  D10():
    deopt 33 [];
  L11():
    p1 = prom<V +>{
      nsInfo = ld nsInfo;
      nsInfo1 = force? nsInfo;
      checkMissing(nsInfo1);
      c1 = `is.object`(nsInfo1);
      if c1 then L1() else L2(nsInfo1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", nsInfo1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(nsInfo3):
      r7 = `$`(nsInfo3, <sym imports>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      getter = ld getter;
      getter1 = force? getter;
      checkMissing(getter1);
      return getter1;
    };
    r10 = dyn lapply(p1, p2);
    check L12() else D4();
  L18():
    p9 = prom<V +>{
      sort = ldf sort;
      p8 = prom<V +>{
        sym1 = ldf `as.character`;
        base1 = ldf `as.character` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        unlist = ldf unlist;
        p7 = prom<V +>{
          depends = ld depends;
          depends1 = force? depends;
          checkMissing(depends1);
          return depends1;
        };
        r23 = dyn unlist[, `use.names`](p7, FALSE);
        as_character = ldf `as.character` in base;
        r24 = dyn as_character(r23);
        goto L0(r24);
      L2():
        r20 = dyn base1(<lang unlist(depends, use.names=FALSE)>);
        goto L0(r20);
      };
      r26 = dyn sort(p8);
      return r26;
    };
    r28 = dyn unique(p9);
    check L19() else D11();
  D4():
    deopt 18 [r10];
  D11():
    deopt 35 [r28];
  L12():
    lapply1 = ldf lapply;
    check L13() else D5();
  L19():
    popenv;
    return r28;
  D5():
    deopt 20 [];
  L13():
    p3 = prom<V +>{
      nsInfo4 = ld nsInfo;
      nsInfo5 = force? nsInfo4;
      checkMissing(nsInfo5);
      c2 = `is.object`(nsInfo5);
      if c2 then L1() else L2(nsInfo5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", nsInfo5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(nsInfo7):
      r11 = `$`(nsInfo7, <sym importClasses>);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      getter2 = ld getter;
      getter3 = force? getter2;
      checkMissing(getter3);
      return getter3;
    };
    r14 = dyn lapply1(p3, p4);
    check L14() else D6();
  D6():
    deopt 23 [r14];
  L14():
    lapply2 = ldf lapply;
    check L15() else D7();
  D7():
    deopt 25 [];
  L15():
    p5 = prom<V +>{
      nsInfo8 = ld nsInfo;
      nsInfo9 = force? nsInfo8;
      checkMissing(nsInfo9);
      c3 = `is.object`(nsInfo9);
      if c3 then L1() else L2(nsInfo9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", nsInfo9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(nsInfo11):
      r15 = `$`(nsInfo11, <sym importMethods>);
      goto L0(r15);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      getter4 = ld getter;
      getter5 = force? getter4;
      checkMissing(getter5);
      return getter5;
    };
    r18 = dyn lapply2(p5, p6);
    check L16() else D8();
  D8():
    deopt 28 [r18];
  L16():
    c4 = ldf c in base;
    r19 = dyn c4(r10, r14, r18);
    check L17() else D9();
  D9():
    deopt 30 [r19];
  L17():
    goto L3(r19);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_list:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg c6:L, reg c8:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg __:cls, reg r5:V, reg length:cls, reg r6:V, reg c11:L, reg c12:V, reg c14:L, reg e7:*, reg e8:V, reg c15:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r7:V, reg character:cls, reg r8:V |
    mkenv;
    st e = e;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L1(c);
  L6():
    e1 = ld e;
    check L8() else D0();
  L7():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    c14 = `as.logical`(c2);
    if c14 then L19() else L4();
  L8():
    e2 = force? e1;
    checkMissing(e2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(e2);
    check L9() else D1();
  L10():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c11 = `as.logical`(r4);
    c12 = `&&`(c5, c11);
    goto L1(c12);
  L4():
    character = ldf character;
    check L25() else D5();
  L9():
    goto L0(r2);
  L11():
    e3 = ld e;
    check L13() else D2();
  L12():
    r3 = dyn base1(<lang `[[`(e, 2)>);
    goto L2(c, r3);
  L19():
    e7 = ld e;
    check L20() else D4();
  D2():
    deopt 8 [c, e3];
  D4():
    deopt 16 [e7];
  D5():
    deopt 22 [];
  L13():
    e4 = force? e3;
    checkMissing(e4);
    c6 = `is.object`(e4);
    if c6 then L14() else L15(c, e4);
  L20():
    e8 = force? e7;
    checkMissing(e8);
    c15 = `is.object`(e8);
    if c15 then L21() else L22(e8);
  L25():
    r8 = dyn character();
    check L26() else D6();
  D6():
    deopt 23 [r8];
  L3(c10, dx1):
    length = ldf length in base;
    r6 = dyn length(dx1);
    check L17() else D3();
  L5(dx3):
    popenv;
    return dx3;
  L14():
    dr = tryDispatchBuiltin.1("[[", e4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(c, dr);
  L15(c8, e6):
    __ = ldf `[[` in base;
    r5 = dyn __(e6, 2);
    goto L3(c8, r5);
  L21():
    dr2 = tryDispatchBuiltin.1("[[", e8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dr2);
  L22(e10):
    __1 = ldf `[[` in base;
    r7 = dyn __1(e10, 1);
    goto L5(r7);
  L26():
    popenv;
    return r8;
  D3():
    deopt 14 [c10, r6];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(c, dx);
  L17():
    goto L2(c10, r6);
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  }
}