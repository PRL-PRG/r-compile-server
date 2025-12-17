fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1297380649;
    st `.RtangleCodeLabel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1297380649(chunk) {
  (reg chunk:*) -+> V { var chunk:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg grep:cls, reg chunk1:*, reg chunk2:V, reg p:p(V +), reg r3:V, reg length:cls, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg chunk3:*, reg chunk4:V, reg attr:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg srclines:*, reg srclines1:V, reg length1:cls, reg r10:V, reg c1:L, reg paste:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg srclines2:*, reg srclines3:V, reg min:cls, reg r13:V, reg p1:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg srclines4:*, reg srclines5:V, reg max:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg r20:V, reg srclines6:*, reg srclines7:V, reg sub:cls, reg lnos:*, reg lnos1:V, reg c2:L, reg lnos3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg paste1:cls, reg fn:*, reg fn1:V, reg p4:p(V +), reg lno:*, reg lno1:V, reg p5:p(V +), reg r26:V |
    mkenv;
    st chunk = chunk;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L11() else L1();
  L6():
    grep = ldf grep;
    check L8() else D0();
  L7():
    r = dyn base(<lang `<-`(lnos, grep("^#line ", chunk, value=TRUE))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    popenv;
    return "(missing #line/file info)";
  L8():
    p = prom<V +>{
      chunk1 = ld chunk;
      chunk2 = force? chunk1;
      checkMissing(chunk2);
      return chunk2;
    };
    r3 = dyn grep[, , value]("^#line ", p, TRUE);
    check L9() else D1();
  L11():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D1():
    deopt 8 [r3];
  L2(r6):
    st srclines = r6;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L9():
    st lnos = r3;
    length = ldf length in base;
    r4 = dyn length(r3);
    check L10() else D2();
  L12():
    chunk3 = ld chunk;
    check L14() else D3();
  L13():
    r5 = dyn base1(<sym chunk>, "srclines");
    goto L2(r5);
  D2():
    deopt 11 [r4];
  D3():
    deopt 14 [chunk3];
  L3(r9):
    c1 = `as.logical`(r9);
    if c1 then L20() else L4();
  L10():
    goto L0(r4);
  L14():
    chunk4 = force? chunk3;
    checkMissing(chunk4);
    attr = ldf attr in base;
    r7 = dyn attr(chunk4, "srclines");
    check L15() else D4();
  L16():
    srclines = ld srclines;
    check L18() else D5();
  L17():
    r8 = dyn base2(<sym srclines>);
    goto L3(r8);
  D4():
    deopt 18 [r7];
  D5():
    deopt 22 [srclines];
  L4():
    srclines6 = ld srclines;
    check L24() else D9();
  L5(r20):
    st lno = r20;
    sub = ldf sub;
    check L25() else D10();
  L15():
    goto L2(r7);
  L18():
    srclines1 = force? srclines;
    checkMissing(srclines1);
    length1 = ldf length in base;
    r10 = dyn length1(srclines1);
    check L19() else D6();
  L20():
    paste = ldf paste;
    check L21() else D7();
  D6():
    deopt 25 [r10];
  D7():
    deopt 27 [];
  D9():
    deopt 33 [srclines6];
  D10():
    deopt 37 [];
  L19():
    goto L3(r10);
  L21():
    p1 = prom<V +>{
      sym3 = ldf min;
      base3 = ldf min in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      srclines2 = ld srclines;
      srclines3 = force? srclines2;
      checkMissing(srclines3);
      min = ldf min in base;
      r13 = dyn min(srclines3);
      goto L0(r13);
    L2():
      r11 = dyn base3(<sym srclines>);
      goto L0(r11);
    };
    p2 = prom<V +>{
      sym4 = ldf max;
      base4 = ldf max in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      srclines4 = ld srclines;
      srclines5 = force? srclines4;
      checkMissing(srclines5);
      max = ldf max in base;
      r17 = dyn max(srclines5);
      goto L0(r17);
    L2():
      r15 = dyn base4(<sym srclines>);
      goto L0(r15);
    };
    r19 = dyn paste[, , sep](p1, p2, "-");
    check L22() else D8();
  L24():
    srclines7 = force? srclines6;
    checkMissing(srclines7);
    goto L5(srclines7);
  L25():
    p3 = prom<V +>{
      lnos = ld lnos;
      lnos1 = force? lnos;
      checkMissing(lnos1);
      c2 = `is.object`(lnos1);
      if c2 then L1() else L2(lnos1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lnos1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lnos3):
      __ = ldf `[` in base;
      r21 = dyn __(lnos3, 1);
      goto L0(r21);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r23 = dyn sub("[^\"]*\"([^\"]+).*", "\\1", p3);
    check L26() else D11();
  D8():
    deopt 32 [r19];
  D11():
    deopt 41 [r23];
  L22():
    goto L5(r19);
  L26():
    st fn = r23;
    paste1 = ldf paste;
    check L27() else D12();
  D12():
    deopt 44 [];
  L27():
    p4 = prom<V +>{
      fn = ld fn;
      fn1 = force? fn;
      checkMissing(fn1);
      return fn1;
    };
    p5 = prom<V +>{
      lno = ld lno;
      lno1 = force? lno;
      checkMissing(lno1);
      return lno1;
    };
    r26 = dyn paste1[, , sep](p4, p5, ":");
    check L28() else D13();
  D13():
    deopt 49 [r26];
  L28():
    popenv;
    return r26;
  }
}