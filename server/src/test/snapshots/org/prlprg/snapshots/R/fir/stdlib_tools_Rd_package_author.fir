fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4067512538;
    st Rd_package_author = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4067512538(pkg, dir) {
  (reg pkg:*, reg dir:*) -+> V { var pkg:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, reg Rd_macros_package_dir:cls, reg r:V, reg p:p(V +), reg _read_description:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg pkg1:*, reg pkg2:V, reg desc:*, reg desc1:V, reg c:L, reg pkg4:V, reg desc3:V, reg dr:V, reg dc:L, reg dx:V, reg pkg6:V, reg dx1:V, reg __:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg desc4:*, reg desc5:V, reg c2:L, reg desc7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r8:V, reg p3:p(V +), reg pkg7:*, reg pkg8:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg desc8:*, reg desc9:V, reg _expand_package_description_db_R_fields:cls, reg desc10:*, reg desc11:V, reg p6:p(V +), reg r18:V, reg c3:cls, reg r19:V, reg Rd_escape_specials:cls, reg desc12:*, reg desc13:V, reg c4:L, reg desc15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r20:V, reg p7:p(V +), reg r22:V |
    mkenv;
    st pkg = pkg;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L0() else L1(dir);
  L0():
    p = prom<V +>{
      Rd_macros_package_dir = ldf Rd_macros_package_dir;
      r = dyn Rd_macros_package_dir();
      return r;
    };
    goto L1(p);
  L1(dir_orDefault):
    st dir = dir_orDefault;
    _read_description = ldf `.read_description`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r3 = dyn file_path(p1, "DESCRIPTION");
      return r3;
    };
    r5 = dyn _read_description(p2);
    check L7() else D1();
  D1():
    deopt 3 [r5];
  L7():
    st desc = r5;
    pkg1 = ld pkg;
    check L8() else D2();
  D2():
    deopt 5 [pkg1];
  L8():
    pkg2 = force? pkg1;
    checkMissing(pkg2);
    desc = ld desc;
    check L9() else D3();
  D3():
    deopt 6 [pkg2, desc];
  L9():
    desc1 = force? desc;
    checkMissing(desc1);
    c = `is.object`(desc1);
    if c then L10() else L11(pkg2, desc1);
  L2(pkg6, dx1):
    r7 = `!=`(pkg6, dx1);
    c1 = `as.logical`(r7);
    if c1 then L13() else L3();
  L10():
    dr = tryDispatchBuiltin.1("[", desc1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(pkg2, dr);
  L11(pkg4, desc3):
    __ = ldf `[` in base;
    r6 = dyn __(desc3, "Package");
    goto L2(pkg4, r6);
  L3():
    goto L4();
  L4():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(pkg2, dx);
  L13():
    stop = ldf stop;
    check L14() else D4();
  D4():
    deopt 13 [];
  L5(r16):
    st desc = r16;
    Rd_escape_specials = ldf Rd_escape_specials;
    check L23() else D10();
  L14():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        desc4 = ld desc;
        desc5 = force? desc4;
        checkMissing(desc5);
        c2 = `is.object`(desc5);
        if c2 then L1() else L2(desc5);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", desc5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(desc7):
        __1 = ldf `[` in base;
        r8 = dyn __1(desc7, "Package");
        goto L0(r8);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p4 = prom<V +>{
        pkg7 = ld pkg;
        pkg8 = force? pkg7;
        checkMissing(pkg8);
        return pkg8;
      };
      r11 = dyn gettextf("DESCRIPTION file is for package '%s', not '%s'", p3, p4);
      return r11;
    };
    r13 = dyn stop(p5);
    check L15() else D5();
  L17():
    desc8 = ld desc;
    check L19() else D6();
  L18():
    r15 = dyn base(<sym desc>, <lang .expand_package_description_db_R_fields(desc)>);
    goto L5(r15);
  D5():
    deopt 15 [r13];
  D6():
    deopt 20 [desc8];
  D10():
    deopt 30 [];
  L15():
    goto L4();
  L19():
    desc9 = force? desc8;
    checkMissing(desc9);
    _expand_package_description_db_R_fields = ldf `.expand_package_description_db_R_fields`;
    check L20() else D7();
  L23():
    p7 = prom<V +>{
      desc12 = ld desc;
      desc13 = force? desc12;
      checkMissing(desc13);
      c4 = `is.object`(desc13);
      if c4 then L1() else L2(desc13);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", desc13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(desc15):
      __2 = ldf `[` in base;
      r20 = dyn __2(desc15, "Author");
      goto L0(r20);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r22 = dyn Rd_escape_specials(p7);
    check L24() else D11();
  D7():
    deopt 23 [];
  D11():
    deopt 32 [r22];
  L20():
    p6 = prom<V +>{
      desc10 = ld desc;
      desc11 = force? desc10;
      checkMissing(desc11);
      return desc11;
    };
    r18 = dyn _expand_package_description_db_R_fields(p6);
    check L21() else D8();
  L24():
    popenv;
    return r22;
  D8():
    deopt 25 [r18];
  L21():
    c3 = ldf c in base;
    r19 = dyn c3(desc9, r18);
    check L22() else D9();
  D9():
    deopt 27 [r19];
  L22():
    goto L5(r19);
  }
}