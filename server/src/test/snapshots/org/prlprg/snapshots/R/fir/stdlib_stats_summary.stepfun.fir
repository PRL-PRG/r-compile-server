fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.stepfun` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg expression:cls, reg r4:V, reg p:p(V +), reg environment:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg length:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg n:*, reg n1:V, reg c:L, reg r13:V, reg c1:L, reg c2:V, reg n2:*, reg n3:V, reg r14:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r15:V, reg cat:cls, reg format:cls, reg eval1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg expression1:cls, reg r19:V, reg p3:p(V +), reg environment1:cls, reg object3:*, reg object4:V, reg p4:p(V +), reg r22:V, reg p5:p(V +), reg r24:V, reg p6:p(V +), reg r26:V, reg p7:p(V +), reg n4:*, reg n5:V, reg p8:p(V +), reg n6:*, reg n7:V, reg r29:V, reg c8:L, reg p9:p(V +), reg r31:V, reg n8:*, reg n9:V, reg r32:V, reg c9:L, reg summary:*, reg summary1:V, reg summary2:V, reg r33:cls, reg print:cls, reg summ:cls, reg knots:cls, reg object5:*, reg object6:V, reg p10:p(V +), reg r35:V, reg p11:p(V +), reg r37:V, reg p12:p(V +), reg r39:V, reg cat1:cls, reg n10:*, reg n11:V, reg r40:V, reg c10:L, reg p13:p(V +), reg n12:*, reg n13:V, reg r42:V, reg p14:p(V +), reg n14:*, reg n15:V, reg r44:V, reg c11:L, reg p15:p(V +), reg r46:V, reg print1:cls, reg summ1:cls, reg eval2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg expression2:cls, reg r49:V, reg p16:p(V +), reg environment2:cls, reg object7:*, reg object8:V, reg p17:p(V +), reg r52:V, reg p18:p(V +), reg r54:V, reg p19:p(V +), reg r56:V, reg p20:p(V +), reg r58:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r59:V, reg r60:V, reg invisible:cls, reg r61:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st n = r1;
    sym2 = ldf `is.integer`;
    base2 = ldf `is.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L8():
    eval = ldf eval;
    check L10() else D0();
  L9():
    r = dyn base(<lang eval(expression(x), envir=environment(object))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1(r12):
    r13 = `!`(r12);
    c1 = `as.logical`(r13);
    if c1 then L2(c1) else L16();
  L10():
    p = prom<V +>{
      sym1 = ldf expression;
      base1 = ldf expression in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      expression = ldf expression in base;
      r4 = dyn expression(<sym x>);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym x>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r7 = dyn environment(p1);
      return r7;
    };
    r9 = dyn eval[, envir](p, p2);
    check L11() else D1();
  L13():
    n = ld n;
    check L15() else D3();
  L14():
    r11 = dyn base2(<sym n>);
    goto L1(r11);
  D1():
    deopt 7 [r9];
  D3():
    deopt 12 [n];
  L2(c2):
    c7 = `as.logical`(c2);
    if c7 then L19() else L3();
  L11():
    length = ldf length in base;
    r10 = dyn length(r9);
    check L12() else D2();
  L15():
    n1 = force? n;
    checkMissing(n1);
    c = `is.integer`(n1);
    goto L1(c);
  L16():
    n2 = ld n;
    check L17() else D4();
  D2():
    deopt 9 [r10];
  D4():
    deopt 16 [c1, n2];
  L3():
    goto L4();
  L4():
    cat = ldf cat;
    check L23() else D7();
  L12():
    goto L0(r10);
  L17():
    n3 = force? n2;
    checkMissing(n3);
    r14 = `<`(n3, 1);
    c4 = `as.logical`(r14);
    c5 = `||`(c1, c4);
    goto L2(c5);
  L19():
    stop = ldf stop;
    check L20() else D5();
  D5():
    deopt 22 [];
  D7():
    deopt 28 [];
  L20():
    r15 = dyn stop("not a valid step function");
    check L21() else D6();
  L23():
    p7 = prom<V +>{
      format = ldf format;
      p6 = prom<V +>{
        eval1 = ldf eval;
        p3 = prom<V +>{
          sym3 = ldf expression;
          base3 = ldf expression in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r18):
          return r18;
        L1():
          expression1 = ldf expression in base;
          r19 = dyn expression1(<sym f>);
          goto L0(r19);
        L2():
          r17 = dyn base3(<sym f>);
          goto L0(r17);
        };
        p5 = prom<V +>{
          environment1 = ldf environment;
          p4 = prom<V +>{
            object3 = ld object;
            object4 = force? object3;
            checkMissing(object4);
            return object4;
          };
          r22 = dyn environment1(p4);
          return r22;
        };
        r24 = dyn eval1[, envir](p3, p5);
        return r24;
      };
      r26 = dyn format(p6);
      return r26;
    };
    p8 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    p9 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      r29 = `<=`(n7, 6);
      c8 = `as.logical`(r29);
      if c8 then L1() else L0();
    L0():
      return "knots with summary\n";
    L1():
      return "knots at\n";
    };
    r31 = dyn cat("Step function with continuity 'f'=", p7, ", ", p8, p9);
    check L24() else D8();
  D6():
    deopt 24 [r15];
  D8():
    deopt 34 [r31];
  L21():
    goto L4();
  L24():
    n8 = ld n;
    check L25() else D9();
  D9():
    deopt 35 [n8];
  L25():
    n9 = force? n8;
    checkMissing(n9);
    r32 = `>`(n9, 6);
    c9 = `as.logical`(r32);
    if c9 then L26() else L5();
  L5():
    r33 = clos inner2501545716;
    goto L6(r33);
  L6(summary2):
    st summ = summary2;
    print = ldf print;
    check L29() else D11();
  L26():
    summary = ld summary;
    check L27() else D10();
  D10():
    deopt 39 [summary];
  D11():
    deopt 45 [];
  L27():
    summary1 = force? summary;
    checkMissing(summary1);
    goto L6(summary1);
  L29():
    p12 = prom<V +>{
      summ = ldf summ;
      p11 = prom<V +>{
        knots = ldf knots;
        p10 = prom<V +>{
          object5 = ld object;
          object6 = force? object5;
          checkMissing(object6);
          return object6;
        };
        r35 = dyn knots(p10);
        return r35;
      };
      r37 = dyn summ(p11);
      return r37;
    };
    r39 = dyn print(p12);
    check L30() else D12();
  D12():
    deopt 47 [r39];
  L30():
    cat1 = ldf cat;
    check L31() else D13();
  D13():
    deopt 49 [];
  L31():
    p13 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      r40 = `>`(n11, 6);
      c10 = `as.logical`(r40);
      if c10 then L1() else L0();
    L0():
      return "  ";
    L1():
      return "\n";
    };
    p14 = prom<V +>{
      n12 = ld n;
      n13 = force? n12;
      checkMissing(n13);
      r42 = `+`(n13, 1);
      return r42;
    };
    p15 = prom<V +>{
      n14 = ld n;
      n15 = force? n14;
      checkMissing(n15);
      r44 = `<=`(n15, 6);
      c11 = `as.logical`(r44);
      if c11 then L1() else L0();
    L0():
      return "with summary\n";
    L1():
      return "at\n";
    };
    r46 = dyn cat1[, , , , , sep](p13, "and\t", p14, " plateau levels (y) ", p15, "");
    check L32() else D14();
  D14():
    deopt 57 [r46];
  L32():
    print1 = ldf print;
    check L33() else D15();
  D15():
    deopt 59 [];
  L33():
    p20 = prom<V +>{
      summ1 = ldf summ;
      p19 = prom<V +>{
        eval2 = ldf eval;
        p16 = prom<V +>{
          sym4 = ldf expression;
          base4 = ldf expression in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r48):
          return r48;
        L1():
          expression2 = ldf expression in base;
          r49 = dyn expression2(<lang c(yleft, y)>);
          goto L0(r49);
        L2():
          r47 = dyn base4(<lang c(yleft, y)>);
          goto L0(r47);
        };
        p18 = prom<V +>{
          environment2 = ldf environment;
          p17 = prom<V +>{
            object7 = ld object;
            object8 = force? object7;
            checkMissing(object8);
            return object8;
          };
          r52 = dyn environment2(p17);
          return r52;
        };
        r54 = dyn eval2[, envir](p16, p18);
        return r54;
      };
      r56 = dyn summ1(p19);
      return r56;
    };
    r58 = dyn print1(p20);
    check L34() else D16();
  D16():
    deopt 61 [r58];
  L34():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L7(r60):
    popenv;
    return r60;
  L35():
    invisible = ldf invisible in base;
    r61 = dyn invisible();
    check L37() else D17();
  L36():
    r59 = dyn base5();
    goto L7(r59);
  D17():
    deopt 65 [r61];
  L37():
    goto L7(r61);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}