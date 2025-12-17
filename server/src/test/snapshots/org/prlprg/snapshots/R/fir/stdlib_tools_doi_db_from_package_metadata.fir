fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2785755493;
    st doi_db_from_package_metadata = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2785755493(meta) {
  (reg meta:*) -+> V { var meta:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg meta1:*, reg meta2:V, reg c:L, reg meta4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg is_na:cls, reg r4:V, reg r5:V, reg c1:L, reg gregexpr:cls, reg pattern:*, reg pattern1:V, reg p:p(V +), reg v:*, reg v1:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg dois:*, reg dois1:V, reg _gregexec_at_pos:cls, reg pattern2:*, reg pattern3:V, reg p2:p(V +), reg v2:*, reg v3:V, reg p3:p(V +), reg m:*, reg m1:V, reg p4:p(V +), reg r14:V, reg c2:cls, reg r15:V, reg doi_db:cls, reg __1:cls, reg r17:V, reg r18:cls, reg dois2:*, reg dois3:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg dois4:*, reg dois5:V, reg length:cls, reg r26:V, reg rep_int:cls, reg r27:V, reg p7:p(V +), reg r29:V |
    mkenv;
    st meta = meta;
    character = ldf character;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn character();
    check L6() else D1();
  D1():
    deopt 2 [r];
  L6():
    st dois = r;
    st pattern = "<(DOI|doi):([^>]*)>";
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r2):
    r5 = `!`(r2);
    c1 = `as.logical`(r5);
    if c1 then L14() else L2();
  L7():
    meta1 = ld meta;
    check L9() else D2();
  L8():
    r1 = dyn base(<lang `<-`(v, `[`(meta, "Description"))>);
    goto L0(r1);
  D2():
    deopt 9 [meta1];
  L2():
    goto L4();
  L4():
    doi_db = ldf doi_db;
    check L24() else D10();
  L9():
    meta2 = force? meta1;
    checkMissing(meta2);
    c = `is.object`(meta2);
    if c then L10() else L11(meta2);
  L14():
    gregexpr = ldf gregexpr;
    check L15() else D4();
  D4():
    deopt 19 [];
  D10():
    deopt 41 [];
  L1(dx1):
    st v = dx1;
    is_na = ldf `is.na` in base;
    r4 = dyn is_na(dx1);
    check L13() else D3();
  L10():
    dr = tryDispatchBuiltin.1("[", meta2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(meta4):
    __ = ldf `[` in base;
    r3 = dyn __(meta4, "Description");
    goto L1(r3);
  L15():
    p = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p1 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    r8 = dyn gregexpr(p, p1);
    check L16() else D5();
  L24():
    p6 = prom<V +>{
      __1 = ldf `::`;
      r17 = dyn __1("utils", "URLdecode");
      checkFun.0(r17);
      r18 = r17 as cls;
      p5 = prom<V +>{
        dois2 = ld dois;
        dois3 = force? dois2;
        checkMissing(dois3);
        return dois3;
      };
      r20 = dyn r18(p5);
      return r20;
    };
    p7 = prom<V +>{
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r23):
      return r23;
    L2():
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r22 = dyn base2("DESCRIPTION", <lang length(dois)>);
      goto L0(r22);
    L1(r25):
      rep_int = ldf `rep.int` in base;
      r27 = dyn rep_int("DESCRIPTION", r25);
      goto L0(r27);
    L4():
      dois4 = ld dois;
      dois5 = force? dois4;
      checkMissing(dois5);
      length = ldf length in base;
      r26 = dyn length(dois5);
      goto L1(r26);
    L5():
      r24 = dyn base3(<sym dois>);
      goto L1(r24);
    };
    r29 = dyn doi_db(p6, p7);
    check L25() else D11();
  D3():
    deopt 16 [r4];
  D5():
    deopt 22 [r8];
  D11():
    deopt 44 [r29];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    goto L0(r4);
  L16():
    st m = r8;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L25():
    popenv;
    return r29;
  L3(r10):
    st dois = r10;
    goto L4();
  L17():
    dois = ld dois;
    check L19() else D6();
  L18():
    r9 = dyn base1(<sym dois>, <lang .gregexec_at_pos(pattern, v, m, 3)>);
    goto L3(r9);
  D6():
    deopt 26 [dois];
  L19():
    dois1 = force? dois;
    checkMissing(dois1);
    _gregexec_at_pos = ldf `.gregexec_at_pos`;
    check L20() else D7();
  D7():
    deopt 29 [];
  L20():
    p2 = prom<V +>{
      pattern2 = ld pattern;
      pattern3 = force? pattern2;
      checkMissing(pattern3);
      return pattern3;
    };
    p3 = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      return v3;
    };
    p4 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r14 = dyn _gregexec_at_pos(p2, p3, p4, 3);
    check L21() else D8();
  D8():
    deopt 34 [r14];
  L21():
    c2 = ldf c in base;
    r15 = dyn c2(dois1, r14);
    check L22() else D9();
  D9():
    deopt 36 [r15];
  L22():
    goto L3(r15);
  }
}