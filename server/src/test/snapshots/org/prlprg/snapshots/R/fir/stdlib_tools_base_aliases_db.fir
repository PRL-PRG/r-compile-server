fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st base_aliases_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _get_standard_package_names:cls, reg r:V, reg c:L, reg r2:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg lapply:cls, reg packages:*, reg packages1:V, reg p:p(V +), reg r5:cls, reg p1:p(V +), reg r7:V, reg packages2:*, reg packages3:V, reg l:*, reg names__:cls, reg r8:V, reg aliases:*, reg aliases1:V |
    mkenv;
    _get_standard_package_names = ldf `.get_standard_package_names`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn _get_standard_package_names();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    c = `is.object`(r);
    if c then L3() else L4(r);
  L2(dx1):
    st packages = dx1;
    lapply = ldf lapply;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.1("$", r);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r2):
    r3 = `$`(r2, <sym base>);
    goto L2(r3);
  D2():
    deopt 6 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    p = prom<V +>{
      packages = ld packages;
      packages1 = force? packages;
      checkMissing(packages1);
      return packages1;
    };
    p1 = prom<V +>{
      r5 = clos inner3913899244;
      return r5;
    };
    r7 = dyn lapply(p, p1);
    check L7() else D3();
  D3():
    deopt 9 [r7];
  L7():
    st aliases = r7;
    packages2 = ld packages;
    check L8() else D4();
  D4():
    deopt 11 [packages2];
  L8():
    packages3 = force? packages2;
    checkMissing(packages3);
    l = ld aliases;
    names__ = ldf `names<-`;
    check L9() else D5();
  D5():
    deopt 14 [packages3, l, packages3];
  L9():
    r8 = dyn names__(l, NULL, packages3);
    check L10() else D6();
  D6():
    deopt 16 [packages3, r8];
  L10():
    st aliases = r8;
    aliases = ld aliases;
    check L11() else D7();
  D7():
    deopt 18 [aliases];
  L11():
    aliases1 = force? aliases;
    checkMissing(aliases1);
    popenv;
    return aliases1;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg Rd_db:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg _Library:*, reg _Library1:V, reg p4:p(V +), reg r2:V, reg lapply:cls, reg db:*, reg db1:V, reg p5:p(V +), reg _Rd_get_metadata:*, reg _Rd_get_metadata1:V, reg p6:p(V +), reg r5:V, reg aliases:*, reg aliases1:V |
    mkenv;
    st p = p;
    Rd_db = ldf Rd_db;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    p4 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    r2 = dyn Rd_db[, `lib.loc`](p3, p4);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    st db = r2;
    lapply = ldf lapply;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p5 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p6 = prom<V +>{
      _Rd_get_metadata = ld `.Rd_get_metadata`;
      _Rd_get_metadata1 = force? _Rd_get_metadata;
      checkMissing(_Rd_get_metadata1);
      return _Rd_get_metadata1;
    };
    r5 = dyn lapply(p5, p6, "alias");
    check L3() else D3();
  D3():
    deopt 12 [r5];
  L3():
    st aliases = r5;
    aliases = ld aliases;
    check L4() else D4();
  D4():
    deopt 14 [aliases];
  L4():
    aliases1 = force? aliases;
    checkMissing(aliases1);
    popenv;
    return aliases1;
  }
}