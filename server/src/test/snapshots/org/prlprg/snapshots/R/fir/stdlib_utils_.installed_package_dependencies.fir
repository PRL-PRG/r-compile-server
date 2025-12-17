fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner74675572;
    st `.installed_package_dependencies` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner74675572(pkgs, fields) {
  (reg pkgs:*, reg fields:*) -+> V { var pkgs:*, var fields:*, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg lapply:cls, reg _libPaths:cls, reg r1:V, reg p1:p(V +), reg _readPkgDesc:*, reg _readPkgDesc1:V, reg p2:p(V +), reg fields1:*, reg fields2:V, reg p3:p(V +), reg pkgs1:*, reg pkgs2:V, reg p4:p(V +), reg r6:V, reg p5:p(V +), reg r8:V, reg apply:cls, reg mat:*, reg mat1:V, reg c:L, reg mat3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg r12:V, reg __:cls, reg r13:V, reg p6:p(V +), reg _clean_up_dependencies:*, reg _clean_up_dependencies1:V, reg p7:p(V +), reg r16:V, reg mat7:*, reg mat8:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r17:V, reg l:*, reg names__:cls, reg r18:V, reg lst:*, reg lst1:V |
    mkenv;
    st pkgs = pkgs;
    st fields = fields;
    do_call = ldf `do.call`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p5 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        _libPaths = ldf `.libPaths`;
        r1 = dyn _libPaths();
        return r1;
      };
      p2 = prom<V +>{
        _readPkgDesc = ld `.readPkgDesc`;
        _readPkgDesc1 = force? _readPkgDesc;
        checkMissing(_readPkgDesc1);
        return _readPkgDesc1;
      };
      p3 = prom<V +>{
        fields1 = ld fields;
        fields2 = force? fields1;
        checkMissing(fields2);
        return fields2;
      };
      p4 = prom<V +>{
        pkgs1 = ld pkgs;
        pkgs2 = force? pkgs1;
        checkMissing(pkgs2);
        return pkgs2;
      };
      r6 = dyn lapply(p1, p2, p3, p4);
      return r6;
    };
    r8 = dyn do_call(p, p5);
    check L2() else D1();
  D1():
    deopt 4 [r8];
  L2():
    st mat = r8;
    apply = ldf apply;
    check L3() else D2();
  D2():
    deopt 7 [];
  L3():
    p6 = prom<V +>{
      mat = ld mat;
      mat1 = force? mat;
      checkMissing(mat1);
      c = `is.object`(mat1);
      if c then L2() else L3(mat1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", mat1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(mat3):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(r10):
      r12 = `-`(<missing>, r10);
      __ = ldf `[` in base;
      r13 = dyn __(mat1, <missing>, r12, FALSE);
      goto L0(r13);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c1 = ldf c in base;
      r11 = dyn c1(1, 2);
      goto L1(r11);
    L6():
      r9 = dyn base(1, 2);
      goto L1(r9);
    };
    p7 = prom<V +>{
      _clean_up_dependencies = ld `.clean_up_dependencies`;
      _clean_up_dependencies1 = force? _clean_up_dependencies;
      checkMissing(_clean_up_dependencies1);
      return _clean_up_dependencies1;
    };
    r16 = dyn apply[, , , simplify](p6, 1, p7, FALSE);
    check L4() else D3();
  D3():
    deopt 13 [r16];
  L4():
    st lst = r16;
    mat7 = ld mat;
    check L5() else D4();
  D4():
    deopt 15 [mat7];
  L5():
    mat8 = force? mat7;
    checkMissing(mat8);
    c2 = `is.object`(mat8);
    if c2 then L6() else L7();
  L0(dx3):
    l = ld lst;
    names__ = ldf `names<-`;
    check L9() else D5();
  L6():
    dr2 = tryDispatchBuiltin.1("[", mat8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7();
  L7():
    __1 = ldf `[` in base;
    r17 = dyn __1(mat8, <missing>, 1);
    goto L0(r17);
  D5():
    deopt 22 [dx3, l, dx3];
  L8():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L9():
    r18 = dyn names__(l, NULL, dx3);
    check L10() else D6();
  D6():
    deopt 24 [dx3, r18];
  L10():
    st lst = r18;
    lst = ld lst;
    check L11() else D7();
  D7():
    deopt 26 [lst];
  L11():
    lst1 = force? lst;
    checkMissing(lst1);
    popenv;
    return lst1;
  }
}