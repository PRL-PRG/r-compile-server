fun main() {
  () -+> V { reg r:cls, reg pretty:cls, reg r1:V, reg p:p(V +), reg r3:V, reg pretty1:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg pretty2:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg pretty3:cls, reg r10:V, reg r11:V, reg p3:p(V +), reg r13:V, reg pretty4:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg pretty5:cls, reg r17:V, reg p5:p(V +), reg r19:V, reg pretty6:cls, reg r20:V, reg p6:p(V +), reg r22:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg cat:cls, reg k:*, reg k1:V, reg p7:p(V +), reg r24:V, reg print:cls, reg diff:cls, reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg pretty7:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:R, reg r31:V, reg k2:*, reg k3:V, reg r32:V, reg r33:V, reg r34:V, reg c1:cls, reg r35:V, reg r36:V, reg p8:p(V +), reg r38:V, reg range:cls, reg r39:V, reg p9:p(V +), reg r41:V, reg p10:p(V +), reg r43:V, reg pretty8:cls, reg p11:p(V +), reg r45:V, reg r46:cls, reg __:cls, reg r47:V, reg r48:cls, reg lapply:cls, reg add_names:cls, reg r49:V, reg p12:p(V +), reg r51:V, reg p13:p(V +), reg pretty9:*, reg pretty10:V, reg p14:p(V +), reg r54:V, reg p15:p(V +), reg r56:V, reg __1:cls, reg r57:V, reg r58:cls, reg lapply1:cls, reg add_names1:cls, reg r59:V, reg p16:p(V +), reg r61:V, reg p17:p(V +), reg pretty11:*, reg pretty12:V, reg p18:p(V +), reg r64:V, reg p19:p(V +), reg r66:V, reg sapply:cls, reg add_names2:cls, reg r67:V, reg p20:p(V +), reg r69:V, reg p21:p(V +), reg pretty13:*, reg pretty14:V, reg p22:p(V +), reg r72:V, reg pretty15:cls, reg r73:V, reg pretty16:cls, reg r74:V, reg pretty17:cls, reg r75:V, reg r76:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg c2:L, reg x1:V, reg cat1:cls, reg formatC:cls, reg k4:*, reg k5:V, reg r77:V, reg p23:p(V +), reg r79:V, reg p24:p(V +), reg formatC1:cls, reg pretty18:cls, reg k6:*, reg k7:V, reg r81:V, reg p25:p(V +), reg r83:V, reg p26:p(V +), reg r85:V, reg p27:p(V +), reg r87:V |
    mkenv;
    r = clos inner2044426018;
    st pretty = r;
    pretty = ldf pretty;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      r1 = `:`(1.0, 15.0);
      return r1;
    };
    r3 = dyn pretty(p);
    check L5() else D1();
  D1():
    deopt 6 [r3];
  L5():
    pretty1 = ldf pretty;
    check L6() else D2();
  D2():
    deopt 8 [];
  L6():
    p1 = prom<V +>{
      r4 = `:`(1.0, 15.0);
      return r4;
    };
    r6 = dyn pretty1[, `high.u.bias`](p1, 2.0);
    check L7() else D3();
  D3():
    deopt 12 [r6];
  L7():
    pretty2 = ldf pretty;
    check L8() else D4();
  D4():
    deopt 14 [];
  L8():
    p2 = prom<V +>{
      r7 = `:`(1.0, 15.0);
      return r7;
    };
    r9 = dyn pretty2[, n](p2, 4.0);
    check L9() else D5();
  D5():
    deopt 18 [r9];
  L9():
    pretty3 = ldf pretty;
    check L10() else D6();
  D6():
    deopt 20 [];
  L10():
    p3 = prom<V +>{
      r10 = `:`(1.0, 15.0);
      r11 = `*`(r10, 2.0);
      return r11;
    };
    r13 = dyn pretty3(p3);
    check L11() else D7();
  D7():
    deopt 22 [r13];
  L11():
    pretty4 = ldf pretty;
    check L12() else D8();
  D8():
    deopt 24 [];
  L12():
    p4 = prom<V +>{
      r14 = `:`(1.0, 20.0);
      return r14;
    };
    r16 = dyn pretty4(p4);
    check L13() else D9();
  D9():
    deopt 26 [r16];
  L13():
    pretty5 = ldf pretty;
    check L14() else D10();
  D10():
    deopt 28 [];
  L14():
    p5 = prom<V +>{
      r17 = `:`(1.0, 20.0);
      return r17;
    };
    r19 = dyn pretty5[, n](p5, 2.0);
    check L15() else D11();
  D11():
    deopt 32 [r19];
  L15():
    pretty6 = ldf pretty;
    check L16() else D12();
  D12():
    deopt 34 [];
  L16():
    p6 = prom<V +>{
      r20 = `:`(1.0, 20.0);
      return r20;
    };
    r22 = dyn pretty6[, n](p6, 10.0);
    check L17() else D13();
  D13():
    deopt 38 [r22];
  L17():
    s = toForSeq(<int 5, 6, 7, 8, 9, 10, 11>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L18() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    cat = ldf cat;
    check L19() else D14();
  L18():
    pretty8 = ldf pretty;
    check L23() else D18();
  D14():
    deopt 42 [i2];
  D18():
    deopt 55 [];
  L19():
    p7 = prom<V +>{
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      return k1;
    };
    r24 = dyn cat("k=", p7, ": ");
    check L20() else D15();
  L23():
    p11 = prom<V +>{
      return 3.141592653589793;
    };
    r45 = dyn pretty8(p11);
    check L24() else D19();
  D15():
    deopt 46 [i2, r24];
  D19():
    deopt 57 [r45];
  L20():
    print = ldf print;
    check L21() else D16();
  L24():
    r46 = clos inner2854634098;
    st `add.names` = r46;
    __ = ldf `::`;
    check L25() else D20();
  D16():
    deopt 48 [i2];
  D20():
    deopt 62 [];
  L21():
    p10 = prom<V +>{
      diff = ldf diff;
      p9 = prom<V +>{
        sym = ldf range;
        base = ldf range in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r26):
        return r26;
      L1():
        pretty7 = ldf pretty;
        p8 = prom<V +>{
          sym1 = ldf c;
          base1 = ldf c in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r30, r31):
          r36 = `+`(r30, r31);
          return r36;
        L1():
          k2 = ld k;
          k3 = force? k2;
          checkMissing(k3);
          r32 = `-`(<missing>, k3);
          r33 = `^`(10.0, r32);
          r34 = `*`(3.141592653589793, r33);
          c1 = ldf c in base;
          r35 = dyn c1(0.0, r34);
          goto L0(100.0, r35);
        L2():
          r29 = dyn base1(0.0, <lang `*`(pi, `^`(10.0, `-`(k)))>);
          goto L0(100.0, r29);
        };
        r38 = dyn pretty7(p8);
        range = ldf range in base;
        r39 = dyn range(r38);
        goto L0(r39);
      L2():
        r25 = dyn base(<lang pretty(`+`(100.0, c(0.0, `*`(pi, `^`(10.0, `-`(k))))))>);
        goto L0(r25);
      };
      r41 = dyn diff(p9);
      return r41;
    };
    r43 = dyn print(p10);
    check L22() else D17();
  L25():
    r47 = dyn __("utils", "str");
    check L26() else D21();
  D17():
    deopt 50 [i2, r43];
  D21():
    deopt 65 [r47];
  L22():
    goto L0(i2);
  L26():
    checkFun.0(r47);
    r48 = r47 as cls;
    p15 = prom<V +>{
      lapply = ldf lapply;
      p13 = prom<V +>{
        add_names = ldf `add.names`;
        p12 = prom<V +>{
          r49 = `:`(-10.0, 20.0);
          return r49;
        };
        r51 = dyn add_names(p12);
        return r51;
      };
      p14 = prom<V +>{
        pretty9 = ld pretty;
        pretty10 = force? pretty9;
        checkMissing(pretty10);
        return pretty10;
      };
      r54 = dyn lapply(p13, p14);
      return r54;
    };
    r56 = dyn r48(p15);
    check L27() else D22();
  D22():
    deopt 68 [r56];
  L27():
    __1 = ldf `::`;
    check L28() else D23();
  D23():
    deopt 70 [];
  L28():
    r57 = dyn __1("utils", "str");
    check L29() else D24();
  D24():
    deopt 73 [r57];
  L29():
    checkFun.0(r57);
    r58 = r57 as cls;
    p19 = prom<V +>{
      lapply1 = ldf lapply;
      p17 = prom<V +>{
        add_names1 = ldf `add.names`;
        p16 = prom<V +>{
          r59 = `:`(0.0, 20.0);
          return r59;
        };
        r61 = dyn add_names1(p16);
        return r61;
      };
      p18 = prom<V +>{
        pretty11 = ld pretty;
        pretty12 = force? pretty11;
        checkMissing(pretty12);
        return pretty12;
      };
      r64 = dyn lapply1[, , `min.n`](p17, p18, 0.0);
      return r64;
    };
    r66 = dyn r58(p19);
    check L30() else D25();
  D25():
    deopt 76 [r66];
  L30():
    sapply = ldf sapply;
    check L31() else D26();
  D26():
    deopt 78 [];
  L31():
    p21 = prom<V +>{
      add_names2 = ldf `add.names`;
      p20 = prom<V +>{
        r67 = `:`(0.0, 20.0);
        return r67;
      };
      r69 = dyn add_names2(p20);
      return r69;
    };
    p22 = prom<V +>{
      pretty13 = ld pretty;
      pretty14 = force? pretty13;
      checkMissing(pretty14);
      return pretty14;
    };
    r72 = dyn sapply[, , `min.n`](p21, p22, 4.0);
    check L32() else D27();
  D27():
    deopt 83 [r72];
  L32():
    pretty15 = ldf pretty;
    check L33() else D28();
  D28():
    deopt 85 [];
  L33():
    r73 = dyn pretty15(1.234E100);
    check L34() else D29();
  D29():
    deopt 87 [r73];
  L34():
    pretty16 = ldf pretty;
    check L35() else D30();
  D30():
    deopt 89 [];
  L35():
    r74 = dyn pretty16(1001.1001);
    check L36() else D31();
  D31():
    deopt 91 [r74];
  L36():
    pretty17 = ldf pretty;
    check L37() else D32();
  D32():
    deopt 93 [];
  L37():
    r75 = dyn pretty17[, `shrink.sml`](1001.1001, 0.2);
    check L38() else D33();
  D33():
    deopt 97 [r75];
  L38():
    r76 = `:`(-7.0, 3.0);
    s1 = toForSeq(r76);
    l1 = length(s1);
    i5 = 0;
    goto L2(i5);
  L2(i6):
    i7 = `+`.1(i6, 1);
    c2 = `<`.1(l1, i7);
    if c2 then L39() else L3();
  L3():
    x1 = `[[`(s1, i7, NULL, TRUE);
    st k = x1;
    cat1 = ldf cat;
    check L40() else D34();
  L39():
    invisible.0();
    popenv;
    return i7;
  D34():
    deopt 103 [i7];
  L40():
    p24 = prom<V +>{
      formatC = ldf formatC;
      p23 = prom<V +>{
        k4 = ld k;
        k5 = force? k4;
        checkMissing(k5);
        r77 = `^`(2.0, k5);
        return r77;
      };
      r79 = dyn formatC[, width](p23, 9.0);
      return r79;
    };
    p27 = prom<V +>{
      formatC1 = ldf formatC;
      p26 = prom<V +>{
        pretty18 = ldf pretty;
        p25 = prom<V +>{
          k6 = ld k;
          k7 = force? k6;
          checkMissing(k7);
          r81 = `^`(2.0, k7);
          return r81;
        };
        r83 = dyn pretty18[, `shrink.sml`](1001.1001, p25);
        return r83;
      };
      r85 = dyn formatC1[, width](p26, 6.0);
      return r85;
    };
    r87 = dyn cat1("shrink=", p24, ":", p27, "\n");
    check L41() else D35();
  D35():
    deopt 109 [i7, r87];
  L41():
    goto L2(i7);
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("pretty");
    goto L0(r2);
  L2():
    r = dyn base("pretty");
    goto L0(r);
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg paste:cls, reg v1:*, reg v2:V, reg p:p(V +), reg r1:V, reg l:*, reg names__:cls, reg r2:V, reg v3:*, reg v4:V |
    mkenv;
    st v = v;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    r1 = dyn paste(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    l = ld v;
    names__ = ldf `names<-`;
    check L2() else D2();
  D2():
    deopt 5 [r1, l, r1];
  L2():
    r2 = dyn names__(l, NULL, r1);
    check L3() else D3();
  D3():
    deopt 7 [r1, r2];
  L3():
    st v = r2;
    v3 = ld v;
    check L4() else D4();
  D4():
    deopt 9 [v3];
  L4():
    v4 = force? v3;
    checkMissing(v4);
    popenv;
    return v4;
  }
}