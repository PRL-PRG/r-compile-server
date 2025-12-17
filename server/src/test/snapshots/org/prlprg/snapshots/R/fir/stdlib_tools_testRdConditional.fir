fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2495220857;
    st testRdConditional = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2495220857(format, conditional, Rdfile) {
  (reg format:*, reg conditional:*, reg Rdfile:*) -+> V { var format:*, var conditional:*, var Rdfile:*, reg conditional1:*, reg conditional2:V, reg c:L, reg conditional4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg RdTags:cls, reg condition:*, reg condition1:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg tags:*, reg tags1:V, reg r5:V, reg all:cls, reg r6:V, reg r7:V, reg c1:L, reg stopRd:cls, reg conditional5:*, reg conditional6:V, reg p1:p(V +), reg Rdfile1:*, reg Rdfile2:V, reg p2:p(V +), reg r10:V, reg trimws:cls, reg strsplit:cls, reg paste:cls, reg condition2:*, reg condition3:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg r15:V, reg c2:L, reg r17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg format1:*, reg format2:V, reg c3:cls, reg r25:V, reg p6:p(V +), reg allow:*, reg allow1:V, reg p7:p(V +), reg r28:V, reg any:cls, reg r29:V |
    mkenv;
    st format = format;
    st conditional = conditional;
    st Rdfile = Rdfile;
    conditional1 = ld conditional;
    check L5() else D0();
  D0():
    deopt 0 [conditional1];
  L5():
    conditional2 = force? conditional1;
    checkMissing(conditional2);
    c = `is.object`(conditional2);
    if c then L6() else L7(conditional2);
  L0(dx1):
    st condition = dx1;
    RdTags = ldf RdTags;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("[[", conditional2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(conditional4):
    __ = ldf `[[` in base;
    r = dyn __(conditional4, 1);
    goto L0(r);
  D1():
    deopt 7 [];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    p = prom<V +>{
      condition = ld condition;
      condition1 = force? condition;
      checkMissing(condition1);
      return condition1;
    };
    r2 = dyn RdTags(p);
    check L10() else D2();
  D2():
    deopt 9 [r2];
  L10():
    st tags = r2;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r4):
    r7 = `!`(r4);
    c1 = `as.logical`(r7);
    if c1 then L15() else L2();
  L11():
    tags = ld tags;
    check L13() else D3();
  L12():
    r3 = dyn base(<lang `==`(tags, "TEXT")>);
    goto L1(r3);
  D3():
    deopt 13 [tags];
  L2():
    goto L3();
  L3():
    trimws = ldf trimws;
    check L19() else D7();
  L13():
    tags1 = force? tags;
    checkMissing(tags1);
    r5 = `==`(tags1, "TEXT");
    all = ldf all in base;
    r6 = dyn all(r5);
    check L14() else D4();
  L15():
    stopRd = ldf stopRd;
    check L16() else D5();
  D4():
    deopt 18 [r6];
  D5():
    deopt 21 [];
  D7():
    deopt 29 [];
  L14():
    goto L1(r6);
  L16():
    p1 = prom<V +>{
      conditional5 = ld conditional;
      conditional6 = force? conditional5;
      checkMissing(conditional6);
      return conditional6;
    };
    p2 = prom<V +>{
      Rdfile1 = ld Rdfile;
      Rdfile2 = force? Rdfile1;
      checkMissing(Rdfile2);
      return Rdfile2;
    };
    r10 = dyn stopRd(p1, p2, "condition must be plain text");
    check L17() else D6();
  L19():
    p5 = prom<V +>{
      strsplit = ldf strsplit;
      p4 = prom<V +>{
        paste = ldf paste;
        p3 = prom<V +>{
          condition2 = ld condition;
          condition3 = force? condition2;
          checkMissing(condition3);
          return condition3;
        };
        r13 = dyn paste[, collapse](p3, "");
        return r13;
      };
      r15 = dyn strsplit(p4, ",");
      c2 = `is.object`(r15);
      if c2 then L1() else L2(r15);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", r15);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r17):
      __1 = ldf `[[` in base;
      r18 = dyn __1(r17, 1);
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r20 = dyn trimws(p5);
    check L20() else D8();
  D6():
    deopt 25 [r10];
  D8():
    deopt 31 [r20];
  L17():
    goto L3();
  L20():
    st allow = r20;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L4(r22):
    popenv;
    return r22;
  L21():
    _in_ = ldf `%in%`;
    check L23() else D9();
  L22():
    r21 = dyn base1(<lang `%in%`(c("TRUE", format), allow)>);
    goto L4(r21);
  D9():
    deopt 36 [];
  L23():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      c3 = ldf c in base;
      r25 = dyn c3("TRUE", format2);
      goto L0(r25);
    L2():
      r23 = dyn base2("TRUE", <sym format>);
      goto L0(r23);
    };
    p7 = prom<V +>{
      allow = ld allow;
      allow1 = force? allow;
      checkMissing(allow1);
      return allow1;
    };
    r28 = dyn _in_(p6, p7);
    check L24() else D10();
  D10():
    deopt 39 [r28];
  L24():
    any = ldf any in base;
    r29 = dyn any(r28);
    check L25() else D11();
  D11():
    deopt 41 [r29];
  L25():
    goto L4(r29);
  }
}