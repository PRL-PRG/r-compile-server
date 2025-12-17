fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st base_rdxrefs_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _get_standard_package_names:cls, reg r:V, reg c:L, reg r2:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg lapply:cls, reg packages:*, reg packages1:V, reg p:p(V +), reg r5:cls, reg p1:p(V +), reg r7:V, reg packages2:*, reg packages3:V, reg l:*, reg names__:cls, reg r8:V, reg rdxrefs:*, reg rdxrefs1:V |
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
    st rdxrefs = r7;
    packages2 = ld packages;
    check L8() else D4();
  D4():
    deopt 11 [packages2];
  L8():
    packages3 = force? packages2;
    checkMissing(packages3);
    l = ld rdxrefs;
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
    st rdxrefs = r8;
    rdxrefs = ld rdxrefs;
    check L11() else D7();
  D7():
    deopt 18 [rdxrefs];
  L11():
    rdxrefs1 = force? rdxrefs;
    checkMissing(rdxrefs1);
    popenv;
    return rdxrefs1;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg Rd_db:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg _Library:*, reg _Library1:V, reg p4:p(V +), reg r2:V, reg lapply:cls, reg db:*, reg db1:V, reg p5:p(V +), reg _Rd_get_xrefs:*, reg _Rd_get_xrefs1:V, reg p6:p(V +), reg r5:V, reg cbind:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p7:p(V +), reg rdxrefs:*, reg rdxrefs1:V, reg p8:p(V +), reg r8:V, reg p9:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg rdxrefs2:*, reg rdxrefs3:V, reg names:cls, reg r14:V, reg vapply:cls, reg rdxrefs4:*, reg rdxrefs5:V, reg p10:p(V +), reg NROW:*, reg NROW1:V, reg p11:p(V +), reg r17:V, reg rep_int:cls, reg r18:V, reg p12:p(V +), reg r20:V, reg rdxrefs6:*, reg rdxrefs7:V |
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
      _Rd_get_xrefs = ld `.Rd_get_xrefs`;
      _Rd_get_xrefs1 = force? _Rd_get_xrefs;
      checkMissing(_Rd_get_xrefs1);
      return _Rd_get_xrefs1;
    };
    r5 = dyn lapply(p5, p6);
    check L3() else D3();
  D3():
    deopt 11 [r5];
  L3():
    st rdxrefs = r5;
    cbind = ldf cbind;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p9 = prom<V +>{
      do_call = ldf `do.call`;
      p7 = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p8 = prom<V +>{
        rdxrefs = ld rdxrefs;
        rdxrefs1 = force? rdxrefs;
        checkMissing(rdxrefs1);
        return rdxrefs1;
      };
      r8 = dyn do_call(p7, p8);
      return r8;
    };
    p12 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r11):
      return r11;
    L2():
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r10 = dyn base(<lang names(rdxrefs)>, <lang vapply(rdxrefs, NROW, 0)>);
      goto L0(r10);
    L1(r13):
      vapply = ldf vapply;
      p10 = prom<V +>{
        rdxrefs4 = ld rdxrefs;
        rdxrefs5 = force? rdxrefs4;
        checkMissing(rdxrefs5);
        return rdxrefs5;
      };
      p11 = prom<V +>{
        NROW = ld NROW;
        NROW1 = force? NROW;
        checkMissing(NROW1);
        return NROW1;
      };
      r17 = dyn vapply(p10, p11, 0);
      rep_int = ldf `rep.int` in base;
      r18 = dyn rep_int(r13, r17);
      goto L0(r18);
    L4():
      rdxrefs2 = ld rdxrefs;
      rdxrefs3 = force? rdxrefs2;
      checkMissing(rdxrefs3);
      names = ldf names in base;
      r14 = dyn names(rdxrefs3);
      goto L1(r14);
    L5():
      r12 = dyn base1(<sym rdxrefs>);
      goto L1(r12);
    };
    r20 = dyn cbind[, Source](p9, p12);
    check L5() else D5();
  D5():
    deopt 18 [r20];
  L5():
    st rdxrefs = r20;
    rdxrefs6 = ld rdxrefs;
    check L6() else D6();
  D6():
    deopt 20 [rdxrefs6];
  L6():
    rdxrefs7 = force? rdxrefs6;
    checkMissing(rdxrefs7);
    popenv;
    return rdxrefs7;
  }
}