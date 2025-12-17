fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner610803644;
    st `pairwise.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner610803644(`compare.levels`, `level.names`, `p.adjust.method`) {
  (reg compare_levels:*, reg level_names:*, reg p_adjust_method:*) -+> V { var `compare.levels`:*, var `level.names`:*, var `p.adjust.method`:*, reg setNames:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg level_names1:*, reg level_names2:V, reg r2:I, reg p:p(V +), reg level_names3:*, reg level_names4:V, reg p1:p(V +), reg r5:V, reg outer:cls, reg ix:*, reg ix1:V, reg c:L, reg ix3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p2:p(V +), reg ix4:*, reg ix5:V, reg c1:L, reg ix7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg ix10:V, reg r9:V, reg ix11:*, reg ix12:V, reg length:cls, reg r10:V, reg r11:V, reg __1:cls, reg r12:V, reg p3:p(V +), reg r14:cls, reg p4:p(V +), reg r16:V, reg lower_tri:cls, reg pp:*, reg pp1:V, reg p5:p(V +), reg r18:V, reg p_adjust:cls, reg pp2:*, reg pp3:V, reg c2:L, reg pp5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg il_tri:*, reg il_tri1:V, reg __2:cls, reg r19:V, reg p6:p(V +), reg p_adjust_method1:*, reg p_adjust_method2:V, reg p7:p(V +), reg r22:V, reg l:*, reg c3:L, reg r24:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg il_tri2:*, reg il_tri3:V, reg ___:cls, reg r27:V, reg pp6:*, reg pp7:V |
    mkenv;
    st `compare.levels` = compare_levels;
    st `level.names` = level_names;
    st `p.adjust.method` = p_adjust_method;
    setNames = ldf setNames;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      level_names1 = ld `level.names`;
      level_names2 = force? level_names1;
      checkMissing(level_names2);
      r2 = seq_along(level_names2);
      goto L0(r2);
    L2():
      r = dyn base(<sym level.names>);
      goto L0(r);
    };
    p1 = prom<V +>{
      level_names3 = ld `level.names`;
      level_names4 = force? level_names3;
      checkMissing(level_names4);
      return level_names4;
    };
    r5 = dyn setNames(p, p1);
    check L2() else D1();
  D1():
    deopt 4 [r5];
  L2():
    st ix = r5;
    outer = ldf outer;
    check L3() else D2();
  D2():
    deopt 7 [];
  L3():
    p2 = prom<V +>{
      ix = ld ix;
      ix1 = force? ix;
      checkMissing(ix1);
      c = `is.object`(ix1);
      if c then L1() else L2(ix1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", ix1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(ix3):
      __ = ldf `[` in base;
      r6 = dyn __(ix3, -1);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      ix4 = ld ix;
      ix5 = force? ix4;
      checkMissing(ix5);
      c1 = `is.object`(ix5);
      if c1 then L2() else L3(ix5);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", ix5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(ix7):
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(ix10, r9):
      r11 = `-`(<missing>, r9);
      __1 = ldf `[` in base;
      r12 = dyn __1(ix10, r11);
      goto L0(r12);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      ix11 = ld ix;
      ix12 = force? ix11;
      checkMissing(ix12);
      length = ldf length in base;
      r10 = dyn length(ix12);
      goto L1(ix7, r10);
    L6():
      r8 = dyn base1(<sym ix>);
      goto L1(ix7, r8);
    };
    p4 = prom<V +>{
      r14 = clos inner1823727497;
      return r14;
    };
    r16 = dyn outer(p2, p3, p4);
    check L4() else D3();
  D3():
    deopt 11 [r16];
  L4():
    st pp = r16;
    lower_tri = ldf `lower.tri`;
    check L5() else D4();
  D4():
    deopt 14 [];
  L5():
    p5 = prom<V +>{
      pp = ld pp;
      pp1 = force? pp;
      checkMissing(pp1);
      return pp1;
    };
    r18 = dyn lower_tri(p5, TRUE);
    check L6() else D5();
  D5():
    deopt 17 [r18];
  L6():
    st `il.tri` = r18;
    p_adjust = ldf `p.adjust`;
    check L7() else D6();
  D6():
    deopt 20 [];
  L7():
    p6 = prom<V +>{
      pp2 = ld pp;
      pp3 = force? pp2;
      checkMissing(pp3);
      c2 = `is.object`(pp3);
      if c2 then L1() else L2(pp3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", pp3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(pp5):
      il_tri = ld `il.tri`;
      il_tri1 = force? il_tri;
      __2 = ldf `[` in base;
      r19 = dyn __2(pp5, il_tri1);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p7 = prom<V +>{
      p_adjust_method1 = ld `p.adjust.method`;
      p_adjust_method2 = force? p_adjust_method1;
      checkMissing(p_adjust_method2);
      return p_adjust_method2;
    };
    r22 = dyn p_adjust(p6, p7);
    check L8() else D7();
  D7():
    deopt 23 [r22];
  L8():
    l = ld pp;
    c3 = `is.object`(l);
    if c3 then L9() else L10(r22, l);
  L0(dx7):
    st pp = dx7;
    pp6 = ld pp;
    check L13() else D9();
  L9():
    dr6 = tryDispatchBuiltin.0("[<-", l, r22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L11() else L10(r22, dr6);
  L10(r24, l2):
    il_tri2 = ld `il.tri`;
    check L12() else D8();
  D8():
    deopt 25 [r24, l2, r22, il_tri2];
  D9():
    deopt 29 [pp6];
  L11():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L0(dx6);
  L12():
    il_tri3 = force? il_tri2;
    ___ = ldf `[<-` in base;
    r27 = dyn ___(l2, r22, il_tri3);
    goto L0(r27);
  L13():
    pp7 = force? pp6;
    checkMissing(pp7);
    popenv;
    return pp7;
  }
}
fun inner1823727497(ivec, jvec) {
  (reg ivec:*, reg jvec:*) -+> V { var ivec:*, var jvec:*, reg vapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ivec1:*, reg ivec2:V, reg r2:I, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V |
    mkenv;
    st ivec = ivec;
    st jvec = jvec;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      ivec1 = ld ivec;
      ivec2 = force? ivec1;
      checkMissing(ivec2);
      r2 = seq_along(ivec2);
      goto L0(r2);
    L2():
      r = dyn base(<sym ivec>);
      goto L0(r);
    };
    p1 = prom<V +>{
      r4 = clos inner2649136551;
      return r4;
    };
    r6 = dyn vapply(p, p1, 0.05);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}
fun inner2649136551(k) {
  (reg k:*) -+> V { var k:*, reg ivec:*, reg ivec1:V, reg c:L, reg ivec3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg k1:*, reg k2:V, reg __:cls, reg r:V, reg jvec:*, reg jvec1:V, reg c1:L, reg jvec3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg k3:*, reg k4:V, reg __1:cls, reg r1:V, reg i:*, reg i1:V, reg j:*, reg j1:V, reg r2:V, reg c2:L, reg compare_levels:cls, reg i2:*, reg i3:V, reg p:p(V +), reg j2:*, reg j3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st k = k;
    ivec = ld ivec;
    check L3() else D0();
  D0():
    deopt 0 [ivec];
  L3():
    ivec1 = force? ivec;
    checkMissing(ivec1);
    c = `is.object`(ivec1);
    if c then L4() else L5(ivec1);
  L0(dx1):
    st i = dx1;
    jvec = ld jvec;
    check L8() else D2();
  L4():
    dr = tryDispatchBuiltin.1("[", ivec1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(ivec3):
    k1 = ld k;
    check L7() else D1();
  D1():
    deopt 2 [ivec3, k1];
  D2():
    deopt 6 [jvec];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    k2 = force? k1;
    __ = ldf `[` in base;
    r = dyn __(ivec3, k2);
    goto L0(r);
  L8():
    jvec1 = force? jvec;
    checkMissing(jvec1);
    c1 = `is.object`(jvec1);
    if c1 then L9() else L10(jvec1);
  L1(dx3):
    st j = dx3;
    i = ld i;
    check L13() else D4();
  L9():
    dr2 = tryDispatchBuiltin.1("[", jvec1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10(dr2);
  L10(jvec3):
    k3 = ld k;
    check L12() else D3();
  D3():
    deopt 8 [jvec3, k3];
  D4():
    deopt 12 [i];
  L11():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L12():
    k4 = force? k3;
    __1 = ldf `[` in base;
    r1 = dyn __1(jvec3, k4);
    goto L1(r1);
  L13():
    i1 = force? i;
    checkMissing(i1);
    j = ld j;
    check L14() else D5();
  D5():
    deopt 13 [i1, j];
  L14():
    j1 = force? j;
    checkMissing(j1);
    r2 = `>`(i1, j1);
    c2 = `as.logical`(r2);
    if c2 then L15() else L2();
  L2():
    popenv;
    return NA_REAL;
  L15():
    compare_levels = ldf `compare.levels`;
    check L16() else D6();
  D6():
    deopt 17 [];
  L16():
    p = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    p1 = prom<V +>{
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      return j3;
    };
    r5 = dyn compare_levels(p, p1);
    check L17() else D7();
  D7():
    deopt 20 [r5];
  L17():
    popenv;
    return r5;
  }
}