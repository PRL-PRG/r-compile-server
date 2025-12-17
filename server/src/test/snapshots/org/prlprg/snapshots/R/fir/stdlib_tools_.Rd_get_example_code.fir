fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_example_code` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg _Rd_get_section:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg character:cls, reg r6:V, reg _Rd_drop_comments:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r10:V, reg r11:cls, reg _Rd_deparse:cls, reg recurse:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V |
    mkenv;
    st x = x;
    _Rd_get_section = ldf `.Rd_get_section`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn _Rd_get_section(p, "examples");
    check L4() else D1();
  D1():
    deopt 4 [r1];
  L4():
    st x = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L9() else L1();
  L5():
    x3 = ld x;
    check L7() else D2();
  L6():
    r2 = dyn base(<sym x>);
    goto L0(r2);
  D2():
    deopt 8 [x3];
  L1():
    _Rd_drop_comments = ldf `.Rd_drop_comments`;
    check L14() else D6();
  L7():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r4 = dyn length(x4);
    check L8() else D3();
  L9():
    character = ldf character;
    check L10() else D4();
  D3():
    deopt 11 [r4];
  D4():
    deopt 14 [];
  D6():
    deopt 20 [];
  L8():
    goto L0(r4);
  L10():
    r6 = dyn character();
    check L11() else D5();
  L14():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r10 = dyn _Rd_drop_comments(p1);
    check L15() else D7();
  D5():
    deopt 15 [r6];
  D7():
    deopt 22 [r10];
  L11():
    popenv;
    return r6;
  L15():
    st x = r10;
    r11 = clos inner3708401697;
    st recurse = r11;
    _Rd_deparse = ldf `.Rd_deparse`;
    check L16() else D8();
  D8():
    deopt 28 [];
  L16():
    p3 = prom<V +>{
      recurse = ldf recurse;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r13 = dyn recurse(p2);
      return r13;
    };
    r15 = dyn _Rd_deparse[, tag](p3, FALSE);
    check L17() else D9();
  D9():
    deopt 32 [r15];
  L17():
    popenv;
    return r15;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg c3:V, reg _in_:cls, reg tag:*, reg tag1:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c4:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg c5:L, reg c6:V, reg c8:L, reg l:*, reg attr__:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg e3:*, reg e4:V, reg is_list:cls, reg r16:V, reg c9:L, reg structure:cls, reg lapply:cls, reg e5:*, reg e6:V, reg c10:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg e11:V, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg e14:V, reg r20:V, reg RdTags:cls, reg e15:*, reg e16:V, reg p2:p(V +), reg r22:V, reg match:cls, reg r23:V, reg is_na:cls, reg r24:V, reg __:cls, reg r25:V, reg p3:p(V +), reg recurse:*, reg recurse1:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg e17:*, reg e18:V, reg attr1:cls, reg r32:V, reg p6:p(V +), reg r34:V, reg e19:*, reg e20:V |
    mkenv;
    st e = e;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L13() else L2(c1);
  L7():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L8():
    r = dyn base(<lang `<-`(tag, attr(e, "Rd_tag"))>);
    goto L0(r);
  L1(r3):
    st tag = r3;
    c = `==`(r3, NULL);
    goto L0(c);
  L2(c3):
    c8 = `as.logical`(c3);
    if c8 then L17() else L3();
  L9():
    e1 = ld e;
    check L11() else D0();
  L10():
    r2 = dyn base1(<sym e>, "Rd_tag");
    goto L1(r2);
  L13():
    _in_ = ldf `%in%`;
    check L14() else D2();
  D0():
    deopt 3 [e1];
  D2():
    deopt 12 [c1];
  L3():
    goto L4();
  L4():
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L11():
    e2 = force? e1;
    checkMissing(e2);
    attr = ldf attr in base;
    r4 = dyn attr(e2, "Rd_tag");
    check L12() else D1();
  L14():
    p = prom<V +>{
      tag = ld tag;
      tag1 = force? tag;
      checkMissing(tag1);
      return tag1;
    };
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c4 = ldf c in base;
      r9 = dyn c4("\\dontshow", "\\testonly");
      goto L0(r9);
    L2():
      r7 = dyn base2("\\dontshow", "\\testonly");
      goto L0(r7);
    };
    r11 = dyn _in_(p, p1);
    check L15() else D3();
  L17():
    l = ld e;
    attr__ = ldf `attr<-`;
    check L18() else D4();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [c1, r11];
  D4():
    deopt 20 ["Rd", l, "Rd"];
  L5(r15):
    c9 = `as.logical`(r15);
    if c9 then L25() else L6();
  L12():
    goto L1(r4);
  L15():
    c5 = `as.logical`(r11);
    c6 = `&&`(c1, c5);
    goto L2(c6);
  L18():
    r12 = dyn attr__(l, NULL, "Rd_tag", "Rd");
    check L19() else D5();
  L21():
    e3 = ld e;
    check L23() else D6();
  L22():
    r14 = dyn base3(<sym e>);
    goto L5(r14);
  D5():
    deopt 23 ["Rd", r12];
  D6():
    deopt 29 [e3];
  L6():
    e19 = ld e;
    check L29() else D10();
  L19():
    st e = r12;
    goto L4();
  L23():
    e4 = force? e3;
    checkMissing(e4);
    is_list = ldf `is.list` in base;
    r16 = dyn is_list(e4);
    check L24() else D7();
  L25():
    structure = ldf structure;
    check L26() else D8();
  D7():
    deopt 32 [r16];
  D8():
    deopt 34 [];
  D10():
    deopt 39 [e19];
  L24():
    goto L5(r16);
  L26():
    p5 = prom<V +>{
      lapply = ldf lapply;
      p3 = prom<V +>{
        e5 = ld e;
        e6 = force? e5;
        checkMissing(e6);
        c10 = `is.object`(e6);
        if c10 then L3() else L4(e6);
      L0(dx1):
        return dx1;
      L3():
        dr = tryDispatchBuiltin.1("[", e6);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L5() else L4(dr);
      L4(e8):
        sym4 = ldf `is.na`;
        base4 = ldf `is.na` in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L6() else L7();
      L1(e11, r18):
        __ = ldf `[` in base;
        r25 = dyn __(e11, r18);
        goto L0(r25);
      L5():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L6():
        sym5 = ldf match;
        base5 = ldf match in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L8() else L9();
      L7():
        r17 = dyn base4(<lang match(RdTags(e), "\\dontrun")>);
        goto L1(e8, r17);
      L2(e14, r20):
        is_na = ldf `is.na` in base;
        r24 = dyn is_na(r20);
        goto L1(e14, r24);
      L8():
        RdTags = ldf RdTags;
        p2 = prom<V +>{
          e15 = ld e;
          e16 = force? e15;
          checkMissing(e16);
          return e16;
        };
        r22 = dyn RdTags(p2);
        match = ldf match in base;
        r23 = dyn match(r22, "\\dontrun", NA_INT, NULL);
        goto L2(e8, r23);
      L9():
        r19 = dyn base5(<lang RdTags(e)>, "\\dontrun");
        goto L2(e8, r19);
      };
      p4 = prom<V +>{
        recurse = ld recurse;
        recurse1 = force? recurse;
        checkMissing(recurse1);
        return recurse1;
      };
      r28 = dyn lapply(p3, p4);
      return r28;
    };
    p6 = prom<V +>{
      sym6 = ldf attr;
      base6 = ldf attr in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      e17 = ld e;
      e18 = force? e17;
      checkMissing(e18);
      attr1 = ldf attr in base;
      r32 = dyn attr1(e18, "Rd_tag");
      goto L0(r32);
    L2():
      r30 = dyn base6(<sym e>, "Rd_tag");
      goto L0(r30);
    };
    r34 = dyn structure[, Rd_tag](p5, p6);
    check L27() else D9();
  L29():
    e20 = force? e19;
    checkMissing(e20);
    popenv;
    return e20;
  D9():
    deopt 38 [r34];
  L27():
    popenv;
    return r34;
  }
}