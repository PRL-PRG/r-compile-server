fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1342324061;
    st browseVignettes = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1342324061(package, `lib.loc`, all) {
  (reg package:*, reg lib_loc:*, reg all:*) -+> V { var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, reg __:cls, reg r:V, reg r1:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg all1:*, reg all2:V, reg p2:p(V +), reg r5:V, reg unique:cls, reg vinfo:*, reg vinfo1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r6:V, reg p3:p(V +), reg r8:V, reg lapply:cls, reg pkgs:*, reg pkgs1:V, reg p4:p(V +), reg r10:cls, reg p5:p(V +), reg r12:V, reg pkgs2:*, reg pkgs3:V, reg l:*, reg names__:cls, reg r13:V, reg sys_call:cls, reg r14:V, reg l1:*, reg attr__:cls, reg r15:V, reg all3:*, reg all4:V, reg c1:L, reg r16:V, reg sprintf:cls, reg gettext:cls, reg r17:V, reg p6:p(V +), reg r19:V, reg l2:*, reg attr__1:cls, reg r20:V, reg l3:*, reg class__:cls, reg r21:V, reg db:*, reg db1:V |
    mkenv;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L2(TRUE) else L2(all);
  L2(all_orDefault):
    st all = all_orDefault;
    __ = ldf `::`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn __("tools", "getVignetteInfo");
    check L6() else D1();
  D1():
    deopt 4 [r];
  L6():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    p2 = prom<V +>{
      all1 = ld all;
      all2 = force? all1;
      checkMissing(all2);
      return all2;
    };
    r5 = dyn r1(p, p1, p2);
    check L7() else D2();
  D2():
    deopt 9 [r5];
  L7():
    st vinfo = r5;
    unique = ldf unique;
    check L8() else D3();
  D3():
    deopt 12 [];
  L8():
    p3 = prom<V +>{
      vinfo = ld vinfo;
      vinfo1 = force? vinfo;
      checkMissing(vinfo1);
      c = `is.object`(vinfo1);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", vinfo1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r6 = dyn __1(vinfo1, <missing>, "Package");
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn unique(p3);
    check L9() else D4();
  D4():
    deopt 14 [r8];
  L9():
    st pkgs = r8;
    lapply = ldf lapply;
    check L10() else D5();
  D5():
    deopt 17 [];
  L10():
    p4 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    p5 = prom<V +>{
      r10 = clos inner3913899244;
      return r10;
    };
    r12 = dyn lapply(p4, p5);
    check L11() else D6();
  D6():
    deopt 20 [r12];
  L11():
    st db = r12;
    pkgs2 = ld pkgs;
    check L12() else D7();
  D7():
    deopt 22 [pkgs2];
  L12():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    l = ld db;
    names__ = ldf `names<-`;
    check L13() else D8();
  D8():
    deopt 25 [pkgs3, l, pkgs3];
  L13():
    r13 = dyn names__(l, NULL, pkgs3);
    check L14() else D9();
  D9():
    deopt 27 [pkgs3, r13];
  L14():
    st db = r13;
    sys_call = ldf `sys.call`;
    check L15() else D10();
  D10():
    deopt 30 [];
  L15():
    r14 = dyn sys_call();
    check L16() else D11();
  D11():
    deopt 31 [r14];
  L16():
    l1 = ld db;
    attr__ = ldf `attr<-`;
    check L17() else D12();
  D12():
    deopt 33 [r14, l1, r14];
  L17():
    r15 = dyn attr__(l1, NULL, "call", r14);
    check L18() else D13();
  D13():
    deopt 36 [r14, r15];
  L18():
    st db = r15;
    all3 = ld all;
    check L19() else D14();
  D14():
    deopt 38 [all3];
  L19():
    all4 = force? all3;
    checkMissing(all4);
    c1 = `as.logical`(all4);
    if c1 then L20() else L3();
  L3():
    sprintf = ldf sprintf;
    check L22() else D15();
  L4(r16):
    l2 = ld db;
    attr__1 = ldf `attr<-`;
    check L24() else D17();
  L20():
    goto L4("");
  D15():
    deopt 43 [];
  D17():
    deopt 48 [r16, l2, r16];
  L22():
    p6 = prom<V +>{
      gettext = ldf gettext;
      r17 = dyn gettext("Use <code> %s </code> \n to list the vignettes in all <strong>available</strong> packages.");
      return r17;
    };
    r19 = dyn sprintf(p6, "browseVignettes(all = TRUE)");
    check L23() else D16();
  L24():
    r20 = dyn attr__1(l2, NULL, "footer", r16);
    check L25() else D18();
  D16():
    deopt 46 [r19];
  D18():
    deopt 51 [r16, r20];
  L23():
    goto L4(r19);
  L25():
    st db = r20;
    l3 = ld db;
    class__ = ldf `class<-`;
    check L26() else D19();
  D19():
    deopt 56 ["browseVignettes", l3, "browseVignettes"];
  L26():
    r21 = dyn class__(l3, NULL, "browseVignettes");
    check L27() else D20();
  D20():
    deopt 58 ["browseVignettes", r21];
  L27():
    st db = r21;
    db = ld db;
    check L28() else D21();
  D21():
    deopt 60 [db];
  L28():
    db1 = force? db;
    checkMissing(db1);
    popenv;
    return db1;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg vinfo:*, reg vinfo1:V, reg c:L, reg vinfo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vinfo4:*, reg vinfo5:V, reg c1:L, reg vinfo8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg vinfo11:V, reg dx3:V, reg __:cls, reg r:V, reg p1:*, reg p2:V, reg r1:V, reg __1:cls, reg r2:V |
    mkenv;
    st p = p;
    vinfo = ld vinfo;
    check L2() else D0();
  D0():
    deopt 0 [vinfo];
  L2():
    vinfo1 = force? vinfo;
    checkMissing(vinfo1);
    c = `is.object`(vinfo1);
    if c then L3() else L4(vinfo1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", vinfo1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(vinfo3):
    vinfo4 = ld vinfo;
    check L6() else D1();
  D1():
    deopt 2 [vinfo3, vinfo4];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    vinfo5 = force? vinfo4;
    checkMissing(vinfo5);
    c1 = `is.object`(vinfo5);
    if c1 then L7() else L8(vinfo3);
  L1(vinfo11, dx3):
    p1 = ld p;
    check L10() else D2();
  L7():
    dr2 = tryDispatchBuiltin.1("[", vinfo5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(vinfo3);
  L8(vinfo8):
    __ = ldf `[` in base;
    r = dyn __(vinfo5, <missing>, "Package");
    goto L1(vinfo8, r);
  D2():
    deopt 7 [vinfo11, dx3, p1];
  L9():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(vinfo3, dx2);
  L10():
    p2 = force? p1;
    checkMissing(p2);
    r1 = `==`(dx3, p2);
    __1 = ldf `[` in base;
    r2 = dyn __1(vinfo1, r1, <missing>, FALSE);
    goto L0(r2);
  }
}