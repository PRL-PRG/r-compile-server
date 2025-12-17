fun main() {
  () -+> V { reg r:cls, reg power_t_test:cls, reg r1:V, reg print:cls, reg ptt:*, reg ptt1:V, reg p:p(V +), reg r3:V, reg print1:cls, reg ptt2:*, reg ptt3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    r = clos inner1591825523;
    st `print.power.htest` = r;
    power_t_test = ldf `power.t.test`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn power_t_test[n, delta](20.0, 1.0);
    check L1() else D1();
  D1():
    deopt 9 [r1];
  L1():
    st ptt = r1;
    print = ldf print;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p = prom<V +>{
      ptt = ld ptt;
      ptt1 = force? ptt;
      checkMissing(ptt1);
      return ptt1;
    };
    r3 = dyn print[, digits](p, 4.0);
    check L3() else D3();
  D3():
    deopt 16 [r3];
  L3():
    print1 = ldf print;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p1 = prom<V +>{
      ptt2 = ld ptt;
      ptt3 = force? ptt2;
      checkMissing(ptt3);
      return ptt3;
    };
    r5 = dyn print1[, digits](p1, 12.0);
    check L5() else D5();
  D5():
    deopt 22 [r5];
  L5():
    popenv;
    return r5;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p1:p(V +), reg r4:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg l:*, reg c2:L, reg r7:dots, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:dots, reg l5:*, reg r16:dots, reg r17:V, reg c3:cls, reg r18:V, reg ___:cls, reg r19:V, reg cat1:cls, reg paste:cls, reg format:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg x9:*, reg x10:V, reg names:cls, reg r22:V, reg p2:p(V +), reg r24:V, reg p3:p(V +), reg format1:cls, reg x11:*, reg x12:V, reg p4:p(V +), reg digits1:*, reg digits2:V, reg p5:p(V +), reg r28:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg r32:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg note:*, reg note1:V, reg c4:V, reg r35:V, reg c5:L, reg cat2:cls, reg note2:*, reg note3:V, reg p8:p(V +), reg r37:V, reg cat3:cls, reg r39:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg x13:*, reg x14:V, reg invisible:cls, reg r42:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r2 = `$`(x4, <sym method>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn cat("\n    ", p1, "\n\n");
    check L9() else D1();
  D1():
    deopt 5 [r4];
  L9():
    x5 = ld x;
    check L10() else D2();
  D2():
    deopt 6 [x5];
  L10():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L12() else L13(x6);
  L11(dx3):
    st note = dx3;
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L15() else L16(NULL, l);
  L12():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(dr2);
  L13(x8):
    r5 = `$`(x8, <sym note>);
    goto L11(r5);
  L2(dx5):
    st x = dx5;
    cat1 = ldf cat;
    check L21() else D4();
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L15():
    dr4 = tryDispatchBuiltin.0("[<-", l, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L17() else L16(NULL, dr4);
  L16(r7, l2):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  D4():
    deopt 22 [];
  L3(r15, l5, r16, r17):
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l5, r16, r17);
    goto L2(r19);
  L17():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx4);
  L18():
    c3 = ldf c in base;
    r18 = dyn c3("method", "note");
    check L20() else D3();
  L19():
    r14 = dyn base("method", "note");
    goto L3(r7, l2, NULL, r14);
  L21():
    p7 = prom<V +>{
      paste = ldf paste;
      p3 = prom<V +>{
        format = ldf format;
        p2 = prom<V +>{
          sym1 = ldf names;
          base1 = ldf names in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r21):
          return r21;
        L1():
          x9 = ld x;
          x10 = force? x9;
          checkMissing(x10);
          names = ldf names in base;
          r22 = dyn names(x10);
          goto L0(r22);
        L2():
          r20 = dyn base1(<sym x>);
          goto L0(r20);
        };
        r24 = dyn format[, width, justify](p2, 15, "right");
        return r24;
      };
      p6 = prom<V +>{
        format1 = ldf format;
        p4 = prom<V +>{
          x11 = ld x;
          x12 = force? x11;
          checkMissing(x12);
          return x12;
        };
        p5 = prom<V +>{
          digits1 = ld digits;
          digits2 = force? digits1;
          checkMissing(digits2);
          return digits2;
        };
        r28 = dyn format1[, digits](p4, p5);
        return r28;
      };
      r30 = dyn paste[, , sep](p3, p6, " = ");
      return r30;
    };
    r32 = dyn cat1[, sep](p7, "\n");
    check L22() else D5();
  D3():
    deopt 18 [r7, l2, NULL, r18];
  D5():
    deopt 26 [r32];
  L20():
    goto L3(r7, l2, NULL, r18);
  L22():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L4(r34):
    r35 = `!`(r34);
    c5 = `as.logical`(r35);
    if c5 then L26() else L5();
  L23():
    note = ld note;
    check L25() else D6();
  L24():
    r33 = dyn base2(<sym note>);
    goto L4(r33);
  D6():
    deopt 28 [note];
  L5():
    cat3 = ldf cat;
    check L30() else D9();
  L6():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L25():
    note1 = force? note;
    checkMissing(note1);
    c4 = `==`(note1, NULL);
    goto L4(c4);
  L26():
    cat2 = ldf cat;
    check L27() else D7();
  D7():
    deopt 33 [];
  D9():
    deopt 42 [];
  L7(r41):
    popenv;
    return r41;
  L27():
    p8 = prom<V +>{
      note2 = ld note;
      note3 = force? note2;
      checkMissing(note3);
      return note3;
    };
    r37 = dyn cat2[, , , , sep]("\n", "NOTE: ", p8, "\n\n", "");
    check L28() else D8();
  L30():
    r39 = dyn cat3("\n");
    check L31() else D10();
  L32():
    x13 = ld x;
    check L34() else D11();
  L33():
    r40 = dyn base3(<sym x>);
    goto L7(r40);
  D8():
    deopt 40 [r37];
  D10():
    deopt 44 [r39];
  D11():
    deopt 47 [x13];
  L28():
    goto L6();
  L31():
    goto L6();
  L34():
    x14 = force? x13;
    checkMissing(x14);
    invisible = ldf invisible in base;
    r42 = dyn invisible(x14);
    check L35() else D12();
  D12():
    deopt 50 [r42];
  L35():
    goto L7(r42);
  }
}