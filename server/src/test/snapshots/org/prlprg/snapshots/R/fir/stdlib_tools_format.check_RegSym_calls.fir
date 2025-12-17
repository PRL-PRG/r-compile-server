fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_RegSym_calls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg gettextf:cls, reg sQuote:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg attr:cls, reg r7:V, reg p:p(V +), reg r9:V, reg p1:p(V +), reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x5:*, reg x6:V, reg length1:cls, reg r14:V, reg r15:V, reg c1:L, reg strwrap:cls, reg paste:cls, reg paste1:cls, reg sQuote1:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg r24:V, reg paste2:cls, reg sQuote2:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r26:V, reg p7:p(V +), reg r28:V, reg c2:cls, reg r29:V, reg character:cls, reg r30:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L1();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    character = ldf character;
    check L27() else D11();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L9() else D1();
  L10():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D1():
    deopt 5 [r2];
  D11():
    deopt 37 [];
  L2(r4):
    popenv;
    return r4;
  L9():
    goto L0(r2);
  L11():
    gettextf = ldf gettextf;
    check L13() else D2();
  L12():
    r3 = dyn base1(<lang gettextf("File %s:", sQuote(attr(x, "file")))>, <lang if(`>`(length(x), 1), {
        strwrap(paste("Found no calls to:", paste(sQuote(x), collapse=", ")), indent=2, exdent=4)
      }, paste("  Found no call to:", sQuote(x)))>);
    goto L2(r3);
  L27():
    r30 = dyn character();
    check L28() else D12();
  D2():
    deopt 9 [];
  D12():
    deopt 38 [r30];
  L13():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        sym2 = ldf attr;
        base2 = ldf attr in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r6):
        return r6;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        attr = ldf attr in base;
        r7 = dyn attr(x4, "file");
        goto L0(r7);
      L2():
        r5 = dyn base2(<sym x>, "file");
        goto L0(r5);
      };
      r9 = dyn sQuote(p);
      return r9;
    };
    r11 = dyn gettextf("File %s:", p1);
    check L14() else D3();
  L28():
    popenv;
    return r30;
  D3():
    deopt 12 [r11];
  L14():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L3(r13):
    r15 = `>`(r13, 1);
    c1 = `as.logical`(r15);
    if c1 then L19() else L4();
  L15():
    x5 = ld x;
    check L17() else D4();
  L16():
    r12 = dyn base3(<sym x>);
    goto L3(r12);
  D4():
    deopt 15 [x5];
  L4():
    paste2 = ldf paste;
    check L23() else D8();
  L5(r24):
    c2 = ldf c in base;
    r29 = dyn c2(r11, r24);
    check L25() else D10();
  L17():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r14 = dyn length1(x6);
    check L18() else D5();
  L19():
    strwrap = ldf strwrap;
    check L20() else D6();
  D5():
    deopt 18 [r14];
  D6():
    deopt 22 [];
  D8():
    deopt 30 [];
  D10():
    deopt 35 [r29];
  L18():
    goto L3(r14);
  L20():
    p5 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        paste1 = ldf paste;
        p3 = prom<V +>{
          sQuote1 = ldf sQuote;
          p2 = prom<V +>{
            x7 = ld x;
            x8 = force? x7;
            checkMissing(x8);
            return x8;
          };
          r17 = dyn sQuote1(p2);
          return r17;
        };
        r19 = dyn paste1[, collapse](p3, ", ");
        return r19;
      };
      r21 = dyn paste("Found no calls to:", p4);
      return r21;
    };
    r23 = dyn strwrap[, indent, exdent](p5, 2, 4);
    check L21() else D7();
  L23():
    p7 = prom<V +>{
      sQuote2 = ldf sQuote;
      p6 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r26 = dyn sQuote2(p6);
      return r26;
    };
    r28 = dyn paste2("  Found no call to:", p7);
    check L24() else D9();
  L25():
    goto L2(r29);
  D7():
    deopt 28 [r23];
  D9():
    deopt 33 [r28];
  L21():
    goto L5(r23);
  L24():
    goto L5(r28);
  }
}