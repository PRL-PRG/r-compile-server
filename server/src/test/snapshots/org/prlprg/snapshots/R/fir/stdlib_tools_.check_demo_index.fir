fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner714511398;
    st `.check_demo_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner714511398(demoDir) {
  (reg demoDir:*) -+> V { var demoDir:*, reg dir_exists:cls, reg demoDir1:*, reg demoDir2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg gettextf:cls, reg demoDir3:*, reg demoDir4:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg _build_demo_index:cls, reg demoDir5:*, reg demoDir6:V, reg p3:p(V +), reg r9:V, reg tryCatch:cls, reg read_00Index:cls, reg file_path:cls, reg demoDir7:*, reg demoDir8:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:cls, reg p7:p(V +), reg r17:V, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg info_from_build:*, reg info_from_build1:V, reg c1:L, reg info_from_build3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grep:cls, reg info_from_build4:*, reg info_from_build5:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r20:V, reg p8:p(V +), reg r22:V, reg __1:cls, reg r23:V, reg info_from_index:*, reg info_from_index1:V, reg c3:L, reg info_from_index3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _notin_:cls, reg info_from_index4:*, reg info_from_index5:V, reg c4:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r24:V, reg p9:p(V +), reg info_from_build8:*, reg info_from_build9:V, reg c5:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r26:V, reg p10:p(V +), reg r28:V, reg __4:cls, reg r29:V, reg list:cls, reg r30:V, reg l:*, reg class__:cls, reg r31:V, reg bad_entries:*, reg bad_entries1:V |
    mkenv;
    st demoDir = demoDir;
    dir_exists = ldf `dir.exists`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      demoDir1 = ld demoDir;
      demoDir2 = force? demoDir1;
      checkMissing(demoDir2);
      return demoDir2;
    };
    r1 = dyn dir_exists(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L7() else L0();
  L0():
    goto L1();
  L1():
    _build_demo_index = ldf `.build_demo_index`;
    check L11() else D4();
  L7():
    stop = ldf stop;
    check L8() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 14 [];
  L8():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        demoDir3 = ld demoDir;
        demoDir4 = force? demoDir3;
        checkMissing(demoDir4);
        return demoDir4;
      };
      r4 = dyn gettextf("directory '%s' does not exist", p1);
      return r4;
    };
    r6 = dyn stop[, domain](p2, NA_LGL);
    check L9() else D3();
  L11():
    p3 = prom<V +>{
      demoDir5 = ld demoDir;
      demoDir6 = force? demoDir5;
      checkMissing(demoDir6);
      return demoDir6;
    };
    r9 = dyn _build_demo_index(p3);
    check L12() else D5();
  D3():
    deopt 10 [r6];
  D5():
    deopt 16 [r9];
  L9():
    goto L1();
  L12():
    st info_from_build = r9;
    tryCatch = ldf tryCatch;
    check L13() else D6();
  D6():
    deopt 19 [];
  L13():
    p6 = prom<V +>{
      read_00Index = ldf `read.00Index`;
      p5 = prom<V +>{
        file_path = ldf `file.path`;
        p4 = prom<V +>{
          demoDir7 = ld demoDir;
          demoDir8 = force? demoDir7;
          checkMissing(demoDir8);
          return demoDir8;
        };
        r11 = dyn file_path(p4, "00Index");
        return r11;
      };
      r13 = dyn read_00Index(p5);
      return r13;
    };
    p7 = prom<V +>{
      r15 = clos inner3708401697;
      return r15;
    };
    r17 = dyn tryCatch[, error](p6, p7);
    check L14() else D7();
  D7():
    deopt 23 [r17];
  L14():
    st info_from_index = r17;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r19):
    st bad_entries = r19;
    l = ld bad_entries;
    class__ = ldf `class<-`;
    check L30() else D15();
  L15():
    info_from_build = ld info_from_build;
    check L17() else D8();
  L16():
    r18 = dyn base[missing_from_index, missing_from_demos](<lang `[`(info_from_build, grep("^[[:space:]]*$", `[`(info_from_build, , 2)), 1)>, <lang `[`(info_from_index, `%notin%`(`[`(info_from_index, , 1), `[`(info_from_build, , 1)), 1)>);
    goto L2(r18);
  D8():
    deopt 27 [info_from_build];
  D15():
    deopt 53 ["check_demo_index", l, "check_demo_index"];
  L17():
    info_from_build1 = force? info_from_build;
    checkMissing(info_from_build1);
    c1 = `is.object`(info_from_build1);
    if c1 then L18() else L19(info_from_build1);
  L30():
    r31 = dyn class__(l, NULL, "check_demo_index");
    check L31() else D16();
  D16():
    deopt 55 ["check_demo_index", r31];
  L3(dx1):
    info_from_index = ld info_from_index;
    check L23() else D11();
  L18():
    dr = tryDispatchBuiltin.1("[", info_from_build1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(info_from_build3):
    grep = ldf grep;
    check L21() else D9();
  L31():
    st bad_entries = r31;
    bad_entries = ld bad_entries;
    check L32() else D17();
  D9():
    deopt 30 [info_from_build3];
  D11():
    deopt 37 [info_from_index];
  D17():
    deopt 57 [bad_entries];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L21():
    p8 = prom<V +>{
      info_from_build4 = ld info_from_build;
      info_from_build5 = force? info_from_build4;
      checkMissing(info_from_build5);
      c2 = `is.object`(info_from_build5);
      if c2 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", info_from_build5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r20 = dyn __(info_from_build5, <missing>, 2);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn grep("^[[:space:]]*$", p8);
    check L22() else D10();
  L23():
    info_from_index1 = force? info_from_index;
    checkMissing(info_from_index1);
    c3 = `is.object`(info_from_index1);
    if c3 then L24() else L25(info_from_index1);
  L32():
    bad_entries1 = force? bad_entries;
    checkMissing(bad_entries1);
    popenv;
    return bad_entries1;
  D10():
    deopt 33 [info_from_build3, r22];
  L4(dx5):
    list = ldf list in base;
    r30 = dyn list(dx1, dx5);
    check L29() else D14();
  L22():
    __1 = ldf `[` in base;
    r23 = dyn __1(info_from_build3, r22, 1);
    goto L3(r23);
  L24():
    dr4 = tryDispatchBuiltin.1("[", info_from_index1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(dr4);
  L25(info_from_index3):
    _notin_ = ldf `%notin%`;
    check L27() else D12();
  D12():
    deopt 40 [info_from_index3];
  D14():
    deopt 48 [r30];
  L26():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L27():
    p9 = prom<V +>{
      info_from_index4 = ld info_from_index;
      info_from_index5 = force? info_from_index4;
      checkMissing(info_from_index5);
      c4 = `is.object`(info_from_index5);
      if c4 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", info_from_index5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r24 = dyn __2(info_from_index5, <missing>, 1);
      goto L0(r24);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p10 = prom<V +>{
      info_from_build8 = ld info_from_build;
      info_from_build9 = force? info_from_build8;
      checkMissing(info_from_build9);
      c5 = `is.object`(info_from_build9);
      if c5 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", info_from_build9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r26 = dyn __3(info_from_build9, <missing>, 1);
      goto L0(r26);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r28 = dyn _notin_(p9, p10);
    check L28() else D13();
  L29():
    goto L2(r30);
  D13():
    deopt 43 [info_from_index3, r28];
  L28():
    __4 = ldf `[` in base;
    r29 = dyn __4(info_from_index3, r28, 1);
    goto L4(r29);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg stop:cls, reg gettextf:cls, reg file_path:cls, reg demoDir:*, reg demoDir1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st e = e;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        file_path = ldf `file.path`;
        p = prom<V +>{
          demoDir = ld demoDir;
          demoDir1 = force? demoDir;
          checkMissing(demoDir1);
          return demoDir1;
        };
        r1 = dyn file_path(p, "00Index");
        return r1;
      };
      r3 = dyn gettextf("cannot read index information in file '%s'", p1);
      return r3;
    };
    r5 = dyn stop[, domain](p2, NA_LGL);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}