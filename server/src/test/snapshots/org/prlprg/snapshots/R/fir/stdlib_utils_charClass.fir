fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg lapply:cls, reg cl:*, reg cl1:V, reg p:p(V +), reg r9:cls, reg p1:p(V +), reg r11:V, reg cl2:*, reg cl3:V, reg l:*, reg names__:cls, reg r12:V, reg as_data_frame:cls, reg X:*, reg X1:V, reg p2:p(V +), reg r14:V, reg sQuote:cls, reg intToUtf8:cls, reg x:*, reg x1:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg l1:*, reg row_names__:cls, reg r19:V, reg X2:*, reg X3:V, reg charClass:cls, reg r20:V, reg charClass1:cls, reg x2:*, reg x3:V, reg p5:p(V +), reg r22:V, reg charClass2:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg table:cls, reg pr:*, reg pr1:V, reg p7:p(V +), reg r27:V |
    mkenv;
    r = clos inner2299224876;
    st charClass = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st x = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    r3 = `:`(48.0, 70.0);
    c = ldf c in base;
    r4 = dyn c(r3, 32.0, 160.0);
    check L4() else D0();
  L3():
    r1 = dyn base(<lang `:`(48.0, 70.0)>, 32.0, 160.0);
    goto L0(r1);
  D0():
    deopt 12 [r4];
  L1(r6):
    st cl = r6;
    lapply = ldf lapply;
    check L8() else D2();
  L4():
    goto L0(r4);
  L5():
    c1 = ldf c in base;
    r7 = dyn c1("alnum", "alpha", "blank", "digit", "graph", "punct", "upper", "xdigit");
    check L7() else D1();
  L6():
    r5 = dyn base1("alnum", "alpha", "blank", "digit", "graph", "punct", "upper", "xdigit");
    goto L1(r5);
  D1():
    deopt 25 [r7];
  D2():
    deopt 28 [];
  L7():
    goto L1(r7);
  L8():
    p = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p1 = prom<V +>{
      r9 = clos inner177517877;
      return r9;
    };
    r11 = dyn lapply(p, p1);
    check L9() else D3();
  D3():
    deopt 31 [r11];
  L9():
    st X = r11;
    cl2 = ld cl;
    check L10() else D4();
  D4():
    deopt 33 [cl2];
  L10():
    cl3 = force? cl2;
    checkMissing(cl3);
    l = ld X;
    names__ = ldf `names<-`;
    check L11() else D5();
  D5():
    deopt 36 [cl3, l, cl3];
  L11():
    r12 = dyn names__(l, NULL, cl3);
    check L12() else D6();
  D6():
    deopt 38 [cl3, r12];
  L12():
    st X = r12;
    as_data_frame = ldf `as.data.frame`;
    check L13() else D7();
  D7():
    deopt 41 [];
  L13():
    p2 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    r14 = dyn as_data_frame(p2);
    check L14() else D8();
  D8():
    deopt 43 [r14];
  L14():
    st X = r14;
    sQuote = ldf sQuote;
    check L15() else D9();
  D9():
    deopt 46 [];
  L15():
    p4 = prom<V +>{
      intToUtf8 = ldf intToUtf8;
      p3 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r16 = dyn intToUtf8[, multiple](p3, TRUE);
      return r16;
    };
    r18 = dyn sQuote(p4);
    check L16() else D10();
  D10():
    deopt 48 [r18];
  L16():
    l1 = ld X;
    row_names__ = ldf `row.names<-`;
    check L17() else D11();
  D11():
    deopt 50 [r18, l1, r18];
  L17():
    r19 = dyn row_names__(l1, NULL, r18);
    check L18() else D12();
  D12():
    deopt 52 [r18, r19];
  L18():
    st X = r19;
    X2 = ld X;
    check L19() else D13();
  D13():
    deopt 54 [X2];
  L19():
    X3 = force? X2;
    checkMissing(X3);
    charClass = ldf charClass;
    check L20() else D14();
  D14():
    deopt 57 [];
  L20():
    r20 = dyn charClass("ABC123", "alpha");
    check L21() else D15();
  D15():
    deopt 60 [r20];
  L21():
    st x = "\u0386\u0388\u0389";
    charClass1 = ldf charClass;
    check L22() else D16();
  D16():
    deopt 65 [];
  L22():
    p5 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r22 = dyn charClass1(p5, "upper");
    check L23() else D17();
  D17():
    deopt 68 [r22];
  L23():
    charClass2 = ldf charClass;
    check L24() else D18();
  D18():
    deopt 70 [];
  L24():
    p6 = prom<V +>{
      r23 = `:`(1.0, 2097151.0);
      return r23;
    };
    r25 = dyn charClass2(p6, "print");
    check L25() else D19();
  D19():
    deopt 73 [r25];
  L25():
    st pr = r25;
    table = ldf table;
    check L26() else D20();
  D20():
    deopt 76 [];
  L26():
    p7 = prom<V +>{
      pr = ld pr;
      pr1 = force? pr;
      checkMissing(pr1);
      return pr1;
    };
    r27 = dyn table(p7);
    check L27() else D21();
  D21():
    deopt 78 [r27];
  L27():
    popenv;
    return r27;
  }
}
fun inner2299224876(x, class) {
  (reg x:*, reg class:*) -+> V { var x:*, var class:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_charClass:*, reg C_charClass1:V, reg x1:*, reg x2:V, reg class1:*, reg class2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    st class = class;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_charClass = ld C_charClass;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_charClass>, <sym x>, <sym class>);
    goto L0(r);
  D0():
    deopt 1 [C_charClass];
  L3():
    C_charClass1 = force? C_charClass;
    checkMissing(C_charClass1);
    x1 = ld x;
    check L4() else D1();
  D1():
    deopt 2 [C_charClass1, x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    class1 = ld class;
    check L5() else D2();
  D2():
    deopt 3 [C_charClass1, x2, class1];
  L5():
    class2 = force? class1;
    checkMissing(class2);
    vargs = dots[x2, class2];
    r2 = `.Call`(C_charClass1, vargs, <missing>);
    goto L0(r2);
  }
}
fun inner177517877(y) {
  (reg y:*) -+> V { var y:*, reg charClass:cls, reg x:*, reg x1:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st y = y;
    charClass = ldf charClass;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r2 = dyn charClass(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}