fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.connection` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg tryCatch:cls, reg unlist:cls, reg summary:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:cls, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg usumm:*, reg usumm1:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg oldClass:cls, reg r12:V, reg cl:*, reg cl1:V, reg c2:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cl4:*, reg cl5:V, reg r13:V, reg __:cls, reg r14:V, reg cat:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg cl6:*, reg cl7:V, reg length:cls, reg r17:V, reg c3:L, reg paste0:cls, reg paste1:cls, reg sQuote:cls, reg cl8:*, reg cl9:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg cat1:cls, reg r27:V, reg print:cls, reg cbind:cls, reg usumm2:*, reg usumm3:V, reg p8:p(V +), reg r29:V, reg p9:p(V +), reg ddd1:dots?, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg x5:*, reg x6:V, reg invisible:cls, reg r34:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    tryCatch = ldf tryCatch;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p2 = prom<V +>{
      unlist = ldf unlist;
      p1 = prom<V +>{
        summary = ldf summary;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn summary(p);
        return r1;
      };
      r3 = dyn unlist(p1);
      return r3;
    };
    p3 = prom<V +>{
      r5 = clos inner3708401697;
      return r5;
    };
    r7 = dyn tryCatch[, error](p2, p3);
    check L7() else D1();
  D1():
    deopt 5 [r7];
  L7():
    st usumm = r7;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r9):
    c1 = `as.logical`(r9);
    if c1 then L11() else L1();
  L8():
    usumm = ld usumm;
    check L10() else D2();
  L9():
    r8 = dyn base(<sym usumm>);
    goto L0(r8);
  D2():
    deopt 8 [usumm];
  L1():
    cat1 = ldf cat;
    check L24() else D9();
  L4():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L10():
    usumm1 = force? usumm;
    checkMissing(usumm1);
    c = `==`(usumm1, NULL);
    goto L0(c);
  L11():
    sym1 = ldf oldClass;
    base1 = ldf oldClass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D9():
    deopt 35 [];
  L2(r11):
    st cl = r11;
    cl = ld cl;
    check L16() else D5();
  L5(r33):
    popenv;
    return r33;
  L12():
    x3 = ld x;
    check L14() else D3();
  L13():
    r10 = dyn base1(<sym x>);
    goto L2(r10);
  L24():
    r27 = dyn cat1("A connection with");
    check L25() else D10();
  L28():
    x5 = ld x;
    check L30() else D13();
  L29():
    r32 = dyn base3(<sym x>);
    goto L5(r32);
  D3():
    deopt 13 [x3];
  D5():
    deopt 18 [cl];
  D10():
    deopt 37 [r27];
  D13():
    deopt 45 [x5];
  L14():
    x4 = force? x3;
    checkMissing(x4);
    oldClass = ldf oldClass in base;
    r12 = dyn oldClass(x4);
    check L15() else D4();
  L16():
    cl1 = force? cl;
    checkMissing(cl1);
    c2 = `is.object`(cl1);
    if c2 then L17() else L18(cl1);
  L25():
    print = ldf print;
    check L26() else D11();
  L30():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r34 = dyn invisible(x6);
    check L31() else D14();
  D4():
    deopt 16 [r12];
  D11():
    deopt 39 [];
  D14():
    deopt 48 [r34];
  L3(dx1):
    st cl = dx1;
    cat = ldf cat;
    check L21() else D7();
  L15():
    goto L2(r12);
  L17():
    dr = tryDispatchBuiltin.1("[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(cl3):
    cl4 = ld cl;
    check L20() else D6();
  L26():
    p9 = prom<V +>{
      cbind = ldf cbind;
      p8 = prom<V +>{
        usumm2 = ld usumm;
        usumm3 = force? usumm2;
        checkMissing(usumm3);
        return usumm3;
      };
      r29 = dyn cbind[` `](p8);
      return r29;
    };
    ddd1 = ld `...`;
    r31 = dyn print[, `...`](p9, ddd1);
    check L27() else D12();
  L31():
    goto L5(r34);
  D6():
    deopt 20 [cl3, cl4];
  D7():
    deopt 27 [];
  D12():
    deopt 42 [r31];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L20():
    cl5 = force? cl4;
    checkMissing(cl5);
    r13 = `!=`(cl5, "connection");
    __ = ldf `[` in base;
    r14 = dyn __(cl3, r13);
    goto L3(r14);
  L21():
    p7 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r16):
      c3 = `as.logical`(r16);
      if c3 then L4() else L1();
    L2():
      cl6 = ld cl;
      cl7 = force? cl6;
      checkMissing(cl7);
      length = ldf length in base;
      r17 = dyn length(cl7);
      goto L0(r17);
    L3():
      r15 = dyn base2(<sym cl>);
      goto L0(r15);
    L1():
      invisible.0();
      return NULL;
    L4():
      paste0 = ldf paste0;
      p6 = prom<V +>{
        paste1 = ldf paste;
        p5 = prom<V +>{
          sQuote = ldf sQuote;
          p4 = prom<V +>{
            cl8 = ld cl;
            cl9 = force? cl8;
            checkMissing(cl9);
            return cl9;
          };
          r19 = dyn sQuote(p4);
          return r19;
        };
        r21 = dyn paste1[, collapse](p5, ", ");
        return r21;
      };
      r23 = dyn paste0("specifically, ", p6, ", ");
      return r23;
    };
    r25 = dyn cat[, , , sep]("A connection, ", p7, "but invalid.\n", "");
    check L22() else D8();
  L27():
    goto L4();
  D8():
    deopt 33 [r25];
  L22():
    goto L4();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}