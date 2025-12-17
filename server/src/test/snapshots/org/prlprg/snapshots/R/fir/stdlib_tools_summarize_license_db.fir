fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2058174622;
    st summarize_license_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg db1:*, reg db2:V, reg c:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg duplicated:cls, reg packages:*, reg packages1:V, reg p:p(V +), reg r4:V, reg any:cls, reg r5:V, reg c1:L, reg sprintf:cls, reg packages2:*, reg packages3:V, reg p1:p(V +), reg db5:*, reg db6:V, reg c2:L, reg db8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p2:p(V +), reg r9:V, reg split:cls, reg packages4:*, reg packages5:V, reg p3:p(V +), reg db9:*, reg db10:V, reg c3:L, reg db12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg p4:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg packages6:*, reg packages7:V, reg names:cls, reg r17:V, reg data_frame:cls, reg licenses:*, reg licenses1:V, reg p5:p(V +), reg r19:V, reg packages8:*, reg packages9:V, reg l:*, reg c4:L, reg packages11:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r20:V, reg cat:cls, reg formatDL:cls, reg out:*, reg out1:V, reg c5:L, reg out3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r21:V, reg p6:p(V +), reg vapply:cls, reg out4:*, reg out5:V, reg c6:L, reg out7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r23:V, reg p7:p(V +), reg r25:cls, reg p8:p(V +), reg r27:V, reg p9:p(V +), reg r29:V, reg p10:p(V +), reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg out8:*, reg out9:V, reg invisible:cls, reg r34:V |
    mkenv;
    st db = db;
    db1 = ld db;
    check L5() else D0();
  D0():
    deopt 0 [db1];
  L5():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L7() else L8(db2);
  L6(dx1):
    st packages = dx1;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L7():
    dr = tryDispatchBuiltin.1("$", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(db4):
    r = `$`(db4, <sym Package>);
    goto L6(r);
  L0(r2):
    c1 = `as.logical`(r2);
    if c1 then L15() else L1();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    duplicated = ldf duplicated;
    check L12() else D1();
  L11():
    r1 = dyn base(<lang duplicated(packages)>);
    goto L0(r1);
  D1():
    deopt 7 [];
  L1():
    goto L2();
  L2():
    split = ldf split;
    check L19() else D6();
  L12():
    p = prom<V +>{
      packages = ld packages;
      packages1 = force? packages;
      checkMissing(packages1);
      return packages1;
    };
    r4 = dyn duplicated(p);
    check L13() else D2();
  L15():
    sprintf = ldf sprintf;
    check L16() else D4();
  D2():
    deopt 9 [r4];
  D4():
    deopt 13 [];
  D6():
    deopt 22 [];
  L13():
    any = ldf any in base;
    r5 = dyn any(r4);
    check L14() else D3();
  L16():
    p1 = prom<V +>{
      packages2 = ld packages;
      packages3 = force? packages2;
      checkMissing(packages3);
      return packages3;
    };
    p2 = prom<V +>{
      db5 = ld db;
      db6 = force? db5;
      checkMissing(db6);
      c2 = `is.object`(db6);
      if c2 then L1() else L2(db6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", db6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(db8):
      r7 = `$`(db8, <sym Version>);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r9 = dyn sprintf("%s_%s", p1, p2);
    check L17() else D5();
  L19():
    p3 = prom<V +>{
      packages4 = ld packages;
      packages5 = force? packages4;
      checkMissing(packages5);
      return packages5;
    };
    p4 = prom<V +>{
      db9 = ld db;
      db10 = force? db9;
      checkMissing(db10);
      c3 = `is.object`(db10);
      if c3 then L1() else L2(db10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", db10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(db12):
      r12 = `$`(db12, <sym License>);
      goto L0(r12);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r14 = dyn split(p3, p4);
    check L20() else D7();
  D3():
    deopt 11 [r5];
  D5():
    deopt 17 [r9];
  D7():
    deopt 25 [r14];
  L14():
    goto L0(r5);
  L17():
    st packages = r9;
    goto L2();
  L20():
    st packages = r14;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L3(r16):
    st licenses = r16;
    data_frame = ldf `data.frame`;
    check L25() else D10();
  L21():
    packages6 = ld packages;
    check L23() else D8();
  L22():
    r15 = dyn base1(<sym packages>);
    goto L3(r15);
  D8():
    deopt 29 [packages6];
  D10():
    deopt 35 [];
  L23():
    packages7 = force? packages6;
    checkMissing(packages7);
    names = ldf names in base;
    r17 = dyn names(packages7);
    check L24() else D9();
  L25():
    p5 = prom<V +>{
      licenses = ld licenses;
      licenses1 = force? licenses;
      checkMissing(licenses1);
      return licenses1;
    };
    r19 = dyn data_frame[Licenses, stringsAsFactors](p5, FALSE);
    check L26() else D11();
  D9():
    deopt 32 [r17];
  D11():
    deopt 40 [r19];
  L24():
    goto L3(r17);
  L26():
    st out = r19;
    packages8 = ld packages;
    check L27() else D12();
  D12():
    deopt 42 [packages8];
  L27():
    packages9 = force? packages8;
    checkMissing(packages9);
    l = ld out;
    c4 = `is.object`(l);
    if c4 then L29() else L30(packages9, l);
  L28(dx7):
    st out = dx7;
    cat = ldf cat;
    check L32() else D13();
  L29():
    dr6 = tryDispatchBuiltin.0("$<-", l, packages9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L31() else L30(packages9, dr6);
  L30(packages11, l2):
    r20 = `$<-`(l2, <sym Packages>, packages9);
    goto L28(r20);
  D13():
    deopt 48 [];
  L31():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L28(dx6);
  L32():
    p10 = prom<V +>{
      formatDL = ldf formatDL;
      p6 = prom<V +>{
        out = ld out;
        out1 = force? out;
        checkMissing(out1);
        c5 = `is.object`(out1);
        if c5 then L1() else L2(out1);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", out1);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(out3):
        r21 = `$`(out3, <sym Licenses>);
        goto L0(r21);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      p9 = prom<V +>{
        vapply = ldf vapply;
        p7 = prom<V +>{
          out4 = ld out;
          out5 = force? out4;
          checkMissing(out5);
          c6 = `is.object`(out5);
          if c6 then L1() else L2(out5);
        L0(dx11):
          return dx11;
        L1():
          dr10 = tryDispatchBuiltin.1("$", out5);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2(dr10);
        L2(out7):
          r23 = `$`(out7, <sym Packages>);
          goto L0(r23);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx10);
        };
        p8 = prom<V +>{
          r25 = clos inner3913899244;
          return r25;
        };
        r27 = dyn vapply(p7, p8, "");
        return r27;
      };
      r29 = dyn formatDL[, , style](p6, p9, "list");
      return r29;
    };
    r31 = dyn cat[, sep](p10, "\n\n");
    check L33() else D14();
  D14():
    deopt 52 [r31];
  L33():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L4(r33):
    popenv;
    return r33;
  L34():
    out8 = ld out;
    check L36() else D15();
  L35():
    r32 = dyn base2(<sym out>);
    goto L4(r32);
  D15():
    deopt 55 [out8];
  L36():
    out9 = force? out8;
    checkMissing(out9);
    invisible = ldf invisible in base;
    r34 = dyn invisible(out9);
    check L37() else D16();
  D16():
    deopt 58 [r34];
  L37():
    goto L4(r34);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg paste:cls, reg unique:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V, reg p4:p(V +), reg r3:V |
    mkenv;
    st p = p;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      unique = ldf unique;
      p3 = prom<V +>{
        p1 = ld p;
        p2 = force? p1;
        checkMissing(p2);
        return p2;
      };
      r1 = dyn unique(p3);
      return r1;
    };
    r3 = dyn paste[, collapse](p4, " ");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}