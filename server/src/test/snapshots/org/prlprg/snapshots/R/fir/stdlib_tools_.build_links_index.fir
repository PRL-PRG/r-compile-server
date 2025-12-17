fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3495631092;
    st `.build_links_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3495631092(contents, package) {
  (reg contents:*, reg package:*) -+> V { var contents:*, var package:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg contents1:*, reg contents2:V, reg length:cls, reg r2:V, reg c:L, reg contents3:*, reg contents4:V, reg c1:L, reg contents6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg lengths:cls, reg aliases:*, reg aliases1:V, reg p:p(V +), reg r5:V, reg sub:cls, reg contents7:*, reg contents8:V, reg c2:L, reg contents10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg p1:p(V +), reg r8:V, reg structure:cls, reg file_path:cls, reg package1:*, reg package2:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg files:*, reg files1:V, reg lens:*, reg lens1:V, reg rep_int:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg unlist:cls, reg aliases2:*, reg aliases3:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg character:cls, reg r20:V |
    mkenv;
    st contents = contents;
    st package = package;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    contents1 = ld contents;
    check L4() else D0();
  L3():
    r = dyn base(<sym contents>);
    goto L0(r);
  D0():
    deopt 2 [contents1];
  L1():
    character = ldf character;
    check L19() else D9();
  L4():
    contents2 = force? contents1;
    checkMissing(contents2);
    length = ldf length in base;
    r2 = dyn length(contents2);
    check L5() else D1();
  L6():
    contents3 = ld contents;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [contents3];
  D9():
    deopt 29 [];
  L5():
    goto L0(r2);
  L7():
    contents4 = force? contents3;
    checkMissing(contents4);
    c1 = `is.object`(contents4);
    if c1 then L9() else L10(contents4);
  L19():
    r20 = dyn character();
    check L20() else D10();
  D10():
    deopt 30 [r20];
  L8(dx1):
    st aliases = dx1;
    lengths = ldf lengths;
    check L12() else D3();
  L9():
    dr = tryDispatchBuiltin.1("$", contents4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(contents6):
    r3 = `$`(contents6, <sym Aliases>);
    goto L8(r3);
  L20():
    popenv;
    return r20;
  D3():
    deopt 11 [];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    p = prom<V +>{
      aliases = ld aliases;
      aliases1 = force? aliases;
      checkMissing(aliases1);
      return aliases1;
    };
    r5 = dyn lengths(p);
    check L13() else D4();
  D4():
    deopt 13 [r5];
  L13():
    st lens = r5;
    sub = ldf sub;
    check L14() else D5();
  D5():
    deopt 16 [];
  L14():
    p1 = prom<V +>{
      contents7 = ld contents;
      contents8 = force? contents7;
      checkMissing(contents8);
      c2 = `is.object`(contents8);
      if c2 then L1() else L2(contents8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", contents8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(contents10):
      r6 = `$`(contents10, <sym File>);
      goto L0(r6);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r8 = dyn sub("\\.[Rr]d$", "\\.html", p1);
    check L15() else D6();
  D6():
    deopt 20 [r8];
  L15():
    st files = r8;
    structure = ldf structure;
    check L16() else D7();
  D7():
    deopt 23 [];
  L16():
    p4 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        package1 = ld package;
        package2 = force? package1;
        checkMissing(package2);
        return package2;
      };
      p3 = prom<V +>{
        sym1 = ldf `rep.int`;
        base1 = ldf `rep.int` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r11):
        return r11;
      L1():
        files = ld files;
        files1 = force? files;
        checkMissing(files1);
        lens = ld lens;
        lens1 = force? lens;
        checkMissing(lens1);
        rep_int = ldf `rep.int` in base;
        r12 = dyn rep_int(files1, lens1);
        goto L0(r12);
      L2():
        r10 = dyn base1(<sym files>, <sym lens>);
        goto L0(r10);
      };
      r14 = dyn file_path("../..", p2, "html", p3);
      return r14;
    };
    p6 = prom<V +>{
      unlist = ldf unlist;
      p5 = prom<V +>{
        aliases2 = ld aliases;
        aliases3 = force? aliases2;
        checkMissing(aliases3);
        return aliases3;
      };
      r17 = dyn unlist(p5);
      return r17;
    };
    r19 = dyn structure[, names](p4, p6);
    check L17() else D8();
  D8():
    deopt 27 [r19];
  L17():
    popenv;
    return r19;
  }
}