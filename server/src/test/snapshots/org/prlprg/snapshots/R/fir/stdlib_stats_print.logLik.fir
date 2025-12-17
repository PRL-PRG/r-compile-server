fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.logLik` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg paste:cls, reg format:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:cls, reg r4:V, reg p1:p(V +), reg digits1:*, reg digits2:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg format1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg x3:*, reg x4:V, reg attr:cls, reg r13:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg x5:*, reg x6:V, reg invisible:cls, reg r20:V |
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
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p4 = prom<V +>{
      paste = ldf paste;
      p3 = prom<V +>{
        format = ldf format;
        p1 = prom<V +>{
          sym = ldf c;
          base = ldf c in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r3):
          return r3;
        L1():
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          c = ldf c in base;
          r4 = dyn c(x2);
          goto L0(r4);
        L2():
          r2 = dyn base(<sym x>);
          goto L0(r2);
        };
        p2 = prom<V +>{
          digits1 = ld digits;
          digits2 = force? digits1;
          checkMissing(digits2);
          return digits2;
        };
        r7 = dyn format[, digits](p1, p2);
        return r7;
      };
      r9 = dyn paste[, collapse](p3, ", ");
      return r9;
    };
    p6 = prom<V +>{
      format1 = ldf format;
      p5 = prom<V +>{
        sym1 = ldf attr;
        base1 = ldf attr in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r12):
        return r12;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        attr = ldf attr in base;
        r13 = dyn attr(x4, "df");
        goto L0(r13);
      L2():
        r11 = dyn base1(<sym x>, "df");
        goto L0(r11);
      };
      r15 = dyn format1(p5);
      return r15;
    };
    r17 = dyn cat[, , , , , sep]("'log Lik.' ", p4, " (df=", p6, ")\n", "");
    check L4() else D1();
  D1():
    deopt 9 [r17];
  L4():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L5() else L6();
  L2(r19):
    popenv;
    return r19;
  L5():
    x5 = ld x;
    check L7() else D2();
  L6():
    r18 = dyn base2(<sym x>);
    goto L2(r18);
  D2():
    deopt 12 [x5];
  L7():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r20 = dyn invisible(x6);
    check L8() else D3();
  D3():
    deopt 15 [r20];
  L8():
    goto L2(r20);
  }
}